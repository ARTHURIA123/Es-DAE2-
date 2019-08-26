#include <stdio.h>
int main()
{
    float sum, base, height;
    scanf("%f", &base);
    scanf("%f", &height);
    sum = 0.5*base*height;
    printf("%.2f", sum);
    return 0;
}