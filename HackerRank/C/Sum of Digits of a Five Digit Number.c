// problem statement : The modulo operator, %, returns the remainder of a division. For example, 4 % 3 = 1 and 12 % 10 = 2. The ordinary division operator, /, returns a truncated integer value when performed on integers. For example, 5 / 3 = 1. To get the last digit of a number in base 10, use 10 as the modulo divisor. 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,m,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n. 
    while(n!=0) 
    {
    m=n%10; 
    sum=sum+m; 
    n=n/10; 
} 
printf("%d",sum);
    return 0;
}
