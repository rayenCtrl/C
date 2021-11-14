#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T1[10][10];
    int i,j,n;
    printf("Input the size of the matrix :");
    scanf("%d",&n);

    printf("input the element of the first matrix :");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            printf("element [%d] [%d]",i,j);
            scanf("%d",&T1[i][j]);
        }

    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<=i;j++){
            printf("%d",T1[i][j]);
        }
        }
    return 0;
}
