#include<stdio.h>
#include<conio.h>
#define MAX 100
int display(int a[],int *n);
int delection_begin(int a[],int *n);
int deletion_pos(int a[],int *n);
int deletion_end(int a[],int *n);

int main()
{
	int n,a[MAX],i,cho;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do
    {
	    printf("---------choose options to arrays insertions");
	    printf("\nDeletion Options:\n");
	    printf("1. deletion at Beginning\n");
	    printf("2. deletion at Position\n");
	    printf("3. deletion at End\n");
	    printf("Enter your choice: ");
	    scanf("%d", &cho);
	    switch (cho)
		{
	        case 1:
	            delection_begin(a, &n);
	            break;
	        case 2:
	            deletion_pos(a, &n);
	            break;
	        case 3:
	            deletion_end(a, &n);
	            break;
	        default:
	            printf("Invalid choice!\n");
	            display(a,&n);
	            return 1;
	    }
	}while(cho!=1 || cho!=2 || cho!=3 || cho!=4 || cho!=5);
	
}


int delection_begin(int a[],int *n)
{
	int i;
	if(*n==0)
	{
		printf("Not possible to delete");
	}
	for(i=0;i<*n;i++)
	{
		a[i]=a[i+1];
	}
	(*n)--;
}

int deletion_pos(int a[],int *n)
{
	int i,pos;
	printf("\nEnter the position to delete an element");
	scanf("%d",&pos);
	if(*n==0)
	{
		printf("Not possible to delete");
	}
	for(i=pos;i<*n;i++)
	{
		a[i]=a[i+1];
	}
	(*n)--;
	
}

int deletion_end(int a[],int *n)
{
	int i;
	if(*n==0)
	{
		printf("Not possible to delete");
	}
	(*n)--;
}

int display(int a[],int *n)
{
	int i;
	for(i=0;i<*n;i++)
	{
		printf("%d",a[i]);
	}
}

