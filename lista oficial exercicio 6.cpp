//Faça um algoritmo para calcular o volume de uma esfera de raio r. Fórmula:
//V = 4pr3 / 3

#include <iostream>
#include <math.h>
using namespace std;

main(){
	float pi = 3.1415;
	float r, v_real, v_gatino, cal;
    
    
	cout << "Vamos calcular o volume de uma esfera \nInforme o Raio: ";
	cin >> r;
	// Formula Real 
	v_real = (4 * pi * (pow(r,3))) /3;
	// Formula Gatino Degas
	v_gatino = (4 * pi * r * 3) / 3;
	
	cout << "O volume da esfera real eh: " << v_real << "\nE o valor com a formula do Gatino eh: " << v_gatino;
}
	
