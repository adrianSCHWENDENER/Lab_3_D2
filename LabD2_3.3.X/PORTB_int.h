/* 
 * File: PORTB_int.h
 * Author: schwe
 * Comments: Uso para interrupciones del PORTB y sus pines de entrada
 * Revision history: 13/07/2023
 * PENDIENTE:
 */

#ifndef PORTB_int_H
#define	PORTB_int_H

#include <pic16f887.h>
#include <xc.h>

void setup_PORTB(char pin);
int antiRebote(char pin);

#endif	/* PORTB_int_H */

