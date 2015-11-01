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

/* Valori per il define TIPO_CALCOLO in config.h */
#define N_PRIMI 0
#define PRIMI_MINORI 1

/* Il numero più grande rappresentabile con un certo tipo unsigned */
/* (2^bit)-1 */
#define UNSIGNED_MAX(tipo) ((1<<(sizeof(tipo)*8))-1)

/* Informazioni su stderr, solo output su stdout */
#define err fprintf(stderr, "E: " __FILE__ ":%d: ", __LINE__); fprintf
#define inf fprintf(stderr, "I: "); fprintf
#define warn fprintf(stderr, "W: "); fprintf

#endif /* #ifndef HEADER_H */
