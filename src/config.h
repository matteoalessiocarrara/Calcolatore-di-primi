/*
 * Roba da modificare prima di compilare
 *
 * Copyright 2014-2015 Matteo Alessio Carrara <sw.matteoac@gmail.com>
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
 */

#include "header.h"

#ifndef MODIFICARE_H
#define MODIFICARE_H

/* Calcola N_PRIMI o PRIMI_MINORI */
#define TIPO_CALCOLO N_PRIMI

/* Quanti primi?/Primi più piccoli di? */
/* Con PRIMI_MINORI N deve essere >= 4, con N_PRIMI > 1 */
/* TODO: controllare automaticamente se valido? */
#define N 20

/* Mostra SOLO quanto tempo ci ha messo per il calcolo dei primi */
/* Mettere un numero diverso da 0 per attivare */
#define BENCHMARK 0

/* Dimensione delle variabili */
/* Con variabili più piccole il sw sarà più veloce, ma attenzione agli overflow */
/* Se non si è sicuri, usare un tipo grande (es. long long unsigned) */
/* TODO: o double? */

/* Un numero primo */
#define NUM_T_FORMAT_STRING "%u"
typedef unsigned num_t;

/* Il contatore dei numeri primi */
#define CPRIMI_T_FORMAT_STRING "%u"
typedef unsigned cprimi_t;

/* La radice quadrata del numero che si sta controllando */
/* Il numero più grande utilizzabile dipende comunque dal massimo return di sqrtl() */
#define RAD_T_FORMAT_STRING "%hu"
typedef unsigned short rad_t;

#endif /* #ifndef MODIFICARE_H */
