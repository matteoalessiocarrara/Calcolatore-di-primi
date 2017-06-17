/* Copyright 2017 Matteo Alessio Carrara <sw.matteoac@gmail.com> */

#include <malloc.h>
#include <stdio.h>
#include <stdint.h>
#include "bitmap.c"
#define CALC_UNTIL 5800080
typedef uint8_t word;

int main()
{
	bitmap *numbers = bitmap_create(CALC_UNTIL);

	for(register int i = 2; i < CALC_UNTIL;)
	{
		for(register int j = 2; (i*j) < CALC_UNTIL; j++)
		{
			bitmap_enable(numbers, i*j);
		}

		while(bitmap_get(numbers, ++i));
	}

	for(register int i = 0; i < CALC_UNTIL; i++)
	{
		if(!bitmap_get(numbers, i))
			printf("%d\n", i);
	}
	return 0;
}
