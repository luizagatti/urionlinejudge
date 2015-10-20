/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
    int empregado, horas;
    double valor, salario_final;

    cin >> empregado;
    cin >> horas;
    cin >> valor;

    salario_final = horas*valor;

    cout << "NUMBER = " << empregado << endl;
    cout << setprecision(2) << "SALARY = U$ " << fixed << salario_final << endl;
}
