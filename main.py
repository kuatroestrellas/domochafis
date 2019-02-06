#!/usr/bin/env python
# -*- coding: utf-8 -*-
import serial

ser=serial.Serial('/dev/ttyACM0', 9600)

print '''
Domochafis 1.0.0 (home, Ene 28 2019 14:49:50)
[compiled on Python 2.7.15]
Type help, license, credits or sen for more information'''
while True:
	leer=raw_input('>> ')
	if leer == 's':
		print('bye')
		break
	ser.write(leer)
ser.close()