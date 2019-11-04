//============================================================================
// Name        : Valgrind_test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void func(){
	//allocated but not freed
	int *i = new int;

	//hmmm will it catch this?
	int *j=i;

	//uninitialized pointer?
	int *k;
	if (k)
		int kk = *k;

	//access memory thats not mine
	int l = *(i+1);

}

void func1(){
	int *i = new int[10];
	if (i)
		delete [] i;
}
int main() {
	func();
}
