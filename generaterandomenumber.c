#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, userinput, i = 0;
    int n = 100;
    printf("\n enter number you want to continue for generate number:");
    scanf("%d", &userinput);
    while (i < userinput)
    {
        num = rand() % n;
        printf("\n generate randome number:%d", num);
        i++;
    }
    return 0;
}
