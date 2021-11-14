#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,x,k,arr[10];
    printf("Input how many element in the arr :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("element-%d :",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(x=i+1;x<n;x++)
        {
            if(arr[i]>arr[x])
            {
                j=arr[x];
                arr[x]=arr[i];
                arr[i]=j;
            }
        }
    }

    printf("votre tab triee:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("enter a num y want to add: ");
    scanf("%d ",&k);

    arr[n]=k;
    printf("%d",arr[n]);
    x=0;
    i=0;

    for(i=0; i<=n; i++)
    {
        for(x=i+1; x<=n; x++)
        {
            if(arr[i]>arr[x])
            {
                j=arr[x];
                arr[x]=arr[i];
                arr[i]=j;
            }
        }
    }

    printf("new tab triee :");

    for ( i = 0; i <= n; i++)
    {
        printf("%d",arr[i]);
    }


    return 0;
}
