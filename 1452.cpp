#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(){
   int N, M, Pj, contadorConexoes, i, j, k, tamanhoServidores;
   string aplicacao;

   while(cin>>N>>M){
      if (N == 0 && M == 0)
         break;

      map<string, vector<int> > mapServidores;
      vector<vector<bool> > verificaConexao(N, vector<bool>(M, false));
      contadorConexoes = 0;
      
      for(i=0; i<N; i++){
         cin>>Pj;

         for(j=0; j<Pj; j++){
            cin>>aplicacao;
            mapServidores[aplicacao].push_back(i);
         }
      }

      for(i = 0; i<M; i++){
         cin>>Pj;

         for(j=0; j<Pj; j++){
            cin>>aplicacao;

            const vector<int>& servidores = mapServidores[aplicacao];
            tamanhoServidores = servidores.size();
            
            for(k=0; k<tamanhoServidores; k++)//{
               if(!verificaConexao[servidores[k]][i]){
                  verificaConexao[servidores[k]][i] = true;
                  contadorConexoes++;
               }
            //}
         }
      }
      cout<<contadorConexoes<<'\n';
   }
}
