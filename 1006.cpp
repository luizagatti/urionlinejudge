/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
    double a, b, c, media;
    cin >> a;
    cin >> b;
    cin >> c;

    if((a<0||a>10)||(b<0||b>10)||(c<0||c>10))
         {
            return 0;
         }

    else
    {
        media = ((a*2)+(b*3)+(c*5))/10;

        cout << setprecision(1) <<"MEDIA = " << fixed << media << endl;

        return 0; //çuçeço

}
}
