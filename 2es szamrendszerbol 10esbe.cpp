#include <iostream>

using namespace std;

int main()
{
    int szam ,szj,hatvany=1,ujszam=0;
    cin>>szam;
    cin>>szamrendszer;
    while(szam>0){
        szj=szam %10;
        szam=szam/10;
        ujszam=ujszam+szj*hatvany;
        hatvany=hatvany*2;
    }
    cout<<ujszam;
    return 0;
}
