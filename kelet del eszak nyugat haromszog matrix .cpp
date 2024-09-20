#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int K,E,D,Ny, matrix[100][100],N;
    for(int sor=0; sor<N;sor++)
    {
        for(oszlop=0;sor<N;sor++)
        {
            if(sor<oszlop){
                if(sor+oszlop<N-1)
                {
                    E+= matrix[sor][oszlop];

                }

            if(sor +oszlop > N-1){
                K+= matrix[sor][oszlop];
            }
            }
            if(sor>oszlop){
                if(sor +oszlop < N-1){
                    Ny+=matrix[sor][oszlop];
                }
                if(sor+oszlop >N-1){
                    D+=matrix[sor][oszlop];
                }
            }
        }

    }
    cout<<"E= "<<E;
    cout<<"K= "<<K;
    cout<<"Ny= "<<Ny;
    cout<<"D= "<<D;
    return 0;
}
