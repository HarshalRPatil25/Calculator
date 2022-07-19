#include <stdio.h>
void main()
{
    char operators;
    float num1,num2;
    printf("Enter a first operands\n");
    scanf("%f",&num1);
    printf("Enter an second operand\n");
    scanf("%f",&num2);
    printf("Enter an arthematic operator(+-*/)\n");
    scanf("%*c%c",&operators);
    switch(operators)
    {
        case'+':
            printf("%f+%f=%f\n",num1,num2,num1+num2);
            break;
        case'-':
            printf("%f-%f=%f\n",num1,num2,num1-num2);
            break;
        case'*':
            printf("%f*%f=%f\n",num1,num2,num1*num2);
            break;
        case'/':
            printf("%f/%f=%f\n",num1,num2,num1/num2);
            break;

        default :
            printf("error unsupported operation");
    }

 {
   int num;
   printf ("Enter an number\n");
   scanf("%d",&num);
   if(num%2==0)

   printf("Enter num is even\n");
 else

    printf("number is odd \n");

 }

 {
  int n, rem, sum=0,num;
  printf ("Enter the number \n");
  scanf("%d",&num);
  n=num;
  do
  {
      rem =n%10;
      n=n/10 ;
      sum =sum +(rem*rem*rem);
  }
  while(n!=0);
  if(num==sum)
  {printf("number is armstrong");

  }
  else

  printf("number is not armstrong");
  }
}
