#include <iostream>
using namespace std;

/*int menor (int r, int c, int f){
  if (r <= c && r <= f){
    return r;
  } else if (c <= r && c <= f){
    return c;
  } else {
    return f;
  }
    
}*/

void calcula_carros(int r, int c, int f){
  r = r/4;
  f = f/2;

  //int m = menor(r, c, f);

  if (r < 1 || c < 1 || f < 1){
    cout << "Não é possível construir nenhum carro.\n";
  }

  

  
  
}

int main() {
  int rodas;
  int carrocerias;
  int figuras;

  cin >> rodas >> carrocerias >> figuras;

  calcula_carros(rodas, carrocerias, figuras);
}