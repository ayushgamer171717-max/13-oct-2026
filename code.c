#include<stdio.h>
int main()
{
    int num1 , num2;
    printf("enter two number: ");

    if (num1==num2)
    {
        printf(" result: %d = %d" , num1, num2);
    }
    else if(num1 > num2){
        printf(" result: %d > %d" , num1, num2);
    }
    return 0;
}