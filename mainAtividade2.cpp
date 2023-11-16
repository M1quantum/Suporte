#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	string nome;
	float IMC, peso, altura;
	
	


	cout << " Preencha as solicitações abaixo \n";
	
	cout << " Informe o seu nome \n ";
	cin >> nome;
	
	cout << " Informe o peso \n ";
	cin >> peso;
	
	cout << " Informe a altura \n ";
	cin >> altura;
	
	
	
	
	
    IMC = peso/(altura * altura);
	

	cout << "IMC: " << IMC;
	cout << "\nOlá. " << nome << " Você possui um IMC de " << IMC;
	
	if(IMC < 18){
		cout << " Magreza";
	}
	
	if(IMC >= 18 && IMC < 25){
		cout << " Normal";
	}
	if(IMC >= 25 && IMC < 30){
		cout << " Sobrepeso";
	}
	
	if(IMC > 30){
		cout << " Obesidade Grau I";
	}
	
	
	
	
	
	return 0;
	
}
