#include<stdio.h>
void main()
{
	int i,a[5],skey,flag=0;
	printf("enter five elements:");

    for(i=0;i<5;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("\nenter the search key:");
	scanf("%d",&skey);
	for(i=0;i<5;i++)
	{
		if(a[i]==skey)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("digit found:");
	}
	else
	{
		printf("digit not found:");
	}
}

