#include <bits/stdc++.h>
using namespace std;

// Enlace del problema https://www.codechef.com/problems/KOL1505

int c = 0;
char palabra1[100] = "";
char palabra2[100] = "";
string res1;
string res2;

int main() {
  
  cin >> c;
  
  while(c--){
      
      cin >> palabra1;
      cin >> palabra2;
      
      res1 = palabra1[0];
      for(int i = 0; i < strlen(palabra1) - 1; i++)
          if(palabra1[i] != palabra1[i + 1]) 
              res1 += palabra1[i + 1];
              
      res2 = palabra2[0];
      for(int i = 0; i < strlen(palabra2) - 1; i++)
          if(palabra2[i] != palabra2[i + 1]) 
              res2 += palabra2[i + 1];
      
      if(res1 == res2) 
          cout << "Yes" << endl;
      else
          cout << "No" << endl;
      
  }
  
  return 0;
}