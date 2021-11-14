#include <stdio.h>
#include <stdlib.h>



//Ex 1
/*
    int main()
{
    printf("Name : Ahmed Tounsi\n");
    printf("DOB: July 14, 1995\n");
    printf("Mobile : 21 21 21 21\n");

    return 0;
}
*/


//Ex2

/*
    int main()
{
    int nb1;
    int nb2;

    printf("Enter first number\n");
    scanf("%d", &nb1);
    printf("Enter second number\n");
    scanf("%d", &nb2);
    printf("Sum equal to %d", nb1+nb2);

    return 0;
}
*/

//Ex3
/*
int main()

{
    double nb1;
    double nb2;
    char op;

    printf("Enter a number:");
    scanf("%lf", &nb1);
    printf("Enter operator:");
    scanf("%c", &op);
    printf("Enter second number:");
    scanf("%lf", &nb2);
/*
    if(op=='+'){
        printf("%.2f",nb1+nb2);
    }else if(op=='-'){
        printf("%.2f",nb1-nb2);
    }else if(op=='*'){
        printf("%.2f",nb1*nb2);
    }else if(op=='/'){
        printf("%.2f",nb1/nb2);
    } else {
        printf("Invalid operator !");
    }*/

    /*switch(op){
    case'+':
        printf("%.2f", nb1+nb2);
        break;
    case'-':
        printf("%.2f", nb1-nb2);
        break;
    case'*':
        printf("%.2f", nb1*nb2);
        break;
    case'/':
        printf("%.2f", nb1/nb2);
        break;
    }
    return 0;}*/


//EX 4
/*
int main()
{
    float c, m, k;

    // c = centimeter
    // m = meter
    // k = kilometer

    printf("Enter the length in centimeter::\n");
    scanf("%f", &c);


  /*  m = (float)(c / 100);
    k = (float)(c / 100000);

    // Output
    printf("\nLength in Meter      = %.2f meter \n", m);
    printf("Length in Kilometer  = %.2f kilometer\n", k);

    return 0;
    }/*

//EX5
/*
int main()
{
    float base, height, area;

    printf("Enter base of the triangle: ");
    scanf("%f", &base);
    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("Area of the triangle = %.2f sq. units", area);

    return 0;
}*/

//EX6

/*

int width;
int height;

int area;
int perimeter;

int main() {
	height = 7;
	width = 5;

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);

	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

return(0);
}*/

//EX7

/*
int main() {
   int radius;
   float area, perimeter;
   radius = 6;

   perimeter = 2*3.14*radius;
   printf("Perimeter of the Circle = %f inches\n", perimeter);

	area = 3.14*radius*radius;
	printf("Area of the Circle = %f square inches\n", area);

return(0);
}
*/

//EX8

/*
int main()
   {
	int x, y, sum;
    printf("\nInput the first integer: ");
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
    sum = x + y;
    printf("\nSum of the above two integers = %d\n", sum);
    return 0;
}
*/

//EX9

/*
// same as 8 we replace '+' with '*'
 */

//EX10

/*
int main()
   {
	double wi1, ci1, wi2, ci2, result;
    printf("Weight - Item1: ");
	scanf("%lf", &wi1);
	printf("No. of item1: ");
	scanf("%lf", &ci1);
	printf("Weight - Item2: ");
	scanf("%lf", &wi2);
	printf("No. of item2: ");
	scanf("%lf", &ci2);
	result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);
	printf("Average Value = %f\n", result);
	return 0;
}
 */

//EX11

/*
int main() {
	char id[10];
	int hour;
	double value, salary;
	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s", &id);
	printf("\nInput the working hrs: ");
	scanf("%d", &hour);
	printf("\nSalary amount/hr: ");
	scanf("%lf", &value);
	salary = value * hour;
	printf("\nEmployees ID = %s\nSalary = U$ %.2lf\n", id,salary);
	return 0;
}
*/

//EX12
/*
int main()
{
	int x;
	float y;
	printf("Input total distance in km: ");
	scanf("%d",&x);
	printf("Input total fuel spent in liters: ");
	scanf("%f", &y);
	printf("Average consumption (km/lt) %.3f ",x/y);
	printf("\n");
	return 0;
}
*/

//EX13
/*
int main() {
	float x1, y1, x2, y2, gdistance;
	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
    printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the said points: %.4f", sqrt(gdistance));
	printf("\n");
	return 0;
}
*/

//EX14
/*
int main() {
	int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);

	h = (sec/3600);

	m = (sec -(3600*h))/60;

	s = (sec -(3600*h)-(m*60));

	printf("H:M:S - %d:%d:%d\n",h,m,s);

	return 0;
}*/


//EX15
//1.
/*
int main(){

printf("* * * * *\n");
printf(" * * * * * \n");
printf("* * * * * \n");
printf(" * * * * * \n");
printf("* * * * * \n");


printf("********\n");
printf("*      *\n");
printf("*      *\n");
printf("*      *\n");
printf("********\n");

printf(" *****\n");
printf("  * *\n");
printf("   **\n");
printf("    *\n");
}*/

//2.

//pattern b
/*
int main()
{
    int rows,columns,i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&columns);
    for (i=1; i<=rows; i++){
    for (j=1; j<=columns; j++){
    if(i==1||i==rows||j==1||j==columns){
        printf("*");
    }else{
        printf(" ");
    }
}
    printf("\n");
}
getch();
    return 0;
}*/

    //pattrern c

int main()
{
int n, i, j, k;
printf("Enter number of rows to show the star pattern: ");
scanf("%d",&n);
for(i = n; i >= 1; i--)
{

for (j = i; j > n; j--)
printf(" ");
for(k = 1; k <= (2 * n - 1); k++)
{
if(i == n || k == 1 || k == 2 * i - 1)
printf("*");
else
printf(" ");
}

printf("\n");
}
return 0;
}


//3.
/*
int main()
{
int sum=0,i,a;
printf("enter five number:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a);
sum=sum+a;
}
printf("\nThe sum is %d",sum);
return 0;
}
*/

//4.
/*
int main()
{
    int prod=1,i,a;
    printf("enter five number:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        prod*=a;
    }
    printf("their product equal to %d",prod);
    return 0;
}*/
