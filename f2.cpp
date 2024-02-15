/*
* FILE : f2.cpp
* PROJECT : Focused Assignment 2
* PROGRAMMER : krishna kachhiapatel
* FIRST VERSION : 2024-01-20.
* Student id:8963150
*/
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
