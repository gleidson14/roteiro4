#include <iostream>

using namespace std;

int main()
{
    int v,n;
    n=0;

    do{

        cout << "Digite um valor: " << endl;
        cin  >> v;
            if (v > n){
                   n = v;
                      }

    }while(v!=0);

        cout << "o maior valor digitado eh: " << n << endl;

    return 0;
}
