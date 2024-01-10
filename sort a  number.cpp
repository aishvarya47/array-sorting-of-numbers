//SORT A NUMBER//
#include<stdio.h>
int main()
{
	int y;
	printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY:\n");
	scanf("%d",&y);
	int x[y],i;
	printf("ENTER THE ELEMENTS OF ARRAY:\n");
	for(i=0;i<y;i++)
	{
		scanf("%d",&x[i]);
	}
	int j,temp;
	for(i=0;i<=y;i++)
	{
		for(j=i+1;j<y;j++)
		{
			if(x[j]<x[i])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("AFTER SORTING!\n");
	{
		for(i=0;i<y;i++)
		{
			printf("%d\n",x[i]);
		}
	}
	return 0;
}
