#include<stdio.h>
#include<conio.h>
int main()
{
  int a;
  printf("Enter a number between 1 to 5:");
  scanf("%d",&a);
  switch(a)
  {
    case 1:
    printf("You selected number one");
    break;
    case 2:
    printf("you selected number two");
    break;
    case 3:
    printf("you selected number three");
    break;
    case 4:
    printf("you selected number four");
    break;
    case 5:
    printf("you selected number five");
    break;
    default:
    printf("Enter the number between 1 to 5");
  }

}
