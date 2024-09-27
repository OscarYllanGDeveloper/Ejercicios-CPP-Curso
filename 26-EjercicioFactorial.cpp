// 9. Escriba un programa que calcule el valor de 1*2*3..*n (factorial)

// Autor: Oscar Yllan Garza Profesor y Estudiante Maestria Ciencias Computacionales
#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;


void factorialF();


int main(){
	
	
	factorialF();
	
	
	return 0;
}

void factorialF(){
	int numF,contadorNum,resultadoF;
	cout<<"Ingresa el número del que quieras saber su factorial: "<<endl;
	cin>>numF;
	
	contadorNum =1;
	resultadoF=1;
	while (contadorNum<=numF){
		resultadoF *= contadorNum;
		contadorNum +=1;
	}
	
	cout<<"El Valor del Factorial es: "<<resultadoF<<endl;
}

