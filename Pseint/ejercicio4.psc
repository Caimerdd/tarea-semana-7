Proceso ejercicio4
		definir i como entero;
		definir promedio, nota, suma como real;
		dimensionar nota[10];
		suma <- 0;
		
		para i<-0 hasta 9 con paso +1 Hacer
			escribir "ingresar nota:";
			leer nota[i];
		FinPara
		
		para i<-0 hasta 9 con paso +1 Hacer
			suma <- suma + nota[i];
		FinPara
		
		promedio <- suma/10;
		escribir "el promedio de la clase es: ", promedio;
FinProceso
