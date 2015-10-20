/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main (void)
{
    double a, r;
    cin >> r;
    a=PI*(r*r);
    cout<<setprecision(4)<<"A="<<fixed<<a<<endl;
    return 0; //çuçeço
}
