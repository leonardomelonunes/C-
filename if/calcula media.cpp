//Calculadora de Media
#include <iostream>
using namespace std;

main(){
	int nota1, nota2, nota3, media;
	
	cout << "Digite a primeira Nota: ";
	cin >> nota1;
	cout << "Digite a segunda Nota: ";
	cin >> nota2;
	cout << "Digite a terceira Nota: ";
	cin >> nota3;	
	
	media = (nota1 + nota2 + nota3) /3;
	
	if(media >= 7 )
		cout << "A media foi: " << media << "\n APROVADO";
	
	else
	
		if(media >=5 )
		cout << "A media foi: " << media << "\n RECUPERACAO";
	
	else
		cout << "A media foi: " << media << "\n Reprovado";
}
