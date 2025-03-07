/*
 * fnd_controller.h
 *
 *  Created on: Feb 25, 2025
 *      Author: Good
 */

#ifndef SRC_FND_CONTROLLER_H_
#define SRC_FND_CONTROLLER_H_

#include "main.h"

void Set_Up();

void send(unsigned char X);

void send_port(unsigned char X, unsigned char port);

void digit4(int n, int replay, uint8_t showZero);

void digit_temper_replay(int n, int replay);

void digit4_zero(int n);

void digit4showZero_replay(int n, int replay);

void digit4showZero_zero(int n);

void digit2(int n, int port, int replay);

void digit2_port(int n, int port);

#endif /* SRC_FND_CONTROLLER_H_ */
