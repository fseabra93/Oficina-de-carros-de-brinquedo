#include <iostream>
using namespace std;

void calcula_carros(int r, int c, int f){
  r = r/4;
  f = f/2;

  if (r < 1 || c < 1 || f < 1){
    cout << "Não é possível construir nenhum carro.\n";
  } else if (r <= c && r <= f){
    cout << "É possível construir "<< r <<" carros.\n";
  } else if (f <= r && f <= c){
    cout << "É possível construir "<< f <<" carros.\n";
  } else {
    cout << "É possível construir "<< c <<" carros.\n";
  }
 
}

int main() {
  int rodas;
  int carrocerias;
  int figuras;

  cin >> rodas >> carrocerias >> figuras;

  calcula_carros(rodas, carrocerias, figuras);
}