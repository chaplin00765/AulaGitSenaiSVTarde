#include <iostream>
using namespace std;

int main() {
	
	string nome;
	double valorVenda;
	double TaxaComissao = 0.05;
	double comissao;
	
	cout << "\ndigite o seu nome: ";
	cin >> nome;
	
	cout << "\ndigite o valor de venda: ";
	cin >> valorVenda;
	
	comissao = valorVenda * TaxaComissao;
	
	cout << "\nvendedor: " << nome;
	cout << "\ncomisso: R$ " << comissao;
	
	
	return 0;
}
