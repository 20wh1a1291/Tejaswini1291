#include <stdio.h>

int main()
{
    float cm, m, km;

    
    printf("\n enter cm: ");
    scanf("%d", &cm);

    
    meter = cm / 100;
    km    = cm / 100000;

    printf("\cm to m = %d \n cm to km = %d",m,km);

    return 0;
}

18.
#include <stdio.h>
int main() {
	int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf("H:M:S - %d:%d:%d\n",h,m,s);
	
	return 0;
}

19
#include<studio.h>
int main()
{
  int hrs,min,sec;
  printf("input sec:");
  scanf("%d",&num);
  digit = num%10;
  printf("ones place digit = %d",digit);
}

20
#include<stdio.h>
int main()
{
  int num;
  printf("\n enter number:");
  scanf("%d",&num);
  num = num/100;
  printf("\n num = %d",num);
  return 0;
}
21
int main()
{
   int x, y;
   int product = 0;

   printf("Enter two integers:\n");
   scanf("%d%d", &x, &y);

   
   while(y != 0)
   {
      product += x;
      y--;
   }

   printf("\nProuduct = %d\n", product);
   return 0;
}
22
#include<stdio.h>  
 int main()    
{    
int a=1, b=2;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b; 
b=a-b;   
a=a-b;   
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}  
23
#include <stdio.h>

int  main()
{

    int a,cube;
    
    printf("Enter any integer number: ");
    scanf("%d",&a);
    
    cube = (a*a*a);
    printf("CUBE is: %d\n",cube);
    
    return 0;
}
24
#include<stdio.h>

int main()
{
		int feet,inches;
		
		printf("Enter the value of feet: ");
		scanf("%d",&feet);
		
	 
		inches=feet*12;
		
		printf("Total inches will be: %d\n",inches);
		return 0;
}
25
#include <stdio.h>
 
int main(){
    int count=0;
    int num; 
    int arr[100],i=0;
     
    while(num!=-1){
        printf("Enter an integer number (-1 to exit): ");
    count+=scanf("%d",&num);
        arr[i++]=num;
    }
     
    printf("\nTotal Inputs (including 0) are: %d\n",count);
    printf("Entered numbers are:\n");
    for(i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
     
    printf("\n");
    return 0;       
}
26
#include < stdio.h >

int main()
{
    float bs, hra, da, gs;

    printf("Enter basic salary\n");
    scanf("%f", &bs);

    hra = bs * (20/100.00);
    da  = bs * (40/100.00);

    gs  = bs + hra + da;

    printf("Gross Salary = %f\n", gs);

    return 0;
}
28
#include <stdio.h>

int main(void)
{
	
	int a;
	float b;
	char c;

	printf("Address of a: %p\n", &a);
	printf("Address of b: %p\n", &b);
	printf("Address of c: %p\n", &c);

	return 0;
}
29
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter two angles of triangle: ");
    scanf("%d%d", &a, &b);
    c = 180 - (a + b);
    printf("Third angle of the triangle = %d", c);

    return 0;
}
30
#include <stdio.h>
int main()
{
  int a, b, c, d;
  double root1, root2;

  printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
  scanf("%d%d%d", &a, &b, &c);

  d = b*b - 4*a*c;

  if (d < 0) {
    printf("First root = %.2lf + i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    printf("Second root = %.2lf - i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
  }
  else {
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);

    printf("First root = %.2lf\n", root1);
    printf("Second root = %.2lf\n", root2);
  }

  return 0;
}
31
#include <stdio.h>

int main() {
  int c, n;

  printf("random numbers in [1,100]\n");

  
    n = rand() % 100 + 1;
    printf("%d\n", n);
  

  return 0;
}

