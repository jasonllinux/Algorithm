/*
 * BubbleSort.cpp
 *
 *  Created on: 2013-3-4
 *      Author: Jason
 */


#include "util.h"

void BubbleSort(int a[], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=1; j<n-1; j++) {
			if(a[j-1] > a[j]) {
				//swap(a[j-1], a[j]);  //TODO
//				swap(&a[j-1], &a[j]);
			}

		}

	}
}
