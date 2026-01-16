#include<stdio.h>
void main()
{
    int t,i,n,a[20];
    printf("enter the  number of elements in the list\n");
    scanf("%d",&n);
    printf("enter the element in the list\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
     for(j=0;j<n-(i+1);j++)
     {
        if(a[i]>a[j+1])
        {
            t=a[i];
            a[i]=a[j+1];
            a[j+1]=t;
        }
     }

    }
}
