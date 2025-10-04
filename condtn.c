#include<stdio.h>
int main()
{
int age;
printf("Enter age:");
scanf("%d", &age);

if(age < 18)
printf("Child");
else
printf("Teenage");

return 0;
}
