#include <stdio.h> 
int main(void) {
	int Sum = 0;
	int Add = 1;
	while ( Add <= 500 ) {
		Sum += Add;
		Add++;
	}
	printf("%d", Sum);
	return 0;
}
