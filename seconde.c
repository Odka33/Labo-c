#include <stdio.h>

int seconds = 360;
int x = 60;
int minute;

int minutes(int seconds, int x)
{
	int minute = seconds / x;
	return minute;
}

int main()
{
	int minute;
	minute = minutes(seconds, x);
	printf("Pour %i secondes cela fait %i minutes \n", seconds, minute);
	return 0;
}