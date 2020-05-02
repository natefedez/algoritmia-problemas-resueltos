#include<bits/stdc++.h>
using namespace std;

int c = 0, inf = 0, sup = 0, res = 0;

void solve(){

	scanf("%d %d", &inf, &sup);

	for(int i=sup; i<=inf; i++)
	    if((i%10==2)||(i%10==3)||(i%10==9))
	        res++;
	        
	printf("%d\n", res); 


}

int main(){

	scanf("%d", &c);

	while(c--)
		solve();

	return 0;
}