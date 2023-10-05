#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;
	int sec, min, hour;
	
	printf("input second:");
	scanf("%d", &input);
	
	sec = input%60;
	min = (input%3600)/60;
	hour = input/3600;
	
	printf("The time is %d : %d : %d\n", hour, min, sec);
	
	return 0;
}
