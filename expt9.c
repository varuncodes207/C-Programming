#include <stdio.h>
int main()
{
int choice;
float num1,num2,result;
do
{
printf("\n-----menu-driven calculator-----\n");
printf("1.addition\n");
printf("2.subtraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("5.exit\n");
printf("enter your choice(1-5):");
scanf("%d",%choice(1-5):");
if(choice == 5)
{
printf("exiting the calculator.goodbye!\n");
break;
}
if(choice>=1&& choice<=4)
{
printf("enter two number:");
scanf("%f %f",&num1,&num2);
}
else
{
printf("invalid choice!please try again.\n");
continue;
}
switch(choice)
{
case 1:
result=num1+num2;
printf("result:%2f-%2f=%.2f\n",num1,num2,result);
break;
case 2:
result=num1-num2;
printf("result:%2f*%2f=%2f\n",num1,num2,result);
break;
case 3:
result=num1*num2;
printf("result:%.2f*%.2f=%.2f\n",num1,num2,result);
break;


