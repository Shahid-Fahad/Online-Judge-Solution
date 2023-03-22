#include<bits/stdc++.h>
using namespace std;
int con(int a[], int n) {
    int* flag;
    int all_counted = 0;
    int i, cur, count = 0;
    int cur_flag;

    flag = (int*)malloc(n);
    for (i = 0; i < n; i++) flag[i] = 0;

    while (all_counted == 0) {
        cur_flag = 0;
        for (i = count; i < n; i++) {
            if (cur_flag == 0 && flag[i] == 0) {
                flag[i] = 1;
                cur_flag = 1;
                cur = a[i];
                count++;
            } else if (cur_flag == 1 && cur == a[i]) {
                flag[i] = 1;
            }
        }
        if (cur_flag == 0) all_counted = 1;
    }
    free(flag);
    return count;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    //unsigned b[2000]={0};
    int i;
    for(i=0;i<n;i++)
        cin >> a[i];
   cout << con(a,n) << endl;
}

