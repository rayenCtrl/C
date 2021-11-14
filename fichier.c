#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    char ch[20];
    FILE *fptr=NULL;
    
    fptr=fopen("test.txt","w");
        if (fptr != NULL){
        fprintf(fptr,"Hello \n");
        fclose(fptr);
        }
    fptr=fopen("test.txt","a");
        if (fptr != NULL){
        fprintf(fptr,"Guten Tag !\n");
        fclose(fptr);
        }
    fptr=fopen("test.txt","r");
        if(fptr!=NULL)
        {
            while(!feof(fptr))
            {
                fscanf(fptr,"%s\n",ch);
                printf("%s ",ch);
            }        
        }   

return 0;
}
