#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n,c;

    srand (time(0));
    c = rand()%100+1;

    while(1){
    cout << "Adivinhe o numero de 1 a 100. " << endl;
    cin  >> n;

    if(n==c){
        break;
    }else if(n>c){
            cout << "Numero muito alto." << endl;
            }else{
            cout << "Numero muito Baixo " << endl;
            }

         }

     cout << "Parabens. voce adivinhou o numero." << endl;

    return 0;
}
