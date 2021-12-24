#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1, num2, or;
    printf("Please Enter 2 Decimal Number : ");
    scanf("%d%d", &num1, &num2);
    or=num1|num2;
    printf("%d & %d Bitwise Or is = %d",num1, num2, or);
    getch();

    return 0;
}
