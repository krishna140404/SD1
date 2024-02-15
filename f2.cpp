#include <stdio.h> 
int main(void) {
	int Sum = 0;
	int Add = 1;
	for (Add = 1; Add <= 500; Add++) {
		Sum += Add;
	}
	printf("%d", Sum);
	return 0;
}
