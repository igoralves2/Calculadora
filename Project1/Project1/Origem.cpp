#include <iostream>
#include "Calculadora.h"
using namespace std;
int main() {
	Calculadora c = Calculadora();
	float a;
	float b;
	cout << "Insira o valor a: " << endl;
	cin >> a;
	cout << endl;
	cout << "Insira o valor b: " << endl;
	cin >> b;
	cout << endl;
	cout << "Soma: " << c.soma(a, b) << endl;
	return 0;
}