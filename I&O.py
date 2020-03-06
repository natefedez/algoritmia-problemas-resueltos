import sys #Modulo utilizado para la lectura de lineas mediante STDIN

print('Hola, cual es tu nombre?') #Pregunta al usuario el nombre

name = sys.stdin.readline()  #Lee la linea a ingresar por medio de STDIN

print('Hola, ' + name.rstrip())  
