#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparaTamanho(string palavra1, string palavra2){
    return palavra1.size() > palavra2.size();
}

int main(){
	int N, i, qtdPalavras;
	string entrada;
    cin>>N;
    cin.ignore(1);

    for(i=0; i<N; i++){
        string palavra;
        vector<string> vetorPalavras;

        getline(cin, entrada);
        istringstream iss(entrada);

        while(getline(iss, palavra, ' ')) 
            vetorPalavras.push_back(palavra);

        stable_sort(vetorPalavras.begin(), vetorPalavras.end(), comparaTamanho);

		qtdPalavras = vetorPalavras.size();
        for(size_t i=0; i<qtdPalavras; i++){
            if(i!=0)
                cout<<" ";
            cout<<vetorPalavras[i];
        }
        cout<<endl;
    }
}

