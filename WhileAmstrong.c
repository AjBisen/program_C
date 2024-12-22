#include <stdio.h>
int main() {
    int num, org, rem, res = 0;
    
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    
    org = num;

    while (org > 0) {
    	                    
       rem = org % 10;
        
       res = res + rem * rem * rem;
                        
       org /= 10;

    }         
	   	printf("%d", res);

    if (res == num)
        printf(" is an Armstrong number.");
    else
    
        printf(" is not an Armstrong number.");

    return 0;
}
