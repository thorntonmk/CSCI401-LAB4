#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);

int subtract(int a, int b);

int multiply(int a, int b);

int divide(int a, int b);

void exit_p();


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	//make an array of function pointers
	void *(functions[])(int, int) = {add, subtract, multiply, divide, exit};
	int a = 5; int b = 15;
	int op;

	printf("Operand 'a' : %d | Operand 'b' : %d.\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):4 ", a, b);
	scanf("%d", &op);

	int res = (*functions[op])(a, b);

	printf("X = %d", res);

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

void exit_p() {
	exit(0);
}