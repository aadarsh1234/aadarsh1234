#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter 1st side");
    scanf("%d",&a);
    printf("enter 2nd side");
    scanf("%d",&b);
    printf("enter 3rd side");
    scanf("%d",&c);
    
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("it is valid triangle ");
    }
     else
     printf("it is not valid triangle ");
    return 0;
}



#include <stdio.h>

int main()
{
    int cp,sp;
    printf("enter the cp");
    scanf("%d",&cp);
    printf("enter the sp");
    scanf("%d",&sp);
    if(sp>cp){
       printf("profit");
    }
   else  if 
    (cp>sp){
        printf("loss");
    }
    else 
    printf ("no loss no profit");
    
    return 0;
}
     


#include <stdio.h>

int main()
{
    int n;
    printf("enter the num");
    scanf("%d",&n);
    if(n<0){
        n=n*(-1);
        printf("the absolute value is %d",n);
    }
    

    return 0;
}


#include <stdio.h>


int main()
{
    int ram;
    int shyam;
    int ajay;
    
    printf("enter age of ram:");
    scanf("%d",&ram);
    printf("enter age of shyam ");
    scanf("%d",&shyam);
    printf("enter age of ajay ");
    scanf("%d",&ajay);
    
    
    if(ram>shyam && ram>ajay)
    {
        printf("youngest age of ram");
    }
    if(shyam>ram && shyam>ajay)
    {
      printf("youngest she of shyam");
    }
    if(ajay>ram && ajay>shyam)
    {
        printf("youngest age of ajay");
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("enter 1st number:");
    scanf("%d",&a);
    printf("enter 2nd number ");
    scanf("%d",&b);
    printf("enter 3rd number ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("a is greatest");
    }
    if(b>a && b>c)
    {
      printf("b is greatest");
    }
    if(c>a && c>b)
    {
       printf("c is greatest ");
}
    return 0;
}



#include <stdio.h>

int main()
{
    int n;
    printf("enter the no");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    {
        printf("it is divisible by 5 or 3" );
    }
    else
    {
        printf("it is not divisib by 5 or 3");
    }
    return 0;



}include <stdio.h>

int main()
{
    int a;
    printf("enter the value");
    scanf("%d",&a);
    if(a%5==0)  
    {
        printf("divided by 5 ");
    }
    if(a%11==0)
         printf(" divided by 11");
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the no");
    scanf("%d",&n);
    if(n>99 && n<1000)
    {
        printf("it is a three digit no" );
    }
    else
    {
        printf("it is not a three no");
    }
    return 0;
}

int main()
{
   int x,y;
   printf("enter the cordinate ");
   scanf("%d%d",&x,&y);
   if(x==0 && y==0)
  {
      printf("the point is origin");
  }
  else if(x==0){
      printf("lies on the y-axis");
      
  }
  else if (y==0){
      printf("lies on the x axis");
  }
  else
  {
      printf("the point is not lies on the x axis and y axis");
  }
  return 0;
}


 #include <stdio.h>

int main()
{
    int marks; 
    printf("enter the student marks");
    scanf("%d",&marks);
    if(marks>=90){
        printf("grade A");
    }
    else if(marks>=80){
        printf("grade B");
    }
    else if(marks>=70){
        printf("grade C");
    }
    else if (marks>=60){
        printf("grade D");
    }
    else{
        printf("fail");
        
    }
    
    

    return 0;
}
