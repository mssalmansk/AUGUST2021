#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>
int mod()  
{  
    int n1, n2, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n mod cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    result = n1 / n2;    
    printf (" \n The mod of %d / %d is: %d", n1, n2, result);  
}  
     
