3.1 1/11/2015
-------------
 - Migliorati commenti
 - Dimensione delle variabili modificabile
 - Main quasi completamente riscritta

3.0.1 5/9/2015
--------------
 - Output su stdout, errori informazioni ed altra roba su stderr
 - Aggiunto qualche commento
 - Tempo del calcolo in secondi

3.0 12/7/2015
-------------
 - Codice ripulito e semplificato
 - Eliminata gestione dei file, stampa i risultati con printf
 - Eliminata protezione overflow, usando una formula è possibile sapere subito se la variabile andrà in overflow
 - Non prende più niente dalla main (per migliorare la velocità)
 - Windows non più ufficialmente supportato
 - Meno informazioni di dubbia utilità in output
 - Migliorata velocità
 - Migliore documentazione

7/7/2015
--------
 - È già passato un anno! :D

2.6 31/3/2015
-------------
 - Aggiunto tipedef numero, per facilitare eventuali modifiche
 - Cambiati le variabili per i numeri da "long unsigned int" a "long long unsigned int" (modificabile comunque)
 - Aggiunta costante NUM_MAX, il numero più grande rappresentabile con una variabile di tipo numero (unsigned)
 - Piccoli miglioramenti grafici
 - Qualche modifica al codice
 - Aggiunto define OVERFLOW_SQRT (da attivare solo se lo chiede il sw)

2.5 21/2/2015
-------------
 - Ridotta del 50% la memoria ram necessaria per il calcolo "tutti i primi minori di x"

2.4 3/2/2015
------------
 - Migliorato il codice
 - Eliminati alcuni bug
 - Aggiunte date nel changelog
 - Migliorata la protezione da overflow e quindi la velocità quando è attiva

2.3 2/2/2015
------------
 - Cancellata una variabile register
 - Migliorato il codice e la velocità
 - Aggiunto qualche commento
 - Risolto qualche bug
 - Percorso e nome del file presi dalla main()
 - Eliminata la funzione exit_()
 - Aggiunto qualche #define modificabile
 - Protezione overflow disattivabile (per una maggiore velocità in caso di piccoli calcoli)

2.2 6/12/2014
-------------
 - Migliorate le prestazioni (rispetto alla 2.1.1)

2.1.1 23/11/2014
--------------------------------------
 - Qualche modifica al codice
 - Incluso contatore del tempo di esecuzione attivabile decommentando #define TEST_VELOCITA_CALCOLO

2.1 18/11/2014
------------------------------------
 - Tolto stdbool.h
 - Per sicurezza, prima di scrivere il file controllo se è sempre possibile scriverlo (grazie a Alessandro Renzulli)
 - Aggiunto system("pause") a tutte le uscite su windows, in modo che il terminale non si chiude subito dando il tempo di leggere all'utente
 - Risolto un gravissimo bug che ogni tanto inseriva qualche numero non primo fra i primi (grazie a Alessandro Renzulli)
 - Sostituiti commenti // con / * * /

2.0 17/11/2014
------------------------------------
 - Migliorato codice per info_ warn e error
 - Migliorato salvataggio del file
 - Eliminate parti del codice inutili o ripetute

1.9 (versione più veloce) 16/11/2014
------------------------------------
 - Codice riscritto e alleggerito in alcune parti, ottimizzato per grandi calcoli

1.9 7/9/2014
------------
 - Grafica migliorata (senza ncurses)
 - Piccoli miglioramenti al codice

1.8 31/8/2014
-------------
 - Codice molto migliorato
 - Percentuale completa nel calcolo, questo comunque non incide molto sulle prestazioni. Nei miei test, calcolando 400000 primi con e senza percentuale, la differenza è stata più o meno di un secondo.
 - Unite le 2 funzioni per calcolare "fino al numero" per rendere più facili le modifiche future e per alleggerire il sw
 - Aggiunta scorciatoia per annullare il salvataggio
 - Piccoli miglioramenti grafici

1.7 10/8/2014
-------------
 - Tolto ncurses del tutto (maggiore velocità, proprio quello che serve in un software di questo tipo)
 - Mantenuti i miglioramenti delle versioni precedenti
 - Eliminate le parti inutili del codice in modo da occupare ancora meno spazio
 - Migliorato il salvataggio dei numeri: adesso in caso di errori nella scelta del percorso si può riprovare, non si chiude il software
 - Scorciatoia per indicare la directory attuale o superiore nella scelta del percorso
 - Piccoli miglioramenti al codice

1.6 2/8/2014
------------
 - Migliorato il codice
 - Tolto ncurses nella parte del calcolo (rallentava troppo)
 - Sostituite alcune variabili unsigned short int con variabili booleane nel tentativo di risparmiare il più possibile la ram (grazie all'Avvocato Giulio Folliero, Matteo Orlando e Alessandro Renzulli)

1.5 29/7/2014
-------------
 - Aggiunto logo multirisoluzione
 - Riscritto la gui con ncurses
 - Aggiunto un titolo in ogni schermata
 - Pause lampeggiante ^_^

1.4 29/7/2014
-------------
 - Aggiunto free() (l'avevo dimenticato)
 - Cambiato numero_test>=ULONG_MAX con numero_test==ULONG_MAX (grazie a Alessandro Renzulli)
 - Migliore gestione della memoria (grazie a Alessandro Renzulli)
 - Due metodi di calcolo per i primi fino al numero x: metodo veloce (usa come dimensione dell'array il numero massimo, consumando un po' di ram inutilmente) e metodo lento (fa un realloc per ogni primo trovato, usa solo la ram che gli serve realmente)
 - Scrittura dei numeri trovati in un file
 - Disabilitato printf per ogni primo trovato (velocizza moltissimo il calcolo), sostituito con la percentuale del calcolo (25%,50%,75%,100%)
 - Qualche miglioramento qua e la

1.3 28/7/2014
-------------
 - Migliorati gli "exit" (grazie a Alessandro Renzulli)
 - Due tipi di calcolo: fino al n° primo o fino al numero n
 - Array creato dinamicamente con malloc per non consumare memoria inutilmente
 - Prima di avviare il calcolo viene mostrato un avviso con scritto la ram necessaria
 - Variabili migliorate
 - Controllo sulla dimensione del numero rispetto alla variabile (grazie a Alessandro Renzulli)

1.2 10/7/2014
-------------
 - Prova a dividere solo per i primi minori della radice quadrata del numero da testare. Questo velocizza molto il software.

1.1 10/7/2014
-------------
 - Salta direttamente i numeri pari perchè i primi > 2 non possono essere pari.

1.0 7/7/2014
------------
 - Va ma è molto lento.


