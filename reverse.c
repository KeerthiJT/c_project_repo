#include<stdio.h>
void reverse()
// int main()
{
int n, reverse=0, rem;
printf("Enter a number to Reverse: ");
  scanf("%d", &n);
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
printf("Reversed Number: %d\n",reverse);
printf("------------------------------------------------\n");
return 0;
}
