Algoritmo orden_tiempo
	Definir a1,a2,a3 Como Real;
	
	Escribir "Ingrese el tiempo A1";
	Leer a1;
	
	Escribir "Ingrese el tiempo A2";
	Leer a2;
	
	Escribir "Ingrese el tiempo A3";
	Leer a3;
	
	Si a1 > a2 y a1 > a3 Entonces
		Si a2>a3 Entonces
			Escribir a3,a2,a1;
		SiNo
			Escribir a2,a3,a1;
		Fin Si
	SiNo 
		Si a2 > a1 y a2 > a3 Entonces
			Si a1 > a3 Entonces
				Escribir a3,a1,a2;
			SiNo
				Escribir a1,a3,a2;
			Fin Si
		SiNo
			Si a1>a2 Entonces
				Escribir a2,a1,a3;
			SiNo
				Escribir a1,a2,a3;
			Fin Si
		Fin Si
	Fin Si
	
FinAlgoritmo
