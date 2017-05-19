
#include <iostream>
#include <map>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	int N, contador;
	string nomeArvore, linhaEmBranco;

	cin >> N;
	getline (cin, linhaEmBranco);
	getline (cin, nomeArvore);
	
	while(N--){
		map<string, int> mapaArvores;
		contador = 0;

		while(1){
			getline(cin, nomeArvore);
			if (nomeArvore.size() == 0) 
				break;
			contador++;
			mapaArvores[nomeArvore]++;
		}

		for(map<string, int>::iterator it = mapaArvores.begin(); it != mapaArvores.end(); it++){
			double resultado = (double)it->second/contador;
			resultado*=100;
			cout << fixed << setprecision (4) << it->first << ' ' << resultado << endl;
		}
		if(N) 
			cout << endl;
	}
}
