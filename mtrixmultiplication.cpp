#include<stdio.h>
#define MAX 50
int main()
{
	int a[MAX][MAX],  b[MAX][MAX], product[MAX][MAX];
	int arows, acolumns,brows, bcolumns;
	int i,j,k;
	int sum =0;
	//part 1 for a
	printf("enter the rows and columns of the matrix a: ");
	scanf("%d %d",&arows, &acolumns);
	//part 2 for b
	printf("enter the elementsof matrix a: \n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acolumns;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//part 1 for b
	printf("enter the row and columns of matrix b: ");
	scanf("%d %d", &brows, &bcolumns);
	if(brows!=acolumns)
	{
		printf("sorry! We cannot multiply the matrix a and b");
	}
	else
	{
		//part 2 for b
	  printf("enter the element of matrix b:");
	  for(i=0;i<arows;i++)
	  {
	  	for(j=0;j<bcolumns;j++)
	  	{
	  		scanf("%d", &b[i][j]);
    }
	  }
	  
	
		}
		//part 3
		printf("\n");
		for(i=0;i<arows;i++)	
		{
			for(j=0;j<bcolumns;j++)
			{
				for(k=0;k<brows;k++)
				{
					sum+= a[i][k] * b[k][j];
				}
				product[i][j]=sum;
				sum=0;
			}
		}
		//printing the array elements
		printf("resultant matrix\n");
		for(i=0;i<arows;i++)
		{
			for(j=0;j<bcolumns;j++)
			{
				printf("%d",product[i][j]);
			}
			printf("\n");
		}
		return 0;
	}

