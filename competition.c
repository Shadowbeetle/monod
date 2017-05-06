#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USAGE_1 "Usage: competition u1max[1/h] u2max[1/h] Ks1 Ks2 V [m3]"
#define USAGE_2 "       eg. competition 0.8 2 0.5 1.2 20"

float monod_comp (float u1max, float u2max, float ks1, float ks2, float v);
int print_usage_and_die();

int main (int argc, char *argv[]) {
	if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
		return (print_usage_and_die());
	}
	if (argc != 6) {
		printf("Invalid number of arguments\n");
		return(print_usage_and_die());
	}
	float u1max = atof(argv[1]);
	float u2max = atof(argv[2]);
	float ks1 = atof(argv[3]);
	float ks2 = atof(argv[4]);
	float v = atof(argv[5]);
	printf("f=%g m3/h\n", monod_comp(u1max, u2max, ks1, ks2, v));
	return 0;
}


int print_usage_and_die() {
	printf("%s\n%s\n", USAGE_1, USAGE_2);
	return(1);
}

float monod_comp (float u1max, float u2max, float ks1, float ks2, float v) {
	return (v * u1max * ks2) - (u2max * ks1) / (ks1 + ks2);
}
