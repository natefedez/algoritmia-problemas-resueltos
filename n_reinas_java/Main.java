import java.util.Scanner;
import java.util.Stack;

public class Main {

	public static void main(String[] args) {
		
		System.out.print(" ");	
		Scanner input = new Scanner(System.in);
		
		int casos = input.nextInt();
		int soluciones = 0;
		
		
		while(casos > 0) {
			
			int n = input.nextInt();
			long startTime = System.currentTimeMillis();
		
			Stack<Tablero> pila = new Stack();
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
			if(n==0)
				soluciones = 0;
			
			System.out.println(soluciones);	
			
			long stopTime = System.currentTimeMillis();
			
		    long elapsedTime = stopTime - startTime;
		    
		    System.out.println("Tiempo transcurrido de ejecución: " + elapsedTime + " milisegundos");
		    
			soluciones = 0;
			casos--;
		}
		
		

	}

}
q