#include <iostream>

using namespace std;

void lancamentoDado(int n){

    int dado[6]={0}, facedado, i;

    srand(time(0));

    for(i = 0; i < n; i++){

        facedado = rand()%6;

        cout << "Face " << facedado + 1 << endl;
        dado[facedado]++;

   }
   for(i = 0; i < 6; i++){
        if(dado[i]>0){
            cout << "Face " <<i + 1 <<" apareceu " << ((dado[i]*100)/(float)n) << "% das vezes\n";
        }
    }
}

int main(void){
    int n;

    cout << "Informe quantas vezes você deseja lançar o dado: ";
    cin >> n;

    if(n == 0){
        return -1;
    }

   lancamentoDado(n);

    return 0;
}
