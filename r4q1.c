#include <iostream>

using namespace std;

int main(void){

    int n, maior = 0;

    while(1){
        cout << "Introduza valores: \n";
        cin >> n;

        if(n > maior){
            maior = n;
        }if(n == 0){
            break;
        }
    }

    cout << "O maior valor eh: " << maior << endl;

    return 0;
  }
