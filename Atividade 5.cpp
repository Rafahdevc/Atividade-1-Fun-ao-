#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]){

printf("Sorteio numero 1 ao 6\n");
srand(time(NULL));
printf("Numero sorteado e: %d\n", rand ()%6 + 1);
system("Pause");
	
	return 0;
}
