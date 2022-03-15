//A revendedora Pica Pau Ltda., paga a seus vendedores, um salário fixo de R$ 350,00, mais
//uma comissão fixa de R$ 50,00 por carro vendido e mais 5% do valor das vendas. Faça um
//algoritmo que leia o nome do vendedor, quantos carros vendeu e o valor total das vendas.
//Ao final, apresente o todos os dados lidos e o salário total do vendedor.
#include <iostream>
using namespace std;

main()
{
	float salario_fixo, comissao, qtd_vendida, total_vendido, salario_final;
	string vendedor;
	
	
	salario_fixo = 350.00;
	comissao = 50.00;
	
	cout << "Nome do vendedor: ";
	cin >> vendedor;
	cout << "Quantos Carros vendeu? ";
	cin >> qtd_vendida;
	cout << "Total das vendas: ";
	cin >> total_vendido;
	
	salario_final = salario_fixo + (qtd_vendida * comissao) + total_vendido * 0.05;
	cout << "\n INFOS: \n Nome do vendedor: " << vendedor << "\n Quantos carros vendeu: " << qtd_vendida << "\n Valor total das vendas: " << total_vendido << "\n Salario Fixo: " << salario_fixo << "\n Valor Total do Salario do: "  << salario_final;
	
}
