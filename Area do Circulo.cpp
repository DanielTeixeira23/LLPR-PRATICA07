#include <stdio.h>
#include <locale.h>

#define PI 3.14

float areaDocirculo(float raio);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float r, a;
	printf("Informe o valor do raio: ");
	scanf("%f", &r);
	a = areaDocirculo(r);
	printf("A área do círculo é: %.2f cm\n", a);

	return 0;
}

float areaDocirculo(float raio){
	return PI*raio*raio;
}
