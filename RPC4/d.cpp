#include <iostream>
using namespace std;

int main() {
	
	int a = 0, b = 0, ops = 0;
	
	cin >> a >> b;
	
	while (a != b){
		if (a > b && a % 2 == 0)
			a /= 2;
		else
			a++;
		
		ops++;
	}
	
	cout << ops << endl;
	
	return 0;
}