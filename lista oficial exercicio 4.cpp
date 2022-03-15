//Considere que para um automóvel que realizou determinado percurso, se tenha: marca,
//quilometragem inicial, quilometragem final e litros consumidos. Faça um algoritmo que
//mostre um relatório contendo, além destes dados, qual o consumo do automóvel em
//Km/litros.
#include <iostream>
using namespace std;

main(){
	string marca;
	float km_inicial, km_final, l_consumidos, km_porL;
	
	cout << "Vamos rodar: \n informe a marca do veiculo: ";
	cin >> marca;
	cout << "Informe a KM inicial: ";
	cin >> km_inicial;
	cout << "Informe a KM final: ";
	cin >> km_final;
	cout << "Informe quantos litros consumidos: ";
	cin >> l_consumidos;
	
	km_porL = (km_final - km_inicial) / l_consumidos;
	cout <<"\n Relatorio do veiculo: \n Marca: " << marca << "\n Km inicial: " << km_inicial << "\n Km final: " << km_final << "\n Litros consumidos: " << l_consumidos << "\n Consumo KM/Litros: " << km_porL;
	
	
}
