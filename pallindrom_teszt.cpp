#include <iostream>

using namespace std;

int main()
{
    int szam, aux, szamjegy, ujszam;

cout<< "szam=";
cin>> szam;

ujszam=0;
aux=szam;
while (aux>0){
    szamjegy=aux % 10;
    aux=aux / 10;
    ujszam=ujszam*10+szamjegy;
}

if ( szam==ujszam){
    cout<< "A szam pallindrom";}
else{
    cout<< "A szam nem pallindrom";
}

}
