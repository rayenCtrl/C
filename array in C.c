#include <stdio.h>
/*
int main()
{
    int arr [5];
    arr[0]=17;
    arr[1]=10;
    arr[2]=19;
    arr[3]=96;

    printf("%d %d %d %d",arr[0],arr[1],arr[2],arr[3]);

    return 0;
}*/


//EX2
/*
int main()
{
    int T1[7],T2[7];
    int i,n;

    printf("enter number of element to be stored in the array:");
    scanf("%d",&n);

    printf("enter number of element into array:");

    for(i=0;i<n;i++)
    {

        printf("element - %d : ",i);
        scanf("%d",&T1[i]);
    }


    for(i=0;i<n;i++)
    {
        T1[i]=T2[i];
    }

    printf("les elements du Tab 1:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",T1);
    }

    printf("les elements du Tab coppier:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",T2);
    }
    return 0;
}*/

//EX3
/*
int main()
{

int tab[10];
int i,n;

    printf("nombre d'element du Tableau:");
    scanf("%d",&n);

    printf("Entrer les elements du Tableau:");
    for(i=0;i<n;i++)
    {
        printf("l'element -%d :",i);
        scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++)
        {
            printf("%d ",tab[i]);

        }
         printf("\n\n");
    printf("Tableau inversee ");
        for(i=n-1;i>=0;i--)
        {
            printf("%d ",tab[i]);
        }


    return 0;
}*/

//EX4
/
int main()
{

int tab[10];
int i,n,s=0;

    printf("nombre d'element du Tableau:");
    scanf("%d",&n);

    printf("Entrer les elements du Tableau:");
    for(i=0;i<n;i++)
    {
        printf("l'element -%d :",i);
        scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++)
        {
            s+=tab[i];
        }
        printf("%d ",s);

}*

//EX5 OCCURRENCE


//Ex6
/*
int main()
{
    int tab[20];
    int i,j,n,count=0;

        printf("nombre d'element du Tableau:");
        scanf("%d",&n);

        printf("Entrer les elements du Tableau:");
    for(i=0;i<n;i++)
    {
        printf("l'element -%d :",i);
        scanf("%d",&tab[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (tab[i]==tab[j]){
                count++;
                break;
            }
        }
    }
    printf("total number of dupmicate elements = %d",count);
    return 0;
}*/

//Ex7

int main()
{
    int tab[20],frq[20];
    int i,j,n,ctr;

        printf("Input the number of elements to be stored in the array :");
        scanf("%d",&n);

        printf("Input the elements in the array :");
        for(i=0;i<n;i++){
            printf("element - %d :",i);
            scanf("%d",&tab[i]);
            frq[i]=-1;
        }
        for(i=0;i<n;i++){
            ctr=1;
            for(j=i+1;j<n;j++){
                if(tab[i]==tab[j]){
                    ctr++;
                    frq[j]=0;
                }
            }
        }
        if(fr[i]!=0)
        {
            fr[i]=ctr;
        }
        printf("The frequency of all elements of array : \n");
        for(i=0;i<n;i++)
        {
            if(fr[i]!=0)
            {
                printf("%d occurs %d times \n",tab[i],frq[i]);
            }
        }
        return 0;
}

//Ex8

int main()
{
    int tab[20];
    int i,n,max,min;

    printf("Input the number of element in array : \n");
    scanf("%d",&n);

    printf("Input the elements in array : \n");
    for(i=0;i<n;i++){
        printf("element - %d :",i);
        scanf("%d",tab[i]);
    }
    max=tab[0];
    min=tab[0];
    for(i=1;i<n;i++){
        if(tab[i]<min){
            min=tab[i];
        }else if(tab[i]>max){
            max=tab[i];
        }
    }
    printf("le max est %d le min est %d \n",max,min);
    return 0;
}

//Ex9

int main()
{
    int tab1[10],tab2[10],tab3[20];
    int i,j,k,a,b,c;

    printf("Input the number of element in first array : \n");
    scanf("%d",&a);
    printf("input the element of arr 1 :");
    for(i=0;i<a;i++){
        printf("%d element :",i);
        scanf("%d",&tab1[i]);
    }
    printf("Input the number of element in second array : \n");
    scanf("%d",&b);
    printf("input the element of arr 2 :");
    for(j=0;j<b;j++){
        printf("%d element :",j);
        scanf("%d",&tab1[j]);
    }
    c=a+b;
    for(i=0;i<a;i++){
        tab3[i]=tab1[i];
    }
    for(j=0;j<b;j++){
        tab3[i]=tab2[i];
        i++;
    }
    for(i=0;i<c;i++){
        for(k=0;k<c-1;k++){
            if(tab3[k]<tab3[k+1]){
                j=tab3[k+1];
                tab3[k+1]=tab3[k];
                tab3[k]=j;
            }
        }
    }
    printf("the merged array in descending order :\n");
    for(i=0;i<c;i++){
        printf("%d ",tab3[i]);
    }
    return 0;
}

//Ex10

int main()
{
    int arr[3][3],i,j;
    printf("Input the element of the Matrix :");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("element [%d] [%d] ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("your Matrix :\n");
    for(i=0;i<3;i++){
        printf("\n")
        for(j=0;j<3;j++)
            printf("%d",arr[i[j]]);
    }

    return 0;
}
//Ex11

#include <stdio.h>

void main()
{
  int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
  
       printf("\n\nAddition of two Matrices :\n");
       printf("------------------------------\n");  
        printf("Input the size of the square matrix (less than 5): ");
       scanf("%d", &n); 
  
       printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }   
  
       printf("Input elements in the second matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&brr1[i][j]);
            }
        }    
   printf("\nThe First matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
           printf("%d\t",arr1[i][j]);
    }
  
  printf("\nThe Second matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
      printf("%d\t",brr1[i][j]);
    } 
   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            crr1[i][j]=arr1[i][j]+brr1[i][j];
   printf("\nThe Addition of two matrix is : \n");
   for(i=0;i<n;i++){
       printf("\n");
       for(j=0;j<n;j++)
            printf("%d\t",crr1[i][j]);
   }
   printf("\n\n");
}

//Ex12

#include <stdio.h>

void main()
 
   {
     int i,j,arr1[50][50],sum=0,n;
	 
	 printf("Input the size of the square matrix : ");
     scanf("%d", &n); 
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
			   if (i==j) sum= sum+arr1[i][j];
            }
        }  
	 

	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }
 
       printf("Addition of the right Diagonal elements is :%d\n",sum);
    }
//Ex13


void main()
   {
  int arr1[10][10],i,j,n;
  float determinant=0;


     printf("Input the size of the square matrix : ");
     scanf("%d", &n); 
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }  
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

   printf("\nSetting zero in lower triangular matrix\n");
   for(i=0;i<n;i++){
      printf("\n");
      for(j=0;j<n;j++)
           if(i<=j)
             printf("% 4d",arr1[i][j]);
           else
             printf("% 4d",0);
  }
       printf("\n\n");
}

//Ex14


void main()
{
   int arr1[50][50], brr1[50][50];
   int i, j, r1, c1, r2, c2, flag =1;
   
   printf("Input Rows and Columns of the 1st matrix :");
   scanf("%d %d", &r1, &c1);

   printf("Input Rows and Columns of the 2nd matrix :");
   scanf("%d %d", &r2,&c2);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        } 
       printf("Input elements in the second matrix :\n");
       for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&brr1[i][j]);
            }
        }   
 	 printf("The first matrix is :\n");
	 for(i=0;i<r1;i++)
	 {
	   for(j=0;j<c1 ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }
	 printf("The second matrix is :\n");
	 for(i=0;i<r2;i++)
	 {
	   for(j=0;j<c2 ;j++)
	     printf("% 4d",brr1[i][j]);
	    printf("\n");
	 }

   if(r1 == r2 && c1 == c2)
   {
    	printf("The Matrices can be compared : \n");
    	for(i=0; i<r1; i++)
    	{
     		for(j=0; j<c2; j++)
     		{
			if(arr1[i][j] != brr1[i][j])
			{
	   			flag = 0;
	   			break;
			}
     		}
   	   }
    }
    else
    {  printf("The Matrices Cannot be compared :\n");
       exit(1);
    }
    if(flag == 1 )
	printf("Two matrices are equal.\n\n");
    else
	printf("But,two matrices are not equal\n\n");
}

//Ex15

void main()
{
   int arr1[10][10];
   int r1,c1;
   int i, j, yn =1;
  
   printf("Input number of Rows for the matrix :");
   scanf("%d", &r1);
   printf("Input number of Columns for the matrix :");
   scanf("%d",&c1);   
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }    
 	 printf("The matrix is :\n");
	 for(i=0;i<r1;i++)
	 {
	   for(j=0;j<c1 ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

    for(i=0; i<r1; i++)
    {
     for(j=0; j<c1; j++)
     {
	 if(arr1[i][j] != 1 && arr1[j][i] !=0)
	 {
	   yn = 0;
	   break;
	 }
	}
   }

   if(yn == 1 )
	printf(" The matrix is an identity matrix.\n\n");
   else
	printf(" The matrix is not an identity matrix.\n\n");
}
