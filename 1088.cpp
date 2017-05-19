
#include <iostream>
#include <vector>

using namespace std;

void jogada(vector<int> &vetor, int N){
    int i, qtdTrocas = 0, v;

    for(i=0; i<N; i++){
        while(vetor[i] != (i+1)){
            v = vetor[i];
            vetor[i] = vetor[v-1];
            vetor[v-1] = v;
            qtdTrocas++;
        }
    }
    if((qtdTrocas % 2)==1) 
		cout << "Marcelo\n";
    else 
		cout << "Carlos\n";
}

int main(){
    for(;;){
        int N, X, i;
        cin >> N;

        if (N == 0) 
			break;
        else{
            vector<int> vetor;

            for(i=0; i<N; i++){
                cin >> X;
                vetor.push_back(X);
            }
            jogada(vetor, N);
        }
    }
}

