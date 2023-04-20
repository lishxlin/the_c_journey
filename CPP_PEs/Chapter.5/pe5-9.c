#include <stdio.h>

void Temperatures(double temp);

int main(void)
{
	double user_temp;
	
	printf("Please enter temperature in Fahrenheit scale: ");
	int status;
	status = scanf("%lf", &user_temp);
	while (status == 1)
	{
		Temperatures(user_temp);
		printf("Please enter another temperature in Fahrenheit scale: ");
		status = scanf("%lf", &user_temp);
	}

	return 0;
}

void Temperatures(double temp)
{
	double Celsius, Kelvin;
	const double K = 273.16;
	const double C = 5.0 / 9.0;

	Celsius = C * (temp - 32.0);
	Kelvin = Celsius + K;
	printf("Temperature in Fahrenheit is %f.\n", temp);
	printf("Temperature in Celsius is %f.\n", Celsius);
	printf("Temperature in Kelvin is %f.\n", Kelvin);
}
