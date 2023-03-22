#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    while (1)
    {
        if (n == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else printf("Senha Invalida\n");
    }
    return 0;
}