/*
 * MAIN.cpp
 *
 *  Created on: 2013-3-3
 *      Author: Jason
 */

#include <iostream>

#include "Sort.h"

using namespace std;

void testBubbleSort();
void testQuickSort();
void testPointerSize();
void testSize();

int main(void) {
	testBubbleSort();
	testPointerSize();
	testSize();
	return 0;
}

void testBubbleSort() {
	cout<<"Test Bubble Sort.................."<<endl;
	int data[] = {1, 8, 5, 98, 56, 88,};
	//	cout<<"Hello World! \n";
		bubbleSort1(data, 6);
		for(int i=0; i<=6; i++) {
			cout<<data[i]<<endl;
		}
}

void testQuickSort() {

}




void testPointerSize() {
	cout<<"Test Pointer Size.................."<<endl;
	cout << "double "<<endl;
	cout << sizeof(double *) <<endl;
	cout << "Char "<<endl;
	cout << sizeof(char *) <<endl;
	cout << "Int "<<endl;
	cout << sizeof(int *) <<endl;
}


void testSize() {
	cout<<"Test Size.................."<<endl;
	cout << "double "<<endl;
	cout << sizeof(double) <<endl;
	cout << "Float "<<endl;
	cout << sizeof(float) <<endl;
	cout << "Integer "<<endl;
	cout << sizeof(int) <<endl;
	cout << "Char "<<endl;
	cout << sizeof(char) <<endl;

}


