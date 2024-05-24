#include <bits/stdc++.h>
using namespace std;

ifstream cin("progresie3.in");
ofstream cout("progresie3.out");

int f[1001] , a[1001] , p = 1;

int main()
{
    int x;
    while(cin >> x)
        f[x]=1;
    for(int i = 1 ; i <= 1000 ; ++i)
        if(f[i])
            a[p]=i , p++;
    p--;
    bool ok = true;
    int r = a[2]-a[1];
    for(int i = 3 ; i <= p ; ++i)
        if(a[i]-a[i-1] != r)
            ok=false;
    if(ok)
        cout << r;
    else
        cout << "NU";
    return 0;
}