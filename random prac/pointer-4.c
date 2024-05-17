#include<stdio.h>

int main()
{
int x=20,y=30,sum;
int *ptr1=&x,*ptr2=&y;

sum=*ptr1+*ptr2;

printf("sum=%d",sum);
return 0;

}
