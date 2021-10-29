#include<stdio.h>
#define MAX 100
void merge(int arr1[],int arr2[],int arr3[],int f,int s)
{
	int i=0,j=0,k=0;
	while((i<f) && (j<s))
	{
		if(arr1[i]<arr2[j])
		{
		
			arr3[k]=arr1[i];
			i++;
		    k++;
     	}
		else
		{
		
			arr3[k]=arr2[j];
			j++;
		    k++;
		}
		
	}
	while(i<f)
	{
	arr3[k]=arr1[i];
       i++;
	   k++;
   }
	while(j<s)
	{
	arr3[k]=arr2[j];
	j++;
	k++;
    } 
}
int main(void)
{
 int arr1[MAX],arr2[MAX],arr3[2*MAX],f,s,i;
    printf("enter the size of 1st array ");
	scanf("%d",&f);
	printf("enter the size of 2nd array ");
	scanf("%d",&s);
	printf("\nenter the sorted element of  1st array\n");
	for(i=0;i<f;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\n enter the sorted element of 2nd array\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr2[i]);
	}
	merge(arr1,arr2,arr3,f,s);
	printf("\n the new arry after merging :");
	for(i=0;i<f+s;i++)
	{
		printf("%d ",arr3[i]);
	}
	return 0;
}
