#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int possibilidades[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
vector<int> visitados;
int matriz[5][5];

int valor(int i, int j){
	return i>=0 && i<5 && j>=0 && j<5;
}

void verifica(int i, int j){
	int k;
	if(matriz[i][j]) 
		return;
	if(!valor(i, j)) 
		return;
	if(visitados[5 * i + j]) 
		return;
		
	visitados[5 * i + j] = 1;
	
	for(k=0; k<4; k++)
		verifica((i + possibilidades[k][0]), (j + possibilidades[k][1]));
}

int main(){
	int T, i, j;
	ios_base :: sync_with_stdio(0); cin.tie(0);
	cin>>T;
	
	while(T--){
		for(i=0 ; i<5; ++i) 
			for(j=0; j<5; ++j) 
				cin>>matriz[i][j];
		
		visitados.assign(26, 0);
		verifica(0,0);
		
		if (visitados[24]) 
			cout<<"COPS\n";
		else 
			cout<<"ROBBERS\n";
	}
}
