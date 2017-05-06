#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USAGE_1 "Usage: monod umax S Ks"
#define USAGE_2 "       eg. monod 0.8 2 0.5"

float monod (float umax, float s, float ks);
int print_usage_and_die();


int main (int argc, char *argv[]) {
	if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
		return (print_usage_and_die());
	}
	if (argc != 4) {
		printf("Invalid number of arguments\n");
		return(print_usage_and_die());
	}
	float umax = atof(argv[1]);
	float s = atof(argv[2]);
	float ks = atof(argv[3]);
	printf("u=%g\n", monod(umax, s, ks));
	return 0;
}

int print_usage_and_die() {
	printf("%s\n%s\n", USAGE_1, USAGE_2);
	return(1);
}

float monod (float umax, float s, float ks) {
	return (umax * s) / (s + ks);
}

