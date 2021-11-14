#include<stdio.h>

typedef struct Adresse
{
    char rue[50];                  
    char ville[50];
    int num;                

}Adresse;

typedef struct Personne         
{
    int id;
    char nom[50];
    char prenom[50];
    Adresse Adr;
}Personne;

void int_Adr (Adresse*a)
{
    do
    {
        printf("Entrer votre rue :\n");
        scanf("%s",&a->rue);
    } while ((a->num)<0);
    
    printf("Entrer votre ville :\n");
    scanf("%s",&a->ville);
    printf("Entrer la num de rue :");
    scanf("%d",&a->num);
}

void int_Personne (Personne*a)
{
    do
    {
        printf("entrer votre id :\n");
        scanf("%d",&a->id);
    } while ((a->id>100000000) || (a->id<0));
    
    printf("entrer votre nom :\n");
    scanf("%s",&a->nom);
    printf("entrer votre prenom :\n");
    scanf("%s",&a->prenom);
    int_Adr(&a->Adr);
}

void AfficherAdr (Adresse*a)
{

    printf("numero de rue :%d\n",a->num);
    printf("nom de rue :%s\n",a->rue);
    printf("nom du ville :%s\n",a->ville);
}

void AfficherPers(Personne*p)
{
    printf(" id :%d\n",p->id);
    printf("nom  :%s\n",p->nom);
    printf("prenom :%s\n",p->prenom);
    AfficherAdr(&p->Adr);
}

int RechPerId (Personne per[],int idP)            

{
    int i;
    for ( i = 0; i < 10; i++)
    {
        if(per[i].id == idP)
        {
            return i;
        }
    }
    printf("Aucune Personne ne covient a cette id !!");
    return -1;
}

int main()
{
    Personne TabP[10];
    int i;

    for(i=0; i<2; i++)
    {
        printf("%d :\n",i);
        int_Personne(&TabP[i]);
    }

    for(i=0; i<2; i++)
    {
        AfficherPers(&TabP[i]);
    }
    return 0;
}


