#include<bits/stdc++.h>
using namespace std;

main(){

	char a[30]; 
    char b[30];

    cin >> a >> b;
    
    int largoa = strlen(a);
	int largob = strlen(b);
    int i = 0;
    int j = 0;
	
	while(i < largoa){
		
		while(j < largob){

			if(char[i] == char[j]){

				printf("Coinciden");

			}
			else{

				i++;
				j++;
			}

		}
		
		
	}


    cout << a << " " << b;

	return 0;
}