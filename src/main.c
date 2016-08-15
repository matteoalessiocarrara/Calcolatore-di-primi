/*
 * Copyright 2014-2016 Matteo Alessio Carrara <sw.matteoac@gmail.com>
 * Grazie ad Alessandro Renzulli e a tutti gli amici che mi hanno aiutato
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

# include <time.h>
# include <math.h>
# include <stdio.h>
# include <errno.h>
# include <stdlib.h>

# include "config.h"


int main(int argc, char **argv)
{
	prime_t *primes; // TODO Utilizzare una mappa di bit?
	clock_t calc_start, calc_end;
	primes_counter_t primes_counter = 0, primes_to_calc;


	if (argc == 2)
	{
		// WARNING Il return potrebbe essere un collo di bottiglia
		primes_to_calc = atoll(argv[1]);
	}
	else
	{
		puts("Uso: calcolatore-di-primi numeri-da-calcolare");
		exit(EXIT_FAILURE);
	}


	if ((primes = (prime_t *)malloc(sizeof(prime_t) * primes_to_calc)) == NULL)
	{
		perror("malloc()");
		exit(EXIT_FAILURE);
	}
	else
	{
		if (primes_to_calc >= 1) primes[primes_counter++] = 2;
		if (primes_to_calc >= 2) primes[primes_counter++] = 3;
	}


	calc_start = clock();
	for (prime_t test = 5; primes_counter < primes_to_calc; test += 2)
	{
		long s;
		primes_counter_t i;

		// Divide per tutti i primi minori della radice quadrata
		// i parte da 1 perché primes[0] è 2 e nessun numero dispari è divisibile per 2
		// WARNING sqrtl è un altro collo di bottiglia
		for (s = sqrtl(test), i = 1; primes[i] <= s; i++)
			if ((test % primes[i]) == 0)
				goto not_a_prime;

		primes[primes_counter++] = test;
		not_a_prime:;
	}
	calc_end = clock();


	for(primes_counter_t i = 0; i < primes_counter; i++)
		printf(PRIME_T_FORMAT_STRING "\n", primes[i]);


	fprintf(stderr, "\nTempo impiegato: %f s\n", (double)(calc_end - calc_start)/CLOCKS_PER_SEC);


	return EXIT_SUCCESS;
}
