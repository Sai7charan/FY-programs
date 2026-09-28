#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("menu~\n");
printf("1-Addition\n");
printf("2-Subtraction\n");
printf("3-Multiplication\n");
printf("4-Division\n");
printf("Select operation~\n");

if(scanf("%d",&choice) !=1 )
{
  printf("Enter Correct Operation ");
  return 0;
}
  //choice b/w 1 and 4
if(choice < 1 || choice > 4)
{
printf("Invalid operation");
return 0;
}
printf("Enter any 2 numbers:\n");
if (scanf("%d %d",&a,&b) !=2)
{
printf("Invalid number.\n");
return 0;
}
//switch case code of ops ad results.
switch(choice)
{
case 1:
res=a+b;
printf("Addition =%d\n ",res);
break;

case 2:
res=a-b;
printf("Subtraction =%d\n",res);
break;

case 3:
res=a*b;
printf("Multiplication =%d\n ",res);
break;

case 4:
if (b==0)
{
printf("Division by 0 is invalid operation.\n");
return 0;
}
res=a/b;
printf("Division =%d\n ",res);
break;

}

return 0;

}
