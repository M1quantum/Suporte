#include <iostream>
#include <locale>
#include<cstdlib>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

    int x, valor = 1, divisores = 0;

    do{
      cout << " Digite um valor maior que 1: \n";
      cin >> x;
    }while(x < 2);

    while(valor < x){
      if(x % valor == 0){
        cout << valor << "+ ";
        
		divisores += valor;
      }
      valor++;
    }
    cout << " \n\n ";
    
	if(divisores == x){
      cout << x <<  " � um n�mero perfeito. \n ";
    }else if(divisores = x ){
      cout << x << " N�o � um n�mero perfeito. \n ";
    }
    
    return 0;
  }

