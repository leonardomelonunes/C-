//Uma sorveteria vende 3 tipos de picolés. Sabendo-se que o picolé do tipo 1 é vendido por
//R$ 0,50, o do tipo 2 por R$ 0,60 e o do tipo 3 por R$ 0,75, faça um algoritmo que, para cada
//tipo de picolé, mostre a quantidade vendida e o total arrecadado.
#include <iostream>
using namespace std;

main()
{
	float picole1, picole2, picole3;
	int qtd_1, qtd_2, qtd_3;
	float total_arrecadado;
	
	picole1 = 0.50;
	picole2 = 0.60;
	picole3 = 0.75;
	
	cout << "Bem vindo a sorveteria Zeh das coves: \n";
	cout << "quantos picoles do tipo 1 deseja comprar: ";
	cin >> qtd_1;
	cout << "quantos picoles do tipo 2 deseja comprar: ";
	cin >> qtd_2;
	cout << "quantos picoles do tipo 3 deseja comprar: ";
	cin >> qtd_3;
	total_arrecadado = (picole1 * qtd_1) + (picole2 * qtd_2 )+ (picole3 * qtd_3);
	cout << "Voce Comprou: " << qtd_1 <<" Picoles do tipo 1: " << qtd_2 << " Picoles do tipo 2: " << qtd_3 << " E Picoles do tipo 3! " ;  
	cout << "\nValor arrecadado: R$: " << total_arrecadado; 
	
}
