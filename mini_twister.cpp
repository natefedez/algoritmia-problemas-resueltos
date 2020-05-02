#include<bits/stdc++.h>
using namespace std;

int main(){

	int n = 0;
	int tablero_pasos[105][105];
	
	cin >> n;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &tablero_pasos[i][j]);

    int pasos = n*n, pos_actual_i = 0, pos_actual_j = 0,
    pos_sig_i = 0, pos_sig_j = 0, total_pasos = 0;

    for(int paso = 2; paso <= pasos; paso++){
    	//Busqueda
    	for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(tablero_pasos[i][j] == paso){
					pos_sig_i = i;
					pos_sig_j = j;
				}
			}
		}
		
		total_pasos += abs(pos_actual_i - pos_sig_i) 
					+ abs(pos_actual_j - pos_sig_j);

		pos_actual_i = pos_sig_i;
		pos_actual_j = pos_sig_j;


    }

    cout << total_pasos;



	return 0;
}