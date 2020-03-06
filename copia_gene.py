import math
import sys
import random
from random import randint

def funcion_aptitud(poblacion, n, aptitudes, cant_poblacion):
		
		x = 0

		while(x < cant_poblacion):

			aptitud = 0
			i = 0
			j = 0
	
			while(i < n):
		
				j = 0
		
				while(j < n):
			
					deltaf = abs((i+1) - (j+1))
			
					deltac = abs(poblacion[x][i] - poblacion[x][j])
			
					if(i != j and deltaf == deltac):
				
						j+=1
						aptitud += 1
				
					else:
						j+=1
		
				i+=1
	
				#print(aptitud)
				aptitudes[x] = aptitud

			x += 1
		
		print(aptitudes)

def cruce(poblacion, elite, n, cant_poblacion):
	
	print("MP: ", poblacion)

	x = 0

	nueva_generacion = []
	
	nueva_generacion.append(elite)
	
	for x in range(1, cant_poblacion):

		nueva_generacion.append([])

	llenado = 1

	while(llenado < cant_poblacion):
	
		r1 = randint(0, cant_poblacion - 1)

		r2 = randint(0, cant_poblacion - 1)
		
		#print(r1)
		
		hijo = []

		hijo = poblacion[r1][len(poblacion[r1])//2:]
		
		for restante in poblacion[r2]:
		    
		    if restante not in hijo:
			
			    hijo.append(restante)

		#print(hijo)
		
		nueva_generacion[llenado] = list(hijo)
		
		llenado += 1
        
	
	poblacion = nueva_generacion
	
	
	
	return poblacion


def mostrar_Elite(arreglo, n, cruces):

	tablero = [['- ' for x in range(n)] for y in range(n)] 

	print("  [ Elite Actual #", cruces, " ]")
	
	for t in range(n):
	        
	        tablero[t][arreglo[t]-1] ="Q"
	
	print(" ", arreglo)

	for w in range(n):
	        
	        print("  ", ' '.join((str(x) for x in tablero[w])))


def mostrar_Solucion(arreglo, n):

	tablero = [['- ' for x in range(n)] for y in range(n)] 

	print("  [ Solucion ]")
	
	for t in range(n):
	        
	        tablero[t][arreglo[t]-1] = 'Q'
	
	print(" ", arreglo)

	for w in range(n):
	        
	        print("  ", ' '.join((str(x) for x in tablero[w])))

	print("")



def main():

	n = int(input())
	
	cant_poblacion = n * 2
	
	poblacion = []
	
	aptitudes = []

	for x in range(cant_poblacion):

		poblacion.append([])

		aptitudes.append(0)
		
		for y in range(n):
		        
		        poblacion[x].append(y+1)
		        
		random.shuffle(poblacion[x])

	cruces = 0

	while(cruces < 30):
		
		funcion_aptitud(poblacion, n, aptitudes, cant_poblacion)

		minpos = aptitudes.index(min(aptitudes))

		print(minpos+1)

		if(aptitudes[minpos] == 0):

			break

		else:
			
			mostrar_Elite(poblacion[minpos], n, cruces)
			
			poblacion = cruce(poblacion, poblacion[minpos], n, cant_poblacion)
			
			print("NP: ", poblacion)

			cruces += 1

	return mostrar_Solucion(poblacion[minpos], n)

print(main())
