/**
 * @file calfunction2.c
 * @author md salman
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>    
int addition();  
int subtract();  
int multiply();  
int divide();
int mod();
void exit();  
 int subtract()  
{  
    int n1, n2, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    result = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, result);  
}   

  
