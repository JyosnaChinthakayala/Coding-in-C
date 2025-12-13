#include<stdio.h>
void main()
{
    int i,n,key,a[20],flag=0;
    printf("enter the number of elements in the search list\n");
    scanf("%d",&n);
    printf("enter the elements in your list\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the key element\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    if(a[i]==key)
     flag=1;
    if(flag==1)
    printf("%d is found",key);
    else
    printf("%d is not found",key);
}