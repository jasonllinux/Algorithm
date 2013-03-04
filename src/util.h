/*
 * util.h
 *
 *  Created on: 2013-3-4
 *      Author: Jason
 */

#ifndef UTIL_H_
#define UTIL_H_

#include "util.h"

#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}

//交换数组中的两个数
void swap(int *a, int *b);


#endif /* UTIL_H_ */
