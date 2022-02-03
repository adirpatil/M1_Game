/**
 * @file calcluator.c
 * @author your name (Aditya)
 * @brief 
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
struct complex_number{
    int real;
    int imaginary;
};
#define VAL 10

int main()
{
    int number11, number12;
    printf("Enter two numbers: ");
    scanf("%d %d", &number11, &number12);

    struct complex_number cn1 = {number11, number12};

    int number21, number22;
    printf("Enter two numbers %d: ",VAL);
    scanf("%d %d", &number21, &number22);

    struct complex_number cn2 = {number21, number22};

    printf("Sum of 2 complex number is = %d + i %d" ,cn1.real+cn2.real, cn1.imaginary+cn2.imaginary);

    return 0;
}