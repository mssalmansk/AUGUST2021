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
  
int main()  
{    
    int oprt;  
    do  
    {    
        printf (" Select an  all operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n  5 mod \n 6 exit \n \n Please, Make a choice ");      
          
        scanf ("%d", &oprt);  
        
    switch (oprt)  
    {  
        case 1:  
            addition(); 
            break; 
              
        case 2:  
            subtract(); 
            break;
              
        case 3:  
            multiply();  
            break; 
              
        case 4:  
            divide();  
            break; 
      case 5:
        mode();
        break;
              
        case 6:  
            exit(0);   
            break;
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n ********************** \n ");  
    } while (oprt != 7);  
      
  
    return 0;        
}  
  
  
  
 
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
    
int multiply()  
{  
    int n1, n2, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    result = n1 * n2;    
    printf (" The multiply of %d * %d is: %d", n1, n2, result);  
}    
int divide()  
{  
    int n1, n2, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    result = n1 / n2;    
    printf (" \n The division of %d / %d is: %d", n1, n2, result);  
}  
int mode()  
{  
    int n1, n2, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    result = n1 / n2;    
    printf (" The mode of %d * %d is: %d", n1, n2, result);  
}  
     

