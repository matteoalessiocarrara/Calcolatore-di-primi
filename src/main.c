/*
 * Copyright 2014-2015 Matteo Alessio Carrara <sw.matteoac@gmail.com>
 * Grazie ad "Alessandro Renzulli" e a tutti gli amici che mi hanno aiutato
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 */

#include <math.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

#include "header.h"
#include "config.h"
#include "version.h"


int main()
{
	/* Array per i primi */
	register num_t *primi;
	/* Contatore dei primi nell'array (c'è già "3") */
	cprimi_t cprimi = 1;
	/* Usata in cicli sull'array */
	register cprimi_t i;
	/* Radice quadrata del numero che si sta controllando */
	register rad_t rad;

	/* Creo l'array */

	#if (TIPO_CALCOLO == PRIMI_MINORI)

	/* I primi minori di un numero > 2 non sono più dei dispari minori */
	/* I dispari minori di N sono N/2 */
	/* Non c'è "2" nell'array, quindi la memoria è per (N/2)-1 primi */
	primi = (num_t*) malloc(sizeof(num_t) * ((N/2)-1));

	#else

	/* Vogliamo calcolare N primi, ma il "2" non viene salvato quindi N-1*/
	primi = (num_t*) malloc(sizeof(num_t) * (N-1));

	#endif

	if (primi == NULL)
	{
		perror("malloc(), " __FILE__);
		exit(EXIT_FAILURE);
	}

	primi[0] = 3;

	inf(stderr, "calcolo avviato\n");

	#if BENCHMARK

	#include <time.h>
	clock_t inizio = clock(), fine;

	#endif

	#if (TIPO_CALCOLO == N_PRIMI)

	for (register num_t test = 5; cprimi < N; test += 2)

	#else

	for (register num_t test = 5; test < N; test += 2)

	#endif

	{
		rad = sqrtl(test);

		/* Divide per tutti i primi minori della radice quadrata */
		for (i = 0; primi[i] <= rad; i++)
			if ((test % primi[i]) == 0)
				goto nonprimo;

        /* Primo */
		primi[cprimi++] = test;
		nonprimo:;
	}

	#if BENCHMARK

	/* Stampa il tempo impiegato */
	fine = clock();
	inf(stderr, "tempo: %f s\n", (double)(fine-inizio)/CLOCKS_PER_SEC);

	#else

	/* Stampa i primi trovati */
	for(i = 0; i < (N-1); i++)
		/* ATTENZIONE: 3 non è il 2°, ma lo 0° numero primo */
		/* Non è un bug, basterebbe scrivere i+2 */
		/* Ma ci vorrebbe più tempo per stampare (?) */
		printf(CPRIMI_T_FORMAT_STRING " " NUM_T_FORMAT_STRING "\n", i, primi[i]);

	#endif

	return EXIT_SUCCESS;
}
