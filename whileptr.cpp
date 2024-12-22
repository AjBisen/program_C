#include <stdio.h> 

int main() 
{ 
    
    int i=5 , j; 

    while (i >= 1) 
    { 
        j = 1; 
        while (j <= 5) 
        { 
            if (i <= j) 
            
                printf("%d", i); 
            else 
                printf(" "); 
            j++; 
        } 
        
        printf("\n"); 
        i--; 
    } 

}
