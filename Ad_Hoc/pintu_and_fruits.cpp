/*======================================================================
Copyright (C) 2019 Natán Fernández de Castro

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    NOMBRE: Pintu and Fruits
    JUEZ: codechef.com
    ENLACE: https://www.codechef.com/MARCH20B/problems/CHPINTU
========================================================================*/
#include<bits/stdc++.h>
using namespace std;

int ftype_basket[55], fcost_basket[55];
int cumulative_sum[55];
int cases = 0, types = 0, basket_size = 0, ans = 100000; 

void solve(){
    
    ans = 100000;
	
	scanf("%d %d", &basket_size, &types);

    memset(cumulative_sum, -1, sizeof(cumulative_sum));
    memset(ftype_basket, -1, sizeof(ftype_basket)); 
    memset(fcost_basket, -1, sizeof(fcost_basket)); 

    for(int i = 0; i < basket_size; i++)
    	scanf("%d", &ftype_basket[i]);

    for(int i = 0; i < basket_size; i++)
    	scanf("%d", &fcost_basket[i]);

    for(int i = 0; i <= basket_size; i++){
    
    	if(cumulative_sum[ftype_basket[i]] == -1)
    	    cumulative_sum[ftype_basket[i]] = fcost_basket[i]; 
    	else 
    	    cumulative_sum[ftype_basket[i]] += fcost_basket[i];
    
    }
    for(int i = 0; i <= types; i++)
    	if(cumulative_sum[i] < ans && cumulative_sum[i] != -1)
    		ans = cumulative_sum[i];

    printf("%d\n", ans);	

}

int main(){

	scanf("%d", &cases);

	while(cases--)
		solve();

	return 0;
}