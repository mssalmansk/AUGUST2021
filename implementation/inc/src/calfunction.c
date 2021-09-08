/**
 * @file calfuntion.c
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
int addition()  
{  
    int i, sum = 0, num, f_num;    
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
}  
