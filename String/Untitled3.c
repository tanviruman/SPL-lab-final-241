
#include<stdio.h>
int main()
{
char str[1000];
gets(str);
int index=0;

for(int i=0;str[i]!='\0';i++)
{

for(int j=0;j<i;j++)
{

if(str[i]==str[j]){

    break;
}
if(j==i){
str[index++]=str[i];
}
str[index]='\0';
}

}

puts(str);

}
