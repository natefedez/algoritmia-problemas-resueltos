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

    NOMBRE: Digital Clock
    JUEZ: codechef.com
    ENLACE: https://www.codechef.com/problems/ONOZ
========================================================================*/
#include <stdio.h>
#include <math.h>

#define MIN(a,b) ((a+b-abs(a-b))/2)

int cases, H, M;

int solve()
{
	scanf("%d %d", &H, &M);
	return MIN(10, MIN(H,M))+
		   MIN((H-1)/11, ((MIN(M,10))-1))+
		   MIN(((MIN(H,10))-1), (M-1)/11)+
		   MIN((H-1)/11, (M-1)/11);
}

int main(void) {
	scanf("%d", &cases);
	while(cases--)
		printf("%d\n",solve());
	return 0;
}