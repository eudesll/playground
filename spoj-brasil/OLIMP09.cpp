/* 
   SPOJ Brasil Problem Set (obi)
   11646. Olimpíadas
   Problem Name: OLIMP09
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
typedef struct{
    int id;
        int ouro, prata, bronze;
} medalha;
 
int main(void){
 
        medalha medalhas[110];
        int n, m;
        int o, p, b;
        
        cin >> n >> m;
        
        for(int i = 0; i < n; i++){
                
                medalhas[i].id = 0;
                medalhas[i].ouro = 0;
                medalhas[i].prata = 0;
                medalhas[i].bronze = 0;
                
        }
        
        for(int i = 0; i < m; i++){
                cin >> o >> p >> b;
                
                medalhas[o - 1].ouro++;
                medalhas[p - 1].prata++;
                medalhas[b - 1].bronze++;
        }
        
        for(int i = 0; i < n; i++){
                
                for(int j = i + 1; j < n; j++){
                
                        if(medalhas[j - 1].id == 0){
                                medalhas[j - 1].id = j;
                        }
                        if(medalhas[j].id == 0){
                                medalhas[j].id = j + 1;
                        }
                
                        medalha temp;
                        if(medalhas[i].ouro < medalhas[j].ouro){
                                temp = medalhas[i];
                                medalhas[i] = medalhas[j];
                                medalhas[j] = temp;
                        } else if(medalhas[i].ouro == medalhas[j].ouro){
                        
                                if(medalhas[i].prata < medalhas[j].prata){
                                        temp = medalhas[i];
                                        medalhas[i] = medalhas[j];
                                        medalhas[j] = temp;
                                } else if (medalhas[i].prata == medalhas[j].prata){
                                        
                                        if(medalhas[i].bronze < medalhas[j].bronze){
                                                temp = medalhas[i];
                                                medalhas[i] = medalhas[j];
                                                medalhas[j] = temp;
                                        } else if(medalhas[i].bronze == medalhas[j].bronze){
                        
                                                if(medalhas[i].id > medalhas[j].id){
                                                temp = medalhas[i];
                                                medalhas[i] = medalhas[j];
                                                medalhas[j] = temp;
                                            }
                                        }
                                        
                                }
                                
                        }
                
                }
        }
        
        for(int i = 0; i < n; i++){
                cout << medalhas[i].id << " ";
        }
        
        return 0;
                
}