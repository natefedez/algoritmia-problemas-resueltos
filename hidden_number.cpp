#include<bits/stdc++.h> 
using namespace std; 

long int n = 0, suma = 0;
long int sec[1000010]; 

int main(){

	scanf("%d", &n);

	sec[n] = {};

	for(int i = 0; i < n; i++) scanf("%d", &sec[i]);

	sort(sec, sec+n);

	for(int i = 0; i < n; i++) printf("%d ", sec[i]);

	if(sec[0] > 1) printf("%d", 1);

	else{

		suma = sec[0] + sec[1];

		for(int i = 2; i < n; i++){

			if(sec[i] > suma){

				break;

			}

			else suma += sec[i];

		}

		printf("%d\n", suma);


	}

	return 0;

}