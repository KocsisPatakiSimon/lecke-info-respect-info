#include <iostream>

using namespace std;

int main()
{
    int matrix[100][100], n ,m;
    cout<<"sorok szama= ";cin>>n;
    cout<<"oszlopok szama= "; cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<"matrix["<<i<<"]["<<j<<"]= ";
            cin>>matrix[i][j];
        }
    }
    for(int i=0 ; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
