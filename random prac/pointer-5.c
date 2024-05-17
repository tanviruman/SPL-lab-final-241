
#include<stdio.h>
int main()
{
int x=20,y=30,temp;
int *ptr1,*ptr2;
ptr1=&x;
ptr2=&y;

//swaping
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
printf("X=%d , Y=%d",*ptr1,*ptr2);

return 0;
}
