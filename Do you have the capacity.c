#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float l,b,h,p,q;
    scanf("%f\n%f\n%f",&l,&b,&h);
    p=l*l*l;
    q=l*b*h;
    p=fabs(p);
    q=fabs(q);
    printf("%.3f\n%.3f",p,q);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
