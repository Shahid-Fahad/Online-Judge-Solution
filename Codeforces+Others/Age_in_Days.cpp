#include<stdio.h>
#include<math.h>
int main()
{
    int a,ay,am;
    scanf("%d",&a);
    ay=a/365;
    a=a%365;
    am=a/30;
    a=a%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ay,am,a);
    return 0;
}