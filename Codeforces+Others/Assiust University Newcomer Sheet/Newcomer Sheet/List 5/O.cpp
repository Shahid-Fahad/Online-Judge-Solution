#include<bits/stdc++.h>
using namespace std;
int Max(int arr[],int n)
{
    int *i;
    i = max_element(arr,arr+n);
    return int(*i);
}
int Min(int arr[],int n)
{
    int *i;
    i = min_element(arr,arr+n);
    return int(*i);
}
int pal(int arr[],int n)
{
    int i,j,c=0,temp;
    for(i=0;i<n;i++)
    {
        int rev=0;
        temp = arr[i];
        while(temp!=0)
        {
            rev = (rev*10) + (temp%10);
            temp = temp/10;
        }
        if(arr[i]==rev)
            c++;

    }
    return c;
}
int Div(int arr[],int n)
{
    int i,j,c=0,d=0,m=0;
    sort(arr,arr+n);
    reverse(arr,arr+n);
    int div[n];
    for(i=0;i<n;i++)
    {
        d=0;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
                d++;
        }
        if(d>m)
        {
            m = d;
            c = arr[i];
        }
    }
    return c;
}
int Prime(int arr[],int n)
{
    int i,j,c=0,p=0,l=0;
    for(i=0;i<n;i++)
    {
        p=0,l=0;
        for(j=2;j<=sqrt(arr[i]);j++)
        {
            l=1;
            if(arr[i]%j==0)
                {
                    p=1;
                    break;
                }
        }
                if(p==0&&l==1)
                    c++;
                    if(arr[i]==2||arr[i]==3)
                        c++;

    }
    return c;
}
int main()
{
    int n,i;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout <<"The maximum number : "<< Max(arr,n) << endl;
    cout <<"The minimum number : "<< Min(arr,n) << endl;
    cout <<"The number of prime numbers : "<< Prime(arr,n) << endl;
    cout <<"The number of palindrome numbers : "<< pal(arr,n) << endl;
    cout <<"The number that has the maximum number of divisors : "<< Div(arr,n) << endl;

}

