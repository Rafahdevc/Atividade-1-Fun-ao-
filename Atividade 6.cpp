#include <iostream>
#include <clocale> // Biblioteca necess�ria para utilizar a fun��o setlocale, para aceitar acentua��es e caracteres especiais
#include <cstdlib> // Biblioteca necess�ria para utilizar a fun��o rand, onde ser� gerado o n�mero pseudoaleat�rio
#include <ctime> // Biblioteca necess�ria para utilizar a fun��o srand

using namespace std;

int dado(){
	
	// Gera um n�mero aleat�rio entre 1 e 6 atrav�s do rand (pseudoaleat�rio)
	return(1 + rand () % 6);
	
	}
	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	// Vari�veis do tipo inteiro para armazenar quantas vezes cada um dos n�meros do dado foi sorteado, deve-se iniciar os n�meros em 0
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, count;
	
	cout << "---------- Lan�amento de um dado cem mil vezes ----------\n";
	
	// Inicializa o valor da "semente" de acordo com o tempo atual cada vez que o programa � executado no rand (pseudoaleat�rio)
	srand(time(NULL));
	
	// Looping de cem mil itera��es
	for(count = 0; count < 100000; count ++){
	
	// Condicional para saber que n�mero foi gerado pela fun��o dado()
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
	
	cout << "\nTotal de apari��es de cada n�mero e sua respectiva porcentagem:" << endl;
	cout << "\nN�mero 1: " << n1 << " vezes";
	cout << "\nN�mero 2: " << n2 << " vezes"; 
	cout << "\nN�mero 3: " << n3 << " vezes";
	cout << "\nN�mero 4: " << n4 << " vezes"; 
	cout << "\nN�mero 5: " << n5 << " vezes"; 
	cout << "\nN�mero 6: " << n6 << " vezes"; 
	cout << "\nTotal de vezes de lan�amento do dado: " << n1 + n2 + n3 + n4 + n5 + n6 << " vezes"<< endl;
	
	return 0;
}
