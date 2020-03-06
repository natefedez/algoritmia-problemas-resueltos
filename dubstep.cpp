#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    string res = "";
    int largo = 0, i = 0, cont = 0, cont2 = 0;

	cin >> s;

	cout << s << "\n";

	largo = s.length();

	while(i <= (largo - 3)){

		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
		    
		    if(cont == 1){
		     
		        i += 3;
		        res += " ";
		        cont = 0;
		    }
		    
		    else i += 3;
		}

		else{

			res += s[i];
			i++;
			cont = 1;
		}
	}

	cout << res;

	return 0;

}