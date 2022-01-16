#include<stdio.h>
int main()
{ int n,i,r;
  int sum =0; 
  int  temp=n;
  printf("Enter the value= ");
  scanf("%d",&n);
  while (n>0)
  {   r=n%10;
      sum=sum*10+r;
      n=(n/10);
  }
  n=temp;
  if (n==sum)
  {
      printf("Palindrom enumber");
  }
  else
  {
      printf("Not a palindrome number");
  }
 return 0;
}