#include<stdio.h>

/*
    Example of a Pointer (Pass by Reference)
    
    Swap the value of two variables using pointers 
    
    author: ranjan-stha
*/


void swap_values(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int val1, val2;
    val1 = 5;
    val2 = 10;
    
    printf ("\nBefore Swapping");
    printf ("\nThe value of val1 is %d", val1);
    printf ("\nThe value of val2 is %d", val2);
    
    /*
    After the swap_values function is invoked, the variable a stores the address of val1 and 
    b stores the address of val2. So, val1 and val2 are directly affected(modified) when
    operations are perfomed using pointer variables a and b
    */
    swap_values(&val1, &val2);
    
    printf("\n");
    
    printf ("\nAfter Swapping");
    printf("\nThe value of val1 is %d", val1);
    printf("\nThe value of val2 is %d", val2);
    
    return 0;
}

