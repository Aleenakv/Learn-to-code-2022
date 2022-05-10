#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,d,e;
    float z;
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    z=(float)a/(float)b;
    printf("%d\n%d\n%d\n%.2f\n",c,d,e,z);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
