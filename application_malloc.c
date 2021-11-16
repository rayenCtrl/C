#include<stdio.h>
#include<stdlib.h>

typedef struct MaDate
{
    char jour [10];
    int JJ;
    int MM;
}MaDate;

void initDate(MaDate *t)
{
    do
    {
        printf("entrer le jour:");
        scanf("%d",&t->JJ);
    } while (t->JJ<0 || t->JJ>31);
    
    do
    {
        printf("entrer le mois:");
        scanf("%d",&t->MM);
    } while (t->MM<0 || t->MM>12);
    printf("entrer le Jour (ex:lundi):");
    scanf("%s",t->jour);
}

void Remplir(MaDate **M,int l,int c)
{
    int i,j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            initDate(&M[i][j]);
        }
    }    
}

void Afficher(MaDate **M,int l, int c)
{
    int i,j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%-10s %2d/%-2d\t",M[i][j].jour ,M[i][j].JJ ,M[i][j].MM);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,l,c;
    printf("nb ligne:");
    scanf("%d",&l);
    printf("nb colonne");
    scanf("%d",&c);
    MaDate **M =(MaDate**)malloc(l*sizeof(MaDate*));
    for (i = 0; i < l; i++)
    {
        M[i] = (MaDate*)malloc(c*sizeof(MaDate));
    }
    Remplir(M,l,c);
    Afficher(M,l,c);
    //free memory
    for (i = 0; i < l; i++)
    {
        free(M[i]);
    }
    free(M);
    return 0;
}