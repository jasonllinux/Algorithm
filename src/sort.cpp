/*
 * BubbleSort.cpp
 *
 *  Created on: 2013-3-4
 *      Author: Jason
 */


#include "sort.h"
#include "util.h"

void bubbleSort1(int a[], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=1; j<=n-1; j++) {
			if(a[j-1] > a[j]) {
//				cout<<"µ÷»»ÏÂ";
				swap(&a[j-1], &a[j]);  //TODO
//				swap(&a[j-1], &a[j]);
			}
		}
	}
}



void bubbleSort2(int a[], int n) {

}


