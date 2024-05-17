#include<stdio.h>

int sub ( int a,int b)
{
    return a-b;

}

int main()
{
    printf("Enter two integer value:");
    int x,y;
    //scanf("%d %d ",&x,&y);
    int newsub = sub(9,1);
    printf("sub= %d",newsub);

    return 0;
}
