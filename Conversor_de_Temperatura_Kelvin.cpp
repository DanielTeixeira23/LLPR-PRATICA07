#include <stdio.h>
#include <locale.h>

float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);
float celsiusParakelvin(float k);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int op;
	float tf, tc, tk;
	printf("\t\t\tConversor de temperatura\n");
	printf("Escolha uma opção:\n\n");
	printf("1 - Celsius para Fahrenheit\n");
	printf("2 - Fahrenheit para Celsius\n");
	printf("3 - Celsius para Kelvin\n");
	printf("Resposta: ");
	scanf("%d", &op);
	printf("\n");
	
	printf("Digite o valor da temperatura ");
	
	if(op==1){
		printf("em Celsius: ");
		scanf("%f", &tc);
		tf = celsiusParaFahrenheit(tc);
	}else if(op==2){
		printf("em Fahrenheit: ");
		scanf("%f", &tf);
		tc = fahrenheitParaCelsius(tf);
	}
	if(op==3){
		printf("em Celsius: ");
		scanf("%f", &tc);
		tk = celsiusParakelvin(tc);
	}
	printf("Temperatura em Celsius: %.2f °C\n", tc);
	printf("Temperatura em Fahrenheit: %.2f °F\n", tf);
	printf("Temperatura em Kelvin: %.2f °K\n", tk);
	
	return 0;
}

float celsiusParaFahrenheit(float c){
	return c * 1.8 + 32;
}

float fahrenheitParaCelsius(float f){
	return (f-32)/1.8;
}

float celsiusParakelvin(float c){
	float k = c + 273.15;
	return k;
}

