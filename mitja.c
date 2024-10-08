#include <stdio.h>

int main() {
	float suma=0;
	float mitja;
	float nou_valor=0.0;
	int numero_repeticions=0;
	char consulta='s';

	while(consulta=='s') {
		printf("ElTaha25, Dòna la següent dadas: ");
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("ElTaha25, Vols continuar (s/n): ");
	 	scanf("%s",&consulta);

	}
	mitja=suma/numero_repeticions;
	printf("ElTaha25, la mitja és: %.2f\n",mitja);
	return 0;
}

