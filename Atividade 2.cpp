#include<iostream>


    
    float funcao(float a,float b,float c){

	b = b * b;
	int ep = -4*a*c;
	return  b - (-ep);
	

}


int main (){
	float a;
	float b;
	float c;
    
	std::cout << "Digite o valor a: ";
	std::cin >> a;
	std::cout << "Digite o valor b: ";
	std::cin >> b;
	std::cout << "Digite o valor c: ";
	std::cin >> c;
	
	funcao(a, b, c);
	
	std::cout << "Valor de delta e: " << funcao(a, b, c);
	
	
	return 0;
}



