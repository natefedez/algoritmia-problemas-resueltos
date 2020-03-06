#include<bits/stdc++.h>
using namespace std;

struct Azulejo{
    
  int precio, altura, Idx;
  
  bool operator < (const Azulejo& t) const { return altura < t.altura; }
  
};

int main() {

  int N;

  while (cin >> N) {
    
    vector < multiset < Azulejo >> v[2];
    
    for (int row = 0; row < 2; row++){
        
      vector <Azulejo> T(N);
      
      for(int i = 0; i < N; i++){
          
          cin >> T[i].precio;
      }
      
      for(int i = 0; i < N; i++){
          
          cin >> T[i].altura;
      }
      for(int i = 0; i < N; i++) T[i].Idx = i+1;
      
      sort(T.begin(), T.end(), [] (const Azulejo& a, const Azulejo& b) -> bool { return a.precio < b.precio; });
      
      for(int i = 0; i < N; i++){
      
        if (i == 0 || T[i-1].precio != T[i].precio) v[row].emplace_back();
        v[row].back().insert(T[i]);
      
          
      }
    }

    vector <int> ret[2];
    
    for (int i0 = 0, i1 = 0; ret[0].size() < N; ){
        
      if (v[0][i0].size() < v[1][i1].size()){
          
        for (auto const& t : v[0][i0]){
            
          auto it = v[1][i1].upper_bound(Azulejo{t.precio, t.altura-1, t.Idx});
          
          if (it == v[1][i1].begin()) goto end;
          
          --it;
          
          ret[0].push_back(t.Idx);
          
          ret[1].push_back(it->Idx);
          
          v[1][i1].erase(it);
        }
        
        i0++;
        
      } 
      
      else{
          
        for (auto const& t : v[1][i1]) {
            
          auto it = v[0][i0].upper_bound(t);
          
          if (it == v[0][i0].end()) goto end;
          
          ret[1].push_back(t.Idx);
          
          ret[0].push_back(it->Idx);
          
          v[0][i0].erase(it);
          
        }
        
        i1++;
        
        if (v[0][i0].size() == 0) i0++;
        
      }
    }

    for (int row = 0; row < 2; row++){
        
      for (int i = 0; i < ret[row].size(); i++){
          
        if (i) cout << ' ';
        
        cout << ret[row][i];
        
      }
      
      cout << endl;
      
    }
    
    continue;
    
end:

    cout << "impossible" << endl;
    
  }
  
}