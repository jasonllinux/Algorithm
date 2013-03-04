/*
 * util.cpp
 *
 *  Created on: 2013-3-4
 *      Author: Jason
 */
#include "util.h"

//交换数组中的两个数
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}


