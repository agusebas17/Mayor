/*
 * higher.cpp
 *
 *
 *  Created on: Mar 31, 2017
 *      Author: Agustin Sebastian
 */

#include <iostream>

int main (){

	int na,nb;			/* Declaracion de variables enteras */
	std::cout << "Ingrese primer numero \n";
			std::cin >> na;
	std::cout << "Ingrese segundo numero \n";
	std::cin >> nb;		/* Ingreso de variables */

	 while (na != nb){
		if (na>nb) {
		std::cout <<"El número " << na << " es mayor a " << nb << ". \n" ;
		}
		else {
		std::cout <<"El número " << nb << " es mayor a " << na << ". \n" ;
				}
	break;

	}

	 if (na == nb) {

	std::cout << "Los numeros ingresados son iguales";

	 }
	return 0 ;
}
