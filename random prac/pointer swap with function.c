#include<stdio.h>
void swap(int *ptr1,int *ptr2)
{

int temp;
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;


}

int main()
{
int x=20,y=90;

printf("Before swap:\n X=%d\nY=%d",x,y);
swap(&x,&y);
printf("after swap:\n X=%d,Y=%d",x,y);
}
