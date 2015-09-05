/*
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

#ifndef HEADER_H
#define HEADER_H

typedef long long unsigned llu;

#define VERSIONE_SOFTWARE_S "3.0.1 5/9/2015"

#define NUM_MAX ((llu)~0) /*Il numero più grande per una variabile llu*/

#define err fprintf(stderr, "E: "__FILE__":%d: ", __LINE__); fprintf 
#define warn fprintf(stderr, "W: "); fprintf
#define inf fprintf(stderr, "I: "); fprintf

/*Valori per TIPO_CALCOLO*/
#define N_PRIMI 0
#define PRIMI_MINORI 1

#endif /*#ifndef HEADER_H*/