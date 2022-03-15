//Escreva um algoritmo que determine o número de dias que uma pessoa já viveu. Para isso o
//usuário deverá informar apenas a sua data de nascimento. Considere que cada mês tenha
//30 dias e o ano tenha 360 dias.
#include <iostream>
using namespace std;

main(){
	int ano_nasc, mes_nasc, dia_nasc;
	int total_dias, calc_ano, calc_mes, calc_dia;
	
	cout << "Digite o ano de seu nascimento: ";
	cin >> ano_nasc;
	cout << "Digite o mes de seu nascimento: ";
	cin >> mes_nasc;
	cout << "Digite o dia de seu nascimento: ";
	cin >> dia_nasc;
	
	int ano_atual = 2022, mes_atual = 3, dia_atual = 9;
	
	calc_ano = ano_atual - 1 - ano_nasc;
	calc_mes = mes_atual - 12 - mes_nasc;
	calc_dia = 30 - dia_nasc;
	
	total_dias = (calc_ano * 360) + (calc_mes * 30) + calc_dia;
	

	cout << "Voce tem: " << total_dias << " Dias de vida!";
	
}
