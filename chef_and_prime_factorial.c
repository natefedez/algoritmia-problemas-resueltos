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

    NOMBRE: Chef and Prime Factoril
    JUEZ: codechef.com
    ENLACE: https://www.codechef.com/problems/JAN1#
========================================================================*/
#include <stdio.h>
 
int casos;
unsigned long long int num;
unsigned long long int prims [16];
int facts []= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
 
void solve(){
	scanf("%llud",&num);
	int i =0;
	for(;num>=prims[i]&&i<16;i++);
	printf("%d\n", i);	
}
 
int main(void) {
	prims[0]=2;
	for (int i = 1; i<16; i++)
		prims[i]=prims[i-1]*facts[i];
	scanf("%d",&casos);
	while(casos--)
		solve();
	return 0;
}