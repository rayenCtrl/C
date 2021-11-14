#include<stdio.h>
#include<string.h>

typedef struct adresse{
	char rue[30];
	int num;
	char ville[30];
}Adresse;
typedef struct personne{
	int id;
	char nom[30];
	char prenom[30];
	Adresse adr;
}Personne;


void InitAdress(Adresse *adr){
	char r[30];
	int n;
	char v[30];	
	do{
	printf("Numéro : ");
	scanf("%d",&n);
	}while(n<=0);
	printf("Rue : ");
	scanf("%s",r);

	printf("Ville : ");
	scanf("%s",v);
	strcpy((*adr).rue,r);
	(*adr).num = n;
	strcpy((*adr).ville,v);
	printf("\n");
	
}
void InitPersonne(Personne *per){
	int i;
	char n[30];
	char p[30];
	Adresse a;
	do{
	printf("Donner l'id : ");
	scanf("%d",&i);
	}while(i<10000000 || i>99999999);
	printf("Donner le nom : ");
	scanf("%s",n);
	printf("Donner le prenom : ");
	scanf("%s",p);
	printf("\n --- Adresse --- \n");
	InitAdress(&a);
	(*per).id = i;
	strcpy((*per).nom, n );
	strcpy((*per).prenom,p);
	(*per).adr = a;
}

void AfficherAdresse(Adresse *adr){
	printf("--- Adresse --- \n");
	printf(" %d Rue  %s, %s \n",(*adr).num,(*adr).rue,(*adr).ville); 
}
void AfficherPersonne(Personne *per){
	printf("--- Personne --- \n");
	printf("Id : %d \n",(*per).id);
	printf("Nom : %s \n",(*per).nom);
	printf("Prenom : %s \n",(*per).prenom);
	Adresse a = (*per).adr;
	AfficherAdresse(&a);

}

Personne RechercherId(Personne tab[3],int id){
	int i=0;
	while(i<3){
		if(tab[i].id == id){
			return tab[i];
		}
		
	}
}


int main(){
	Personne tab[10];
	for(int i=0;i<3;i++){
		printf("Ajouter Personne \n");
		InitPersonne(&tab[i]);
	}
	for(int i=0;i<3;i++){
		AfficherPersonne(&tab[i]);
	}
	Personne p = RechercherId(tab,12345678);
	AfficherPersonne(&p);
}
