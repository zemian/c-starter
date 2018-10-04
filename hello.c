#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	printf("hello\n");

	double n = 0.01;
	//printf("hello " + "world\n");
	printf("number 4.2: %.20f\n", 4.2);
	printf("number 4.2: %.25g\n", 4.2);
	printf("number 1.1: %.20f\n", 1.1);
	printf("number 2.1: %.20f\n", 2.1);
	printf("number 0.01: %.20f\n", 0.01);
	printf("number 0.02: %.20f\n", 0.02);
	printf("number 0.03: %.20f\n", 0.03);
	printf("number 0.01 + 0.02: %.20f\n", 0.01 + 0.02);
	printf("number 0.01 + 0.02 == 0.03: %s\n", ((0.01 + 0.02) == 0.03) ? "true" : "false");
	printf("number 2.1 + 2.1 == 4.2: %s\n", (2.1 + 2.1 == 4.2) ? "true" : "false");
	printf("number size: %lu\n", sizeof(n));

	printf("test: %s\n", ((0.1+0.1+0.1) == 0.3) ? "true" : "false");

	char a[] = "test";
	printf("a: %s, size=%lu\n", a, sizeof(a));

	char *b = "test";
	printf("b: %s, sizeof=%lu\n", b, sizeof(b));
	printf("b: %s, len=%lu\n", b, strlen(b));

	return 0;
}