#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T1[10][10];
    int i,j,n;
    int s=0;
    printf("Input the size of the matrix :");
    scanf("%d",&n);

    printf("input the element of the first matrix :");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            printf("element [%d] [%d]",i,j);
            scanf("%d",&T1[i][j]);
        }

    for(i=0;i<n;i++)

            s+=T1[i][n-i-1];


    printf("la somme egale a : %d",s);

    return 0;
}
