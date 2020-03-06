#include<bits/stdc++.h>
using namespace std;

int main(){

	string a, b;
	
	while(cin >> a >> b){
	
		int i = 0,  j = 0;
		int largoa = a.length();
		int largob = b.length();
		
		while(j < largob){
			
			if(a[i] == b[j]){
			
				i++;
				j++;

			}
			else{

				j++;
			}
		}

		if(i == largoa){

			cout << "Yes\n";
		}
		else{

			cout << "No\n";
		}
		
		//cout.flush();
	}

	return 0;
}
