#include <iostream>
#include <clocale> // Biblioteca necessária para utilizar a função setlocale, para aceitar acentuações e caracteres especiais
#include <cstdlib> // Biblioteca necessária para utilizar a função rand, onde será gerado o número pseudoaleatório
#include <ctime> // Biblioteca necessária para utilizar a função srand

using namespace std;

int dado(){
	
	// Gera um número aleatório entre 1 e 6 através do rand (pseudoaleatório)
	return(1 + rand () % 6);
	
	}
	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	// Variáveis do tipo inteiro para armazenar quantas vezes cada um dos números do dado foi sorteado, deve-se iniciar os números em 0
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, count;
	
	cout << "---------- Lançamento de um dado cem mil vezes ----------\n";
	
	// Inicializa o valor da "semente" de acordo com o tempo atual cada vez que o programa é executado no rand (pseudoaleatório)
	srand(time(NULL));
	
	// Looping de cem mil iterações
	for(count = 0; count < 100000; count ++){
	
	// Condicional para saber que número foi gerado pela função dado()
	switch(dado()){
	
	case 1:
		n1 ++;
		break;
		
	case 2:
		n2 ++;
		break;
	
	case 3:
		n3 ++;
		break;
	
	case 4:
		n4 ++;
		break;
		
	case 5:
		n5 ++;
		break;
	
	case 6:
		n6 ++;
	
		}
	}
	
	cout << "\nTotal de aparições de cada número e sua respectiva porcentagem:" << endl;
	cout << "\nNúmero 1: " << n1 << " vezes";
	cout << "\nNúmero 2: " << n2 << " vezes"; 
	cout << "\nNúmero 3: " << n3 << " vezes";
	cout << "\nNúmero 4: " << n4 << " vezes"; 
	cout << "\nNúmero 5: " << n5 << " vezes"; 
	cout << "\nNúmero 6: " << n6 << " vezes"; 
	cout << "\nTotal de vezes de lançamento do dado: " << n1 + n2 + n3 + n4 + n5 + n6 << " vezes"<< endl;
	
	return 0;
}
