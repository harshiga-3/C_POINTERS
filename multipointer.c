#include <stdio.h>

int main() {
    
   
   int x=10;
   int *p;
   p=&x;
   int **q;
   q=&p;
   int ***r;
   r=&q;
   printf("value of x=%d\n",x);
   printf("address of x=%d\n",p);
   printf("value use *p=%d\n",*p);
   printf("value of *q=%d\n",*q);
   printf("value of **q=%d\n",**q);
   printf("value of *r=%d\n",*r);
   printf("value of **r=%d\n",**r);
   printf("value of ***r=%d\n",***r);
   
   
   

    return 0;
}