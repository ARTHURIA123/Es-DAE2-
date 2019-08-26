#include <stdio.h>

int main()
{
    int inputsec, hr, min, sec;
    scanf("%d", &inputsec);

    min = inputsec/60;
    sec = inputsec%60;
    hr = min/60;
    min = min%60;

    printf("%d:%d:%d", hr, min, sec);
    return 0;
}