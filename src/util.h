/*
 * util.h
 *
 *  Created on: 2013-3-4
 *      Author: Jason
 */

#ifndef UTIL_H_
#define UTIL_H_

#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}

//交换数组中的两个数
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

//获取数组的长度
int getLength(int* a) {

	return 0;
}


#endif /* UTIL_H_ */
