import java.util.*;
import java.lang.*;
import java.io.*;

class Tablero(){
	
	int[] ar;
	int tam;

	public Tablero(int n){ // Constructor tablero

		ar = new int[n];
		tam = n;

	}

	public Tablero(int[] nvo){ //constructor de copia tablero

		tam = nvo.length;
		ar = new int[tam];
		for(int i=0 ; i<tam ; i++)
			ar[i] = nvo[i];
	}

	public List<Tablero> getHijos(){

		int i = 0;
		List<Tablero> hijos = new ArrayList<Tablero>();

		while(i < tam){ // Recorrer
			if(ar[i] == 0)
				break;
			i++;
		}

		if(i == 0){

			for(int p = 1; p < tam; p++){

				Tablero hijo = new Tablero(ar);

				hijo[i] = p;

				hijos.add(hijo); 

			}
		}

		else{

			int x = 1;

			while(x <= n){

				if(abs( x - ar[i - 1]) != 1 && x != ar[i - 1]){

					Tablero hijo = new Tablero(ar);

					hijo[i] = x;

					hijos.add(hijo);

				}

				x++;

			}
		}
	}

	public boolean esSolucion(){

		//TODO

		for(int i = 0; i < tam; i++){

			if(ar[i] == 0){

				return False;
			}
		}
		return True;
	}

}	
	
	
public static void main (String[] args) throws java.lang.Exception{

		
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		int soluciones = 0;
		
		Stack<Tablero> pila = newStacks();
		Tablero raiz = new Tablero(n);

		pila.push(raiz);

		while(!pila.isEmpty()){
	
			Tablero tope = pila.pop();
			for(Tablero hijo : tope.getHijos())
				pila.push(hijo);
	
			if(tope.esSolucion())
				soluciones++; 
				//resp.add(tope);
			
			
		}
		
		System.out.println(soluciones);	
		
	}
	
}