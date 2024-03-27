#include <iostream>

using namespace std;

int main()
{
    int szam1, szam2, lkkt;
 cout<< "szam1=";
cin>> szam1;
cout<<"szam2=";
cin>> szam2;
lkkt=szam1*szam2;
while(szam1 != szam2)
    {   if (szam1>szam2)
        szam1=szam1-szam2;
        else
        szam2=szam2-szam1;
    }
lkkt = lkkt/szam1;
cout<< "a legnagyobb kozos oszto "<<szam1<<endl;
cout<< " a legkisebb kozos tobbszoros "<<lkkt;
}
