#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f = 3.532; // 4 bytes, least percise, stores 6 digits: 1.23456
    double d = 5.22334567879876543; // 8 bytes, stores 15 digits, 1.23456789123456
    long double ld = 6.234234546325657543; // 12 bytes, stores 18 digits, 1.23456789123456789

    printf("%f\n", f);
    printf("%f\n", d);
    printf("%llf\n", ld);
    printf("%.2e\n", d); // gives scientific notation
    return 0;
}
