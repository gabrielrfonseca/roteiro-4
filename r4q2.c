#include <iostream>

using namespace std;

void advNum(void){

  int i, n;

    srand(time(0));
    i = rand() % 100 + 1;

    cout << "Advinhe um numero entre 1 e 100" << endl;

    while(1){

        cout << "Informe um numero: ";
        cin >> n;

        if(n == i){
            cout << "Voce advinhou o numero. Parabens!!" << endl;
            break;
        }
        if(n < i){
            cout << "Tente um numero maior!" << endl;
            continue;
        }else{
            cout << "Tente um numero menor!" << endl;
            continue;
        }
    }
}

int main(void){

  advNum();

    return 0;
}
