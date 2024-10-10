#include<stdio.h>
void sort(int ar[],int n);
void swap(int *a,int *b);
int binary_search(int ar[],int st,int end,int k);
int main()
{
	int n,ar[100],i;
	printf("Enter the number of values:");
	scanf("%d",&n);
	for(i=0;i<n;i+=1)
	{
		scanf("%d",&ar[i]);
	}
	sort(ar,n);
	printf("\nSorted array:");
	for(i=0;i<n;i+=1)
	    printf("%d",ar[i]);
	int k;
	printf("\nEnter the search element:");
	scanf("%d",&k);
	printf("\nElement found at the index %d",binary_search(ar,0,n-1,k));
}
void sort(int ar[],int n)
{
	int min,i,j;
	for(i=0;i<n;i+=0)
	{
		min=i;
		for(j=i+1;j<n;j+=1)
		{
			if(ar[min]>ar[j])
			min=j;
		}
		swap(&ar[i],&ar[min]);
	}
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int binary_search(int ar[],int st,int end,int k)
{
	if(st<=end){
		int mid=(st+end)/2;
		if(ar[mid]==k)
		   return mid;
		else if(ar[mid]>k)
		   return binary_search(ar,st,mid-1,k);
		else
		   return binary_search(ar,mid+1,end,k);
	}
	else{
		return -1;
	}
}
