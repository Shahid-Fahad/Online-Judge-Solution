#include<stdio.h>
int main()
{
    long long int ha,oa;
    while(scanf("%lld%lld",&ha,&oa)!=EOF)
    {

        if(ha>oa)
            printf("%lld\n",ha-oa);
        else
            printf("%lld\n",oa-ha);

    }
    return 0;
}
