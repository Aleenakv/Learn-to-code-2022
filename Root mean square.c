#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c,p,q,r,z;
    scanf("%f\n%f\n%f",&a,&b,&c);
    scanf("%f\n%f\n%f\n%f",&p,&q,&r,&z);
    p=a*a;
    q=b*b;
    r=c*c;
    z=(p+q+r)/3;
    z=sqrt(z);
    printf("%.2f",z);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
