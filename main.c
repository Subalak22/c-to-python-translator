#include<stdio.h>
#include<string.h>
#include<math.h>
void work(int i)
{
	while(i<10)
	{
		printf("The value of i is %d\n",i);
		i++;
	}
}
void work2(int num)
{
	int sum;
	sum=0;
	for(int k=0;k<num;k++)
	{
		sum+=k;
	}
	printf("The sum is %d\n",sum);
}
int main()
{
	int i,a,b,num,j;
	char name[10],ch;
	int arr1[10];
	int arr2[]={1,2,3,4,5,6,7,8,9};
	printf("Enter your name\n");
	scanf("%s",&name);
	printf("Enter a or b or c\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
			printf("The letter is %c\n",ch);
			break;
		case 'b':
			printf("The letter is %c\n",ch);
			break;
		case 'c':
			printf("The letter is %c\n",ch);
			break;
		default:
			printf("Invalid input\n");
			break;
	}
	printf("Enter the value of i\n");
	work(i);
	printf("Enter values of a and b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is bigger\n");
	}
	else
	{
		printf("b is bigger\n");
	}
	printf("Enter the value of j\n");
	scanf("%d",&j);
	do
	{
		printf("The value of j is %d\n",j);
		j++;
	}while(j<10);
	printf("Enter a number\n");
	scanf("%d",&num);
	work2(num);
	return 0;
}
