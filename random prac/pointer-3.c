#include<stdio.h>

int main()
{
int x=20,y=30,z=40;
int *ptr;

ptr = &x;
printf( "x= %d" ,*ptr   );
return 0;

}