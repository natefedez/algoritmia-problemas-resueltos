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

    NOMBRE: Uncle Johny
    JUEZ: codechef.com
    ENLACE: https://www.codechef.com/problems/JOHNY
========================================================================*/
#include <stdio.h>
#define MAX 100
 
inline int readInt(){
	int number = 0;
	char c = getchar_unlocked();
	while(c<'0')
		c = getchar_unlocked();
	while(c>='0' && c<='9'){
		number = (number<<3)+(number<<1)+c-'0';
		c = getchar_unlocked();
	}
	return number;
}

int main(){
	int t,n,temp,i,pos,a[MAX];

	t = readInt();

	while(t--){
		n = readInt();
		for(i = 0;i<n;i++)
			a[i] = readInt();

		pos = readInt();

		temp = 0;

		for(i = 0;i<n;i++)
			if(a[i] < a[pos-1])
				temp++;

		printf("%d\n",temp+1);
	}

	return 0;
}