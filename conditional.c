#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c;
  printf("Enter first Number:");
  scanf("%d",&a);
  printf("Enter second Number:");
  scanf("%d",&b);
  printf("Enter third Number:");
  scanf("%d",&c);
  if(a>b && b>c)
  {
    printf("Greatest Number is %d",a);
  }
  else if(b>a && b>c)
  {
    printf("Greatest Number is %d",b);
  }
  else
  {
    printf("Greates Number is %d",c);
  }

}
