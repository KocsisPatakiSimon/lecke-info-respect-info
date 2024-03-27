#include <iostream>

using namespace std;

int main()
{
    int n,f[100];
    cout<<"tomb hossza= ";
    cin>>n;
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    for(int i=0;i<=n;i++){
        cout<<f[i]<<endl;
    }
    return 0;
}
