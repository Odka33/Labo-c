#include <stdio.h>

int seconds = 360;
int x = 60;

int minutes(int seconds, int x)
{
	int minute = seconds / x;
	return minute;
}

int heures(int seconds, int x)
{
	int minute;
	minute = minutes(seconds, x);
	int heure = minute / x;
	return heure;
}

int main()
{
	int minute;
	minute = minutes(seconds, x);
	printf("Pour %i secondes cela fait %i minutes \n", seconds, minute);
	int heure;
	heure = heures(seconds, x);
	printf("Pour %i minutes cela fait %i heures\n", minute, heure);
	return 0;
}