/*
 *
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

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

#include "header.h"
#include "modificare.h"

#if (TIPO_CALCOLO!=N_PRIMI) && (TIPO_CALCOLO!=PRIMI_MINORI)
#error TIPO_CALCOLO sconosciuto, deve essere uguale a N_PRIMI o PRIMI_MINORI
#endif

#if (TIPO_CALCOLO==PRIMI_MINORI)
#if (N<4)
#error N deve essere >= 4
#endif /*#if (N<4)*/
#else /*#if (TIPO_CALCOLO==PRIMI_MINORI)*/
#if (N<2)
#error N deve essere >= 2
#endif /*#if (N<2)*/
#endif /*#if (TIPO_CALCOLO==PRIMI_MINORI)*/


int main ()
{   
    register llu i, rad, numTest=5, *primi, contPrimi=2; /*nell'array dei primi ci sono già 2 e 3*/

    /*Creo l'array per i primi*/
    #if (TIPO_CALCOLO==PRIMI_MINORI)
    /*I primi minori di un numero>2 non possono essere più dei dispari minori del numero*/
    if((primi=(llu*)malloc(sizeof(llu)*(N/2)))==NULL)
    #else /*Sappiamo quanti sono*/
    if((primi=(llu*)malloc(sizeof(llu)*N))==NULL)
    #endif /*#if (TIPO_CALCOLO==PRIMI_MINORI)*/
    {
        err(stderr, "Malloc() ha restituito NULL\n");
        exit(EXIT_FAILURE);
    }

    primi[0]=2; primi[1]=3;

    #if BENCHMARK
    #include <time.h>
    clock_t inizio=clock(), fine;
    #endif /*#if BENCHMARK*/

    inf(stderr, "Calcolo avviato\n");
    #if (TIPO_CALCOLO==N_PRIMI)
    while (contPrimi<N)
    #else
    while (numTest<N)
    #endif /*#if (TIPO_CALCOLO==N_PRIMI)*/
    {
        rad=sqrtl(numTest);
        i=1;  /*primi[0] è 2, numTest essendo sempre dispari non sarà mai divisibile per 2*/
        while (primi[i]<=rad) /*divido per tutti i primi minori della radice quadrata*/
            if ((numTest%primi[i++])==0) 
                goto nonprimo;
        primi[contPrimi++]=numTest;
        nonprimo:;
        numTest+=2; 
    }

    #if BENCHMARK
    fine=clock();
    inf(stderr, "Tempo: %fs\n", (double)(fine-inizio)/CLOCKS_PER_SEC);
    #else
    for(i=0; i<contPrimi; i++) /*stampo i primi trovati*/
        printf("%llu %llu\n", i+1, primi[i]);
    #endif /*#if BENCHMARK*/

    free (primi);
    return EXIT_SUCCESS;
}