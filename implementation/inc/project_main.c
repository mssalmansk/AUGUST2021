#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>
#include"cal.h"
int addition();  
int subtract();  
int multiply();  
int divide();     
void exit();  
int main()  
{    
    int oprt;  
    do  
    {    
        printf (" Select an  all operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n \n 5 Exit \n \n Please, Make a choice ");      
          
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
  
  
  
    
