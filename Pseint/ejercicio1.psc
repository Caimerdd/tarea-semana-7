Proceso ejercicio1
	definir num, suma, i Como Entero;
	Escribir  "Hasta que numero desea sumar?";
	leer num;
	suma <- 0;
	
	si (num < 1) Entonces
		Escribir  "respuesta invalida";
	SiNo
		para i <- 1 hasta num con paso 1 hacer 
			suma <- suma + 1;
		FinPara
	FinSi
	Escribir  "La suma de los numeros naturales desde 2 hasta ", num, " es: ", suma;
	
FinProceso
