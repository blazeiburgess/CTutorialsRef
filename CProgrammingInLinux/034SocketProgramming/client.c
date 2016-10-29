#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define DATAMSG "Hello world or socket"

int main(int argc, const char *argv[]) {
  int sock;
  struct sockaddr_in server;
  struct hostent *hp;
  char buff[1024];

  memset(&server, 0, sizeof(server));

  sock = socket(AF_INET, SOCK_STREAM, 0);

  if (sock < 0) {
    perror("Socket failed");
    close(sock);
    exit(1);
  }

  server.sin_family = AF_INET;

  hp = gethostbyname(*argv[1]);
  if (hp == 0) { 
    perror("gethostbyname failed\n");
    close(sock);
    exit(1);
  }

  memcpy(&server.sin_addr, hp->h_addr, hp->h_length);
  server.sin_port = htons(5000);

  if(connect(sock, (struct sockaddr *) &server, sizeof(server)) < 0) {
    perror("connection failed");
    close(sock);
    exit(1);
  }

  if (send(sock, DATAMSG, sizeof(DATAMSG), 0) < 0) {
    perror("Send failed");
    close(sock);
    exit(1);
  }
  printf("Send %s\n", DATAMSG);
  close(sock);
  
  return 0;
}
