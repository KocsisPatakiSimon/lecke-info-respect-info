#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo;
    cin>>szo;
    for(char c: szo){
        if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ){
        size_t found = szo.find(c);
        while(found != string::npos){
            szo.replace(found,1,"X");
            found = szo.find(c, found+1);
        }
    }
    }
    cout<<szo;
    return 0;
}
