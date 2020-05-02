#include <iostream>
using namespace std;

int n = 0;
int pos[10];
string matriz[10][10];

void llenarMatriz(){
	
	for(int i = 0; i < 10; i++)
		for(int j = 0; j < 10; j++)
			matriz[i][j] = ".";
			

}

void solve(){
	
	int libre_j = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 10 ; j+=2){
			if(matriz[j][pos[i]] == "#" || matriz[j][pos[i]+1] == "#" || matriz[j+1][pos[i]] == "#" || matriz[j+1][pos[i]+1] == "#"){
				
				libre_j = j - 2;
				
				break;
			}
			else{ libre_j = j; }
		}
		
		matriz[libre_j][pos[i]] = "#";
		matriz[libre_j][pos[i]+1] = "#";
		matriz[libre_j+1][pos[i]] = "#";
		matriz[libre_j+1][pos[i]+1] = "#";
			
		libre_j = 0;
		
	}
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
				
			cout << matriz[i][j];
		}
			
		printf("\n");
	}
	

}

int main() {
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
		scanf("%d", &pos[i]);
	
		
	llenarMatriz();
	solve();
	
}