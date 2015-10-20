/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
    double nota1, nota2, media;
    cin >> nota1;
    cin >> nota2;

    if((nota1<0||nota1>10)||(nota2<0||nota2>10))
         {
            return 0;
         }

    else
    {
        media = ((nota1*3.5)+(nota2*7.5))/11;

        cout << setprecision(5) <<"MEDIA = " << fixed << media << endl;

        return 0; //çuçeço

}
}
