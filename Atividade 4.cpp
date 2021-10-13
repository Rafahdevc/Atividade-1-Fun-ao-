#include<iostream>

funcao(int n1,int n2,int n3){
	
	if (n1<n2 && n1<n3){
		std::cout << "Este e o numero menor: " << n1;
    }else{
    	if (n2<n1 && n2<n3){
		std::cout << "Este e o numero menor: " << n1;
	}else{
		std::cout << "Este e o numero menor: "<< n3;
	}	
	
	return 0;
}
}

int main () {
	int n1, n2, n3;
	
	std::cout << "Digite o primeiro numero: ";
	std::cin >> n1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> n2;
	std::cout << "Digite o terceiro numero: ";
	std::cin >> n3;
	
	funcao(n1, n2, n3);
	
	return 0;
}


