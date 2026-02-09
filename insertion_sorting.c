#include<stdio.h>
void main()
{
    int a[20],n,key,t,i,j;
    printfprintf("Enter the number of elements in the list\n");
    scanf("%d",&n);
    printf("Enter the elements in the list\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=i-1;j>0;j--)
        {
            if(a[j]>t)
            a[j+1]=a[j];
            else
            break;
        }
        a[j+1]=t;
    }
    printf("After sorting: \n");
    for(i=0;i<n;i++)
       printf("%d ",a[i]);
    return 0;
}