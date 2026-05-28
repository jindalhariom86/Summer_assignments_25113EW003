#include<stdio.h>

 int main(){

    int num, digit = 0;
    printf("Enter the Number : ");
    scanf("%d", &num);

    // int temp = num;
    
    while (num % 10 != 0)
    {
        num = num / 10;
        digit ++;
    }
    
    printf("%d", digit);

    return 0;
 }