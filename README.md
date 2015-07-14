# Calcolatore di primi

Crea una lista con "x primi" o "tutti i primi minori di x"

### Sinossi

./a.out

### Descrizione

Questo software cerca di essere il più veloce calcolatore di numeri primi; è probabilmente più utile al programmatore per migliorare nella programmazione in c che per altri. È richiesta una minima conoscenza del c per utilizzare questo software.

### Configurazione

Prima di compilare, vanno modificati i define contenuti nel file "modificare.h". Ci sono i commenti, ma se qualcosa non fosse chiaro c'è anche la mia email.

### Limiti

 * "N" deve essere maggiore o uguale a 4 con TIPO_CALCOLO==PRIMI_MINORI. Questo perché nell'array dei primi ci devono essere in ogni caso "2" e "3", e la memoria da allocare con malloc() è calcolata con (N/2)*llu. Con N=4 vengono create 2 variabili llu, ma con N<4 ne vengono create meno di 2.
 * "N" deve essere maggiore o uguale a 2 con TIPO_CALCOLO==N_PRIMI, perché ci devono sempre essere "2" e "3"
 * L'array di primi può contenere al massimo 2^(sizeof(long long unsigned)*8)-1 primi (valore massimo per gli offset "contPrimi" e "i")
 * Il valore massimo di "N" con TIPO_CALCOLO==N_PRIMI potrebbe essere 2^(sizeof(long long unsigned)\*8)-1, come conseguenza della riga sopra. Però la variabile con il numero da controllare potrebbe andare in overflow, per evitarlo il valore massimo è 2^(sizeof(long long unsigned)\*8)/2. Questo è il numero di numeri dispari che la variabile può contenere; con y numeri dispari, i primi non potranno certo essere y+1 o y+2, potendo essendo al massimo y.
 * La radice quadrata del numero da controllare può essere al massimo 2^(sizeof(long long unsigned)*8)-1 o il valore massimo per un long double (restituito da sqrtl()), ne consegue che il numero più grande gestibile senza che la variabile "rad" vada in overflow è uno dei due precedenti numeri (il più piccolo), ^2.
 * Il numero controllabile più grande (ovvero il numero più grande che sta in numTest) è 2^(sizeof(long long unsigned)*8)-1
 * Dalle due righe sopra si ricava il valore massimo di N con TIPO_CALCOLO==PRIMI_MINORI

### Os

Questo software è pensato per os unix-like, ma modificando qualcosa forse potrebbe funzionare anche sul malefico winzoz (tranquilli, farò tutto il possibile per evitare che questo accada :D)

### Return

Il software restituisce EXIT_SUCCESS se non ci sono problemi, altrimenti EXIT_FAILURE


 
