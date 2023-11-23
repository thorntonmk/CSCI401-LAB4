#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);

int subtract(int a, int b);

int multiply(int a, int b);

int divide(int a, int b);

int exit_p(int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	//make an array of function pointers
	int (*functions[])(int,int) = {&add, &subtract, &multiply, &divide, &exit_p};
	int a = 5; int b = 15;
	int op;

	while(1) {
		printf("Operand 'a' : %d | Operand 'b' : %d.\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ", a, b);
		scanf("%d", &op);

		int result = (*functions[op])(a, b);
		printf("X = %d\n", result);
	}

	

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }

int subtract(int a, int b) {
	printf("Subtracting 'a' and 'b'\n");
	return a-b;
}

int multiply(int a, int b) {
	printf("Multiply 'a' and 'b'\n");
	return a*b;
}

int divide(int a, int b) {
	printf("Dividing 'a' and 'b'\n");
	return a/b;
}

int exit_p(int a, int b) {
	exit(0);
	return 0;
}