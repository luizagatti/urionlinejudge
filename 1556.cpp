#include <iostream>
#include <string>
#include <set>
using namespace std;

string entrada;
set<string> aux;
char vetorChar[2000];
int vetorAux[2000];

void funcao(int a, int b){
	int i;
    if(b==entrada.size()){
        if(a!=0)
            aux.insert(string(vetorChar, a));
    } 
	else{
        funcao(a, vetorAux[b]);
        for(i=b; (i<vetorAux[b]); i++){
            vetorChar[a++] = entrada[i];
            funcao(a, vetorAux[b]);
        }
    }
}

int main(){
    while(cin>>entrada){ //while(1) e for(;;) deram Time limit exceeded
        int i, tamanhoEntrada;
        tamanhoEntrada = entrada.size();
        
        for(i=(tamanhoEntrada-1); i>=0; i--){
            vetorAux[i] = tamanhoEntrada;
            if(i>0 && (entrada[i]!=entrada[i-1]))
                tamanhoEntrada = i;
        }
        
        aux.clear();
        funcao(0, 0);
        
        for(set<string>::iterator combinacao=aux.begin(); combinacao!=aux.end(); combinacao++)
            cout<<*combinacao<<endl;
        cout<<endl;
    }
}
