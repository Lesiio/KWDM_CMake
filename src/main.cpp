#include<iostream>
#include "trygonometria.h"

int main()
{
	int degree;
		std::cout<<"Podaj liczbe calkowita: ";
		std::cin>>degree;
		getchar();
		
		double a = degreemath::sinus(degree);
		double b = degreemath2::cosinus(degree);
		double c = degreemath3::tangens(degree);
		double d = degreemath4::cotangens(degree);
		std::cout << "sinus" << a << " cosinus " << b << "tangens" << c << "cotangens" << d;

	return 0; 
}