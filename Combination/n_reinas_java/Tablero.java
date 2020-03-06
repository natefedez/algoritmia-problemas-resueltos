import java.util.ArrayList;
import java.util.List;

public class Tablero {
	
	int[] ar;
	int tam;

	public Tablero(int n){ // Constructor 

		ar = new int[n];
		tam = n;

	}

	public Tablero(int[] nvo){ //constructor de copia

		tam = nvo.length;
		ar = new int[tam];
		for(int i=0 ; i<tam ; i++)
			ar[i] = nvo[i];
	}

	public List<Tablero> getHijos(){

		int i = 0;
		List<Tablero> hijos = new ArrayList<Tablero>();

		while(i < tam){ // Encuentra posici�n del primer cero
			if(ar[i] == 0) {
				break;
			}
			i++;
		}

		//Caso 1 si el cero est� en posici�n cero
		if(i == 0){

			for(int p = 1; p < tam+1; p++){

				Tablero hijo = new Tablero(ar);

				hijo.setElemento(i, p);
				hijos.add(hijo);

			}
		}

		else if(i < tam){

			int x = 1;

			while(x < tam+1){

				if(!repetido(x) && esValido(x,i)) {
					
					Tablero hijo = new Tablero(ar);

					hijo.setElemento(i, x);
					hijos.add(hijo);

				}

				x++;
			}
		}
		return hijos;
	}

	public boolean esSolucion(){

		for(int i = 0; i < tam; i++){

			if(ar[i] == 0){
				return false;
			}
		}
		//printAr();
		return true;
	}
	
	public void setElemento(int i, int e) {
		ar[i] =  e;
	}
	
	public void printAr() {
		for(int i = 0; i<tam; i++) {
			System.out.print(ar[i]+ ", ");
		}
		System.out.println();
	}
	
	public boolean repetido(int e) {
		for(int i = 0; i < tam; i++) {
			if(ar[i] == e)
				return true;
		}
		return false;
	}
	
	private boolean esValido(int x,int i) {
		for(int j = 0; j < i; j++) {
			
			if(Math.abs(x-ar[j]) == Math.abs(i-j)) {
				return false;
			}
		}
		return true;
	}


}
