#include<stdio.h>

int stepcnt=0,swapcnt=0,compcnt=0;

int linear(char cities[10][10],int n,char search[10])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		j=0;
	while(cities[i][j]!='\0' && search!='\0')
	{
		compcnt++;
		if(cities[i][j]!=search[j])
		{
			break;
		}
		j++;
		stepcnt++;
	}	
		if(cities[i][j]=='\0' && search[j]=='\0')
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	char cities[10][10],search[10];
	int n,found,i;
	
	printf("\n enter the no. of cities that you want ");
	scanf("%d",&n);
	
	printf("\n enter the cities");
	for(i=0;i<n;i++)
	{
		scanf("%s",cities[i]);
	}
	
	printf("\n enter the search cities ");
	scanf("%s",search);
	
	found=linear(cities,n,search);
	
	if(found==-1)
	{
		printf("\n city is not found ");
	}
	
	else
	{
		printf("\n city present at position %d",found);
		printf("\n stepcnt %d \n swapcnt %d \n compcnt %d ",stepcnt,swapcnt,compcnt);
		return 0;
	}
}