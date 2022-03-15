//Construa um algoritmo que leia a cotação do dólar, leia um valor em dólares, converta esse
//valor para Real e mostre o resultado.

#include <iostream>
using namespace std;

main ()
{
	
	float cotacao_dolar, dolar, real;
	
	cout << "Digite a cotacao do dolar: ";
	cin >> cotacao_dolar; 
	cout << "Digite um valor em dolares: ";
	cin >> dolar;
	real = cotacao_dolar * dolar;
	cout << "A conversao de Dolar para Real eh de: R$" << real;
}
