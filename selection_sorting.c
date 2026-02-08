#include<stdio.h>
int main()
{
int n,a[20],min,loc,i,j,t;
printf("Enter the number of elements in the list\n");
scanf("%d",&n);
printf("Enter the elements in the list\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<(n-1);i++)
{
min=a[i];loc=i;
for(j=i+1;j<n;j++)
{
if(min>a[j])
{
min=a[j];
loc=j;
}
}
t=a[i];
a[i]=a[loc];
a[loc]=t;
}
printf("After sorting: \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}


