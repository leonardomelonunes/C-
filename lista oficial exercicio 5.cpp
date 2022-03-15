//Faça um algoritmo que leia o nome e o salário bruto de um funcionário e calcule o salário
//líquido do mesmo. Sobre o seu salário bruto, incide um desconto de 10% para previdência.
//Feito o desconto para a previdência, sobre o restante é feito um desconto de 25% a título
//de imposto de renda. O algoritmo deve mostrar o nome do funcionário, o seu salário bruto,
//o seu salário líquido e os descontos.

#include <iostream>
using namespace std;

main(){
	string nome;
	float salario_bruto, salario_liquido, desc_previdencia, desc_ir;
	
	cout << "Digite o nome do funcionario: ";
	cin >> nome;
	cout << "Digite o salario Bruto do funcionario: ";
	cin >> salario_bruto;
	
	desc_previdencia = 0.10 * salario_bruto;
	salario_liquido = salario_bruto - desc_previdencia;
	desc_ir = 0.25 * salario_liquido;
	salario_liquido = salario_bruto - desc_previdencia - desc_ir;
	
	cout << "\n Relatorio: " << "Nome do Funcionario: " << nome << "\n Salario Bruto: " << salario_bruto << "\n Desconto Previdencia: " << desc_previdencia << "\n Desconto Imposto de Renda:  " << desc_ir << "\n Salario Liquido: " << salario_liquido;
	
	
	
}
