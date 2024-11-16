#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo;
    cin>>szo;
    for(char c: szo){
        size_t found = szo.find("a");
        while(found != string::npos){
            szo.replace(found,1,"mpm");
            found = szo.find("a", found+1);
        }
    }
    cout<<szo;
    return 0;
}
