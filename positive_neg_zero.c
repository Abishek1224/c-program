//Write a C Program to Check if a Number is Positive, Negative, or Zero. 
#include<stdio.h>
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is a positive number.", num);
    }
    else if (num < 0) {
        printf("%d is a negative number.", num);
        }
        else{
            printf("%d is zero.", num);
        }
    
}