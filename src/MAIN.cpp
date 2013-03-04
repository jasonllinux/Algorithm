/*
 * MAIN.cpp
 *
 *  Created on: 2013-3-3
 *      Author: Jason
 */

#include <iostream>
//#include "BubbleSort.h"

using namespace std;

void BubbleSort(int a[], int n);
void testBubbleSort();
void testPointerSize();

int main(void) {
	testBubbleSort();
	testPointerSize();
	return 0;
}

void testBubbleSort() {
	cout<<"Test Bubble Sort.................."<<endl;
	int data[] = {1, 8, 5, 98, 56, 88,};
	//	cout<<"Hello World! \n";
		BubbleSort(data, 6);
		for(int i=0; i<=6; i++) {
			cout<<data[i]<<endl;
		}
}

void BubbleSort(int a[], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=1; j<=n-1; j++) {
			if(a[j-1] > a[j]) {
//				cout<<"µ÷»»ÏÂ";
				swap(a[j-1], a[j]);  //TODO
//				swap(&a[j-1], &a[j]);
			}
		}
	}
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



