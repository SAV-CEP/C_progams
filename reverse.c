#include<stdio.h>
void main(){
int n,rev=0,rem;
printf("Enter an int Number :");
scanf("%d",&n);

if (n==0){
printf("The Number is zero , please input another number other than zero");
}

else{

 while(n!=0){
 
  rem=n%10;
  rev=(rev*10)+rem;
  n=n/10;
  
 }
 printf("The reversed number is : %d\n",rev);
int revten=rev+10;
printf("The reversed Number+10 = %d",revten);

}



}
