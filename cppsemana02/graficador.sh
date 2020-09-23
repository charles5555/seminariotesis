#!/bin/bash

g++ generar_tabla.cpp -o tabla &&\
	./tabla &&\
	gnuplot plot2.gpl 
exit
