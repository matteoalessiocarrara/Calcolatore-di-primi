/*
 *
 * Copyright 2014-2016 Matteo Alessio Carrara <sw.matteoac@gmail.com>
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

# ifndef CONFIG_H
# define CONFIG_H

# include <stdint.h>

// Un numero primo, vengono salvati prima di stamparli
typedef uint32_t prime_t;
# define PRIME_T_FORMAT_STRING "%u"

// Indica quanti numeri sono stati trovati
typedef uint32_t primes_counter_t;


// Contiene la radice quadrata di un numero primo (prime_t). Deve essere sufficientemente
// grande per contenere sqrt(max(prime_t))
typedef uint16_t prime_sqrt_t;


#endif /* #ifndef CONFIG_H */
