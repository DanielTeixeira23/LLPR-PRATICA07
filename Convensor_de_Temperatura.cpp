#include <stdio.h>
#include <locale.h>


float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int op;
	float tf, tc;
	printf("\t\t\tConversor de temperatura\n\n");
	printf("Escolha uma opção:\n");
	printf("1 - Celsius para Fahrenheit\n");
	printf("2 - Fahrenheit para Celsius\n");
	printf("Resposta: ");
	scanf("%d", &op);
	printf("\n");
	printf("Digite o valor da temperatura: ");
	
	if(op==1){
		printf("em Celsius: ");
		scanf("%f", &tc);
		tf = celsiusParaFahrenheit(tc);
	}else{
		printf("em Fahrenheit: ");
		scanf("%f", &tf);
		tc = fahrenheitParaCelsius(tf);
	}
	printf("Temperatura em celsius: %.2f °C\n", tc);
	printf("Temperatura em fahrenheit %.2f °F\n", tf);
	
	return 0;
}

float celsiusParaFahrenheit(float c){
	return c * 1.8 + 32;
}

float fahrenheitParaCelsius(float f){
	return (f-32)/1.8;
}

