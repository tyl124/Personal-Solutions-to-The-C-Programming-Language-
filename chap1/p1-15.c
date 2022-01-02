#include <stdio.h>

float transform(int fahr){
	float celsius = 0;
	celsius = (5.0 / 9.0) * (fahr - 32.0);

	return celsius;
}

int main(){
	int fahr;
	float celsius;
	int low, upper, step;

	low = 0;
	upper = 300;
	step = 20;

	printf("Celsius:\n");
	while(low <= upper){
		fahr = low;
		celsius = transform(fahr);
		printf("%5.2f\n", celsius);
		low += step;
	}

	return 0;
}

