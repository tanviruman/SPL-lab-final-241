#include<stdio.h>
#include<string.h>
int main()
{
 int count = 0;
 char str[10000];
 printf("Enter String:");
 gets(str);

 char str1[100];
 printf("Enter word:");
 gets(str1);
int wordLength = strlen(str1);
for(int i=0;str[i]!='\0';i++){
int match=1;

for(int j=0;j<wordLength;j++)
{

if(str[i+j]!=str1[j])
{

    match=0;
    break;
}
}
if(match){

    count ++;
}
}


printf("total word=%d",count);

return 0;

}
