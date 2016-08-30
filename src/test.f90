! TODO Calcolo del tempo impiegato
! TODO Prendere primes_to_calc da argv


program calcolatore_di_primi
implicit none


integer, parameter :: primes_to_calc = 40000
integer :: primes_counter = 0, i
integer :: test = 5
integer, dimension(primes_to_calc) :: primes


if (primes_to_calc >= 1) then
	primes(primes_counter) = 2
	primes_counter = primes_counter + 1
endif
if (primes_to_calc >= 2) then
	primes(primes_counter) = 3
	primes_counter = primes_counter + 1
endif


do while(primes_counter < primes_to_calc)

	i = 1
	do while(primes(i) <= sqrt(real(test)))
		if (mod(test, primes(i)) == 0) then
			goto 100
		endif
		i = i + 1
	enddo

	primes(primes_counter) = test
	primes_counter = primes_counter + 1
	100 test = test + 2
enddo


do i = 0, primes_to_calc - 1
	print "(1i0)", primes(i) ! TODO Stampare come int
enddo



end program calcolatore_di_primi
