#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float altura = 2;
	float PesoIdealM = 72.7*altura-58;
	float PesoIdealF = 62.1*altura-44.7;
	
	printf("O peso ideal para uma pessoa de %f metros e' de \n%f para homens e \n%f para mulheres", altura, PesoIdealM,PesoIdealF);
	printf("\n");
	system("pause"); /* Pause the Console */
    
   }

