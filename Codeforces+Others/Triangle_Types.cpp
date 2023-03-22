#include<stdio.h>
#include<math.h>
int main ()
{
    double A,B,C,D,E,F,temp;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A<B)
    {
        temp=A;
        A=B;
        B=temp;
    }
    if(A<C)
    {
        temp=A;
        A=C;
        C=temp;
    }
    if(B<C)
    {
        temp=B;
        B=C;
        C=temp;
    }
    D=pow(A,2);
    E=pow(B,2);
    F=pow(C,2);
    if(A>=B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(D==E+F)
        {
           printf("TRIANGULO RETANGULO\n");
        }
        if(D>E+F)
        {
            printf(" TRIANGULO OBTUSANGULO\n");
        }
        if(D<E+F)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if((A==B)&&(B==C))
        {
          printf("TRIANGULO EQUILATERO\n");
        }
        if((A==B && A!=C)|| (A==C && A!=B) || (B==C && B!=A))
        {
          printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;

}