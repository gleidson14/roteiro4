#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int n,p,cont,face,f1,f2,f3,f4,f5,f6;

    cout << "Digite quantas vezes deseja rolar o dado." << endl;
    cin >> n;

    while(n>0){
            srand(time(0));
            face = rand()%6+1;
            cont++;

        switch(face){

    case 1:
        f1++;
        p = (f1*100)/cont;
    cout << "Porcentagem: " << p <<endl;
        p = 0;
        break;
    case 2:
        f2++;
        p = (f2*100)/cont;
    cout << "Porcentagem: " << p <<endl;
        p = 0;
        break;
    case 3:
        f3++;
        p = (f3*100)/cont;
    cout << "Porcentagem:  " << p << endl;
        p = 0;
        break;
    case 4:
        f4++;
        p = (f4*100)/cont;
    cout << "Porcentagem:  " << p << endl;
        p = 0;
        break;
    case 5:
        f5++;
        p = (f5*100)/cont;
    cout << "Porcentagem:  " << p << endl;
        p = 0;
        break;
    case 6:
        f6++;
        p = (f6*100)/cont;
    cout << "Porcentagem:  " << p << endl;
        p=0;
        break;
   }
    n = n--;
        }
    cout << "Programa Encerrado" << endl;
    return 0;
}
