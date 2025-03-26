#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pe12-2a.h"

static enum MODES mode;
static double distance;
static double fuel;

void line_flush(void)
{
	while (getchar() != '\n')
		;
}

void set_mode(int mode_func)
{
	printf("Read %d\n", mode_func);
	if (mode_func == -1) {
		puts("Done");
		exit(0);
	}

	if (mode_func == 0 || mode_func == 1) {
		mode = (mode_func + 1 == 1) ? metric : US;
	} else if (mode == metric || mode == US) {
		printf("Invalid mode specified. Mode %d used.\n", mode);
	} else {
		puts("You may type a wrong mode, only accept 0, 1.");
		exit(1);
	}
}

void get_info(void)
{
	line_flush();
	switch (mode) {
	case metric:
		printf("Enter distance traveled in kilometers: ");
		scanf("%lf", &distance);
		line_flush();
		printf("Enter fuel consumed in liters: ");
		scanf("%lf", &fuel);
		line_flush();
		break;
	case US:
		printf("Enter distance traveled in miles: ");
		scanf("%lf", &distance);
		line_flush();
		printf("Enter fuel consumed in gallons: ");
		scanf("%lf", &fuel);
		line_flush();
		break;
	default:
		break;
	}
}

void show_info(void)
{
	switch (mode) {
	case metric:
		printf("Fuel consumption is %lf liters per 100 km.\n", (fuel / (distance / 100)));
		break;
	case US:
		printf("Fuel consumption is %lf miles per gallon.\n", (distance / fuel));
	default:
		break;
	}
}
