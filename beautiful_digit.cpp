#include<bits/stdc++.h>
using namespace std;

int desc[100];
int n = 0, d = 0, digs = 0;

void descomponerN(){

	int digs = 1;

	while (n /= 10)
   		digs++;

	printf("%d %d largo n: %d\n", n, d, digs);


}

int main(){

	int casos = 0;

	scanf("%d", &casos);

	while(casos > 0){

		n = 0, d = 0, digs = 0;

		scanf("%d %d", &n, &d);

		descomponerN();

		casos--;
	}

	return 0;
}

