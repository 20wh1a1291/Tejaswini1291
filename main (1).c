Pps programs

1.Write a C program to print the following characters in a reverse way.
Eg : 'P', 'P', 'S' printed as 'S' 'P' 'P'

#include <stdio.h> 
 int main() 
 {
    char char1 = 'P';
    char char2 = 'P';
    char char3 = 'S';

	printf("The reverse of %c%c%c is %c%c%c\n",
		char1, char2, char3,
		char3, char2, char1);

	return(0);
}

Output
The reverse of PPS is SPP

2
#include<stdio.h>

 
int main() {
   int length, breadth, area,perimeter;
 
   printf("\nEnter the Length of Rectangle : ");
   scanf("%d", &length);
 
   printf("\nEnter the Breadth of Rectangle : ");
   scanf("%d", &breadth);
 
   area = length * breadth;
   
   perimeter=2*(length+breadth);

   printf("\nArea of Rectangle : %d", area);
   printf("\nPerimeter of Rectangle : %d", perimeter);

 
   return (0);
}

  

3.
#include <stdio.h>
int main()
{ 
  int inttype;
  float floattype;
  double double type;
  char chartype;
  printf("\nsize of int: %d bytes", sizeof(inttype)); 
  printf("\nsize of float: %d bytes",sizeof(floattype));
  printf("\nsize of double : %d bytes",sizeof(doubletype));
  printf("\nsize of char : %d bytes",size of(chartype));
  return 0;

} 


4.

#include<stdio.h>
int main()
{
int p,r,t,int_amt;
printf("Input principle, Rate of interest & time to find simple interest: \n");
scanf("%d%d%d",&p,&r,&t);
int_amt=(p*r*t)/100;
printf("Simple interest = %d",int_amt);
return 0;
}



6.
#include <stdio.h>

int main()
{
    int days, years, weeks;

    /* Input total number of days from user */
    printf("Enter days: ");
    scanf("%d", &days);

    /* Conversion */
    years = (days / 365);   // Ignoring leap year
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    /* Print all resultant values */
    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);

    return 0;
}

7.
#include<stdio.h> 
#include<math.h> 
main() 
{ 
int a,b,c,sum; 
float avg; 
printf("Enter the three integers: "); 
scanf("%d%d%d",&a,&b,&c); 
sum=a+b+c; 
avg=sum/3; 
printf("The required sum and average are %d and %f respectively",sum,avg); 
} 


9.
#include <stdio.h>
int main() 
{
	int emp_id,hrs;
  float tot_salary,amount_per_hr;
	printf("enter employee id:");
	scanf("%d", &emp_id);
	printf("number of working hours: ");
	scanf("%d", &hrs);
	printf("Salary amount per hr: ");
	scanf("%f", &salary_per_hr);
	salary = amount_per_hr * hour;
	printf("\n employee id = %d,\n total salary = %f, emp_id, tot_salary);
	return 0;
}

10.

#include <stdio.h>
int main() 
{
	int x;
	float y;
	printf("Input total distance in km: ");
	scanf("%d",&x);
	printf("Input total fuel spent in liters: ");
	scanf("%f", &y);
	printf("\n averageconsumption=%f", averageconsumption);
	return 0;
}

11.
#include<stdio.h>
#include<math.h>

int main()
{
    float x1, y1, x2, y2, distance;

    printf("Enter point 1 (x1, y1)\n");
    scanf("%f%f", &x1, &y1);

    printf("Enter point 2 (x2, y2)\n");
    scanf("%f%f", &x2, &y2);

    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );

    printf("distance = %f",distance);

    return 0;
}

12.
#include <stdio.h>

int main()
{
    int f,c;

    printf("\n input f : ");
    scanf("%d", &f);
    c = ((f - 32) * 5 / 9);
    printf("f to c = %d",c);

    return 0;
}

13.
#include <stdio.h>
int main() {
	int hrs, min, sec;
	printf("\n input sec : ");
	scanf("%d", &sec);
	
	hrs = (sec/3600); 
	
	min = (sec /60);
	
	printf("\n hrs = %d",hrs);
	printf("\n min = %d",min);
	return 0;
}

14.
#include <stdio.h>
int main() {
	int days, y, m, w;	
	
	printf("\n input number of days: ");
	
	scanf("%d", &days);
	
	y = days/365;
	
	w = days/7;
		
	m = days/30;
	
	
	
	printf(" %d Years \n %d Months \n %d Weeks", y, m, d);
	return 0;
}


16.
#include <stdio.h>
int main() {
	int j, numbers[5],total=0;
	printf("\nInput the first number: "); 
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%d", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%d", &numbers[3]);
    print
