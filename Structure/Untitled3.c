#include<stdio.h>


int main()
{
   
struct person
{
  int age;
  float salary;
}; 
 struct person person1,person2;
 person1.age=23;
 person1.salary=111.89;

 printf("Age=%d",person1.age);
printf("Salary=%f",person1.salary);
}
