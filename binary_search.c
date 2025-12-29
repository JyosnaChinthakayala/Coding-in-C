#include<stdio.h>
void main()
{
    int n,flag=0,key,h,l,mid,a[20],i;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements in your list in ascending order\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the key element\n");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h)
    {
     mid=(l+h)/2;
     if( a[mid]==key)
     {
        flag=1;
        break;
     }
     else if(key<a[mid])
        h=mid-1;
     else
        l=mid+1;
    }
    if(flag==1)
    printf("%d is found",key);
    else
    printf("%d is not found\n",key);
    

}