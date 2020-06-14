#include<bits/stdc++.h>
using namespace std;

vector<string> pal;

int main() {
	
	int n = 0, q = 0;
	
	cin >> n >> q;
	
	while(n--){
		
		string entrada;
		cin >> entrada;
		
		pal.push_back(entrada);
	}
	
	int largo = pal.size();
	
	while(q--){
		
		string entrada;
		cin >> entrada;
		
		int largoQ = entrada.size();
		
		
		for(int i = 0; i < largo; i++){
			
			int largoP = pal[i].size();
			
			for(int j = 0; j < largoQ && j < largoP; j++){
				
				if(entrada[j] != pal[i][j]){
					
					pal.erase(pal.begin()+i);
					largo--;
				}
				
			}
		}
		
	}
	
	for(int i = 0; i < largo; i++)
		cout << pal[i] << "\n"; 
	
	return 0;
}