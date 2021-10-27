#include <stdio.h>

convertion(int lower, int upper, int step) {
	float fahr, celsius;
	fahr = lower;
	printf("%10s\t%7s\n", "Fahrenheit", "Celsius");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%10.0f\t%7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

main() {
	convertion(0, 300, 20);
}
