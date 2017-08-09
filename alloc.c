/*
错误检查分配器实现 
*/ 
#include <stdio.h>
#include "alloc.h"
#include <stddef.h>
#undef malloc
void *alloc(size_t size){
	void *new_men;
	new_men = malloc(size);
	if(new_men==NULL){
		printf("Out of memory!\n");
		exit(1);
	}
	return new_men;
}
