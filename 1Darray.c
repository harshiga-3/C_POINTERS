// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a[5]={1,2,3,4,5};
   int *p;
   p=a;
   printf("%d\n",*p); //a[0] and *p equal
   printf("%d\n",a);// a and &a[0] equal
   printf("%d\n",p);
   printf("%d\n",&a);
   
   printf("%d\n",a[1]);
   printf("%d\n",*(p+1));//a[1] or *(p+1) equal;
   printf("%d\n",(p+1)); //&a[1] or (p+1)equal;
   printf("%d\n",&a[1]);
   printf("-----------------------------------\n");
   for(int i=0;i<5;i++)
   {
       printf("%d\n",a[i]);
       printf("%d\n",*(p+i));
       printf("%d\n",&a[i]);
       printf("%d\n",a+i);
       printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
   }

    return 0;
}