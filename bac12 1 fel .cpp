#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i,j,n,v[200];
    bool paritar= true;
    ifstream in("bac.txt");
    in >>n;
    for(i=0;i<2*n;i++)
    {
        in >> v[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=n;j< 2*n;j++)
        {
            if(((v[i]%2 != v[j] % 2) && (v[i]>v[j]))){
                paritar = false;
            }
        }
    }
    if(paritar){cout<<"DA";}
    else{cout<<"NU";}

    return 0;
}
