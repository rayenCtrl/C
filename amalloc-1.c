#include<stdio.h>
#include<stdlib.h>

void liret(int *t,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("donner un entier :");
        scanf("%d",&t[i]);
    }
}

void affichert(int *t,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",t[i]);
    }
}

void lireM(int **M,int K,int J)
{
    for (int i = 0; i < K; i++)
    {
        for (int b = 0; b < J; b++)
        {
            printf("entrer entier:");
            scanf("%d",&M[i][b]);
        }        
    }    
}

void afficherM(int**M,int K,int J)
{
    for (int i = 0; i < K; i++)
    {
        for (int b = 0; b < J; b++)
        {
            printf("%d ",M[i][b]);
        }
        printf("\n");
    }    
}

int main()
{
    int n,K,J;
    printf("donner n:");
    scanf("%d",&n);
    //location dynamique d'un tab
    int *t = (int*)malloc(n*sizeof(int));    
    liret(t,n);
    affichert(t,n);
    free(t);
    printf("donner nb de ligne:");
    scanf("%d",&K);
    printf("donner nb de colonne:");
    scanf("%d",&J);
    //location dynamique d'un matrice
    int **M = ((int**)malloc(K*sizeof(int*)));
        for (int i = 0; i < J; i++)
        {
            M[i] = (int*)malloc(J*sizeof(int));
        }
        lireM(M,K,J);
        afficherM(M,K,J);
        //free matrice
        for (int i = 0; i < K; i++)
        {
            free(M[i]);
        }
        free(M);        
    return 0;
}