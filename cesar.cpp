#include <iostream>
using namespace std;


int main()
{
  // Declarado de variables
  int cifrado, i;
  string cifrar, final, result; 
  //char result;

  // Asignacion de variables
  cout << "Ingrese texto a cifrar: ";
  getline(cin, cifrar);
  

  cout << "Clase de cifrado: ";
  cin >> cifrado;
  
  if(cifrado >= 9) {
    cout << "Ingresa un numero menor a 9";
    return 0;
  }

  // Cifrado
  for(i = 0; i < cifrar.length(); i++) {
    
    if(isspace((char)cifrar.at(i))){
      result = " ";
      cout << (char)cifrar.at(i) << " => " << result << endl;
    } else {
      result = (char)cifrar.at(i)+(char)cifrado;
      cout << (char)cifrar.at(i) << " => " << result << endl;
    }
    
    final += (string)result;

  }
  
  cout << final;

  return 0;
}