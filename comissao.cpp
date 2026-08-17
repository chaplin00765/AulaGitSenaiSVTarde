#include <iostream>
using namespace std;

double calculaComissao(double vlVenda, double txComissao)
{
	return vlVenda * txComissao;
}
void mostraResultado(string nome, double comissao){

	cout << "vendedor: " << nome << endl;
	cout << "comissao: R$ " << comissao << endl;
	
}
int main() {
	
	string nome;
	double valorVenda;
	double TaxaComissao = 0.05;
	double comissao;
	
	cout << "\ndigite o seu nome: ";
	cin >> nome;
	
	cout << "\ndigite o valor de venda: ";
	cin >> valorVenda;
	
	comissao = calculaComissao(valorVenda, TaxaComissao);
	
	mostraResultado(nome, comissao);
	
	cout << "\nvendedor: " << nome;
	cout << "\ncomisso: R$ " << comissao;
	
	
	return 0;
}
