#include<stdio.h>
int main()
{

int A[5]={10,20,30,40,50};
int *ptr;

ptr=&A[0];

for(int i=0;i<5;i++){

printf("%d\n",*ptr);
ptr++;
}

}
