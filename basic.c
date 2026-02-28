
#include <stdio.h>

int main() {
    // Write C code here
   int a=1025;
   int *p;
   p=&a;
   
  // printf("value of a =%d\n",a);
   
   printf("value of *p =%d\n",*p);
   printf("address of a =%d\n",p);
   //printf("address of a use &a = %d\n",&a);
  // printf("address of p =%d\n",&p);
   
 ////  printf("addres of p+1 =%d\n", p+1);
 //  printf("value of *p+1 =%d\n",*(p+1));
   
  /*int b=20;
   *p=b;
   printf("value of b =%d\n",*p);
   printf("address of p=%d\n",p);
   printf("addres of b=%d\n",&b);*/
   
   char *ch;
    ch= (char*)p;
   printf("vlaue of ch=%d\n",*(ch+1));
   printf("address of ch =%d\n",ch+1);
   
   
   
   
   

    return 0;
}