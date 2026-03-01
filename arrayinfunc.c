

#include <stdio.h>
void fun(int a[]) /*it take a first element of array  it implicity in background the ak stores 
 stores first element address 200 so like (int*a take) a[0]=8 because pointer size
is 8      (*a  and int a[]) same */
{
    printf("func=%d\n",sizeof(a)); //8 because the system has 64 bit 
    int n=sizeof(a)/sizeof(a[0]); //8/4=2 
printf("arraysize=%d\n",n);

int i=0;int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+a[i];
}
printf("sum=%d\n",sum); //sum=3;
}

void dou(int * a,int n)
{
    for(int j=0;j<n;j++)
    {
        printf("%d\n",2*a[j]);
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    fun(a);
    printf("main size=%d\n",sizeof(a)); //func=8;main=20
int n=sizeof(a)/sizeof(a[0]);  //20/4=5
printf("arraysizein main=%d\n",n);
dou(a,n);

    return 0;
}