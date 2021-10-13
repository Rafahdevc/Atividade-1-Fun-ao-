#include<iostream>

int funcao1 (int numero){
	if(numero > 0){
		
		std::cout << numero;
		
		return 1;
	}
	return 0;
}
	
int main(){
	int numero;
	std::cin >> numero;
	if(funcao1(numero)){
		std::cout << "\nPositivo";
	}else {
		std::cout << "\nNegativo";
	}
	return 0;	
	
}	
	
