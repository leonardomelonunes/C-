//Fa�a um algoritmo que leia o nome e o sal�rio bruto de um funcion�rio e calcule o sal�rio
//l�quido do mesmo. Sobre o seu sal�rio bruto, incide um desconto de 10% para previd�ncia.
//Feito o desconto para a previd�ncia, sobre o restante � feito um desconto de 25% a t�tulo
//de imposto de renda. O algoritmo deve mostrar o nome do funcion�rio, o seu sal�rio bruto,
//o seu sal�rio l�quido e os descontos.

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
