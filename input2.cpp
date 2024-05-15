#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, tomb[100], half[100];
    cout<<"hany szamot akarsz ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" elem: ";
        cin>>tomb[i];
        half[i]=tomb[i]/2;
    }
    ofstream myfile("szamok.txt");
    for(int i=1;i<=n;i++)
    {
        myfile<< tomb[i] <<" "<< half[i]<< endl;
    }
    myfile.close();
    return 0;
}
