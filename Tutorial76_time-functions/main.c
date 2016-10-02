#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int main()
{
    time_t currentTime;
    time(&currentTime);

    struct tm *myTime = localtime(&currentTime);
    printf("%i/%i/%i\n", myTime->tm_mon + 1, myTime->tm_mday, myTime->tm_year + 1900);

    printf("%s\n",ctime(&currentTime));
    return 0;
}
