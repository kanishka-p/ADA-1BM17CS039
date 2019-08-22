#include<stdio.h>

void main()
{
int arr[20],n,k,min_index,i,j,temp;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter value for k");
scanf("%d",&k);
printf("enter the elements");
for (i=0;i<n;i++)
scanf("%d",&arr[i]);

for(i=0;i<n;i++)
{
min_index=i;
for(j=i+1;j<n-1;j++)
{
 if(arr[min_index]>arr[j])
  {
    min_index=j;
}}
  temp=arr[i];
   arr[i]=arr[min_index];
    arr[min_index]=temp;
}
printf("the kth element is");
printf("%d",arr[k-1]);
}

/*output:
enter the number of elements= 5
enter value for k = 3
enter elements = 1 6 2 4 3*/
