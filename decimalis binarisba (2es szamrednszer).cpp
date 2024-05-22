#include <iostream>

using namespace std;

int main()
{
    int szam ,szj,szamrendszer,hatvany=1,ujszam=0;
    cin>>szam;
    cin>>szamrendszer;
    while(szam>0){
        szj=szam %szamrendszer;
        szam=szam/szamrendszer;
        ujszam=ujszam+szj*hatvany;
        hatvany=hatvany*10;
    }
    cout<<ujszam;
    return 0;
}
