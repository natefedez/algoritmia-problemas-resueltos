import math
import sys
import random
from random import randint

'''
Tarea #7 Análisis de Algoritmos S1
Natán Fernández de Castro - 2017105774
Tecnológico de Costa Rica - Implementación búsqueda de solución de N-Reinas con Algoritmos Genéticos
'''

def funcion_aptitud(poblacion, n, aptitudes, cant_poblacion):
		
		'''
		En la función de aptitud mientras menos sea las colisiones mas apto,
		es decir, a menor puntaje mayor aptitud
		'''
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
		
		#print(aptitudes)

def cruce(poblacion, elite, n, cant_poblacion):
	
	#print("MP: ", poblacion)

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

	#MUTACIÓN (Para ver la mutación descomentar el print de AM y DM y los índices de mutación)

	#print("AM: ", nueva_generacion)

	temp = cant_poblacion * 0.05

	mutaciones = round(temp)

	mutacion = 0

	while(mutacion <= mutaciones):

		rm = randint(0, cant_poblacion-1)

		#print(rm)

		r3 = randint(0, n - 1)

		r4 = randint(0, n  - 1)

		#print(r3, r4)

		nueva_generacion[rm][r4], nueva_generacion[rm][r3] = nueva_generacion[rm][r3], nueva_generacion[rm][r4]

		mutacion += 1

	#print("DM: ", nueva_generacion)

	poblacion = nueva_generacion

	return poblacion


def mostrar_Tablero(arreglo, n, cruces, aptitud, estado):

	tablero = [['■' for x in range(n)] for y in range(n)] 

	print("  [  ", estado, "Cruce #", cruces+1, "]   [  Aptitud:", aptitud, "]")
	
	for t in range(n):
	        
	        tablero[t][arreglo[t]-1] ="♕"
	
	print(" ", arreglo)

	for w in range(n):
	        
	        print("  ", ' '.join((str(x) for x in tablero[w])))


def main():

	n = int(input())
	
	cant_poblacion = n * 4
	
	poblacion = []
	
	aptitudes = []

	for x in range(cant_poblacion):

		poblacion.append([])

		aptitudes.append(0)
		
		for y in range(n):
		        
		        poblacion[x].append(y+1)
		        
		random.shuffle(poblacion[x])

	cruces = 0

	estado = ""

	while(cruces < 400):
		
		funcion_aptitud(poblacion, n, aptitudes, cant_poblacion)

		minpos = aptitudes.index(min(aptitudes))

		#print(minpos+1)

		if(aptitudes[minpos] == 0):

			break

		else:
			
			mostrar_Tablero(poblacion[minpos], n, cruces, aptitudes[minpos], "Élite Actual")
			
			poblacion = cruce(poblacion, poblacion[minpos], n, cant_poblacion)
			
			#print("NP: ", poblacion)

			cruces += 1

	return mostrar_Tablero(poblacion[minpos], n, cruces, aptitudes[minpos], "SOLUCIÓN")

print(main())
