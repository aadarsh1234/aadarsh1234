#include <stdio.h>

int main()
{
    int A,B;
    int add, sub,mul, mod;
    float divi;
    // Input two number
    printf("enter value of A and B:");
    scanf("%d %d",&A,&B);
    
    //perform arithmetic operator 
    add=A+B;
    sub=A-B;
    mul=A*B;
    divi=(float)A/B;
    mod=A%B;
    
  //  Displyay result
  printf("Addition = %d\n",add);
  printf("Subtract = %d\n",sub);
  printf("Multiply = %d\n",mul);
  printf("Divide   = %.2f\n",divi);
  printf("Module   = %d\n",mod);
  
    return 0;
}