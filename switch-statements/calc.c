#include<stdio.h>
int main() {
int e;
    float a,b,c;
  char d ;

    //  printf("Enter your first number : ");
    // scanf("%f",&a);
    //  printf("Name the operation :");
    // scanf("%s",&d);

    // printf("Enter your second  number : ");
    // scanf("%f",&b);

  printf("calculate : ");
 scanf("%f %s %f",&a,&d,&b);
  


switch(d)
{
    case '+': printf("%f + %f = %f  ", a,b,  a+b);
     c=a+b;
    break;

      case '-': printf("%f - %f = %f  ", a,b, a-b);
    break;
    

      case'*': printf("%f * %f =  %f ", a,b, a*b);
    break;
    

      case'/': printf("%f / %f = %f  ", a,b, a/b);
    break;


   
    
default :{ printf("invaild statement");
}
}

    return 0 ;

}
