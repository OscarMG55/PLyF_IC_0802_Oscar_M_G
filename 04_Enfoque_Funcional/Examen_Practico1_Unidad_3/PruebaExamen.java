public interface PruebaExamen{
	
	default public void mensajeHola(){

	System.out.println("Hola mi nombre es Oscar Matinez Gonzalez");

	}

	default public String mensajeHola(String contenido){

	contenido.mensajeHola();

	System.out.println("La cadena es:"+contenido);
	}

	public static int operacionPrueba(int x,int y){

		return x+y;
	}

	public abstract void operacionPrueba(int p1, int p2, int p3);
}