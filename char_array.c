
#include <stdio.h>
#include<string.h>
void func(const char *c)
{
    c[0]='a'; //it also error;
    while(*c !='\0')
    {
        printf("%c",*c);
        c++;
    }
}

int main()
{
   /* char c[5]="JOHN";
    char a[5]={'j','o','h','n'};
    printf("%s\n",c);
    printf("len=%d\n",strlen(c));
    printf("len use bytes =%d\n",sizeof(c));
    printf("-----------------------------------------\n");
    printf("%s\n",a);
    printf("len=%d\n",strlen(a));
    printf("len use bytes =%d\n",sizeof(a));
    */
    
    
   /* char c1[6]="hello";
    char *c2;
    c2=c1; //it store h address like 200;
     c2[0]='a';
    for(int i=0;c2[i]!='\0';i++)
    {
        printf("%c",c1[i]);
    }
    
    int j=0;
    while(*(c2+j)!='\0')
    {
        printf("%c",*(c2+j));
        j++;
    }
    func(c1);*/
    
    char c[20]="hello";
    //char* ="hello";
    //c[0]='a';   //show error
    func(c);

    
    
    return 0;
}