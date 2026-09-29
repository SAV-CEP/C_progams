#include<stdio.h>
void main(){

float n1,n2,res;
printf("Enter two Number : ");
scanf("%f %f",&n1,&n2);
char op;
printf("Enter which operation should be performed(+,-,/,*) : ");
scanf(" %c",&op);
switch(op)
{
   case '+':
   res=n1+n2;
   printf("Result of n1+n2 = %f",res);
   break;
   case '-':
   res=n1-n2;
   printf("Result of n1-n2 = %f",res);
   break;        
   case '*':
   res=n1*n2;
   printf("Result of n1*n2 = %f",res);
   break;
   case '/':
   if(n2!=0){
       res=n1/n2;
       printf("Result of n1/n2 = %f",res);
       }
   else{
       printf("Division by zero is not possible");
       }
   break;
   default:
   printf("Invalid Operator");  
}

}
