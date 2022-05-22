#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    if((a%2)==0)
        printf("Even\n%d",a*a);
    
    else
        printf("Odd\n%d",a*a*a);
        
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
