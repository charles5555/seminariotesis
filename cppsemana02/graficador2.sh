#!/bin/bash

g++ generar_tabla2.cpp -o tabla2 &&\
	./tabla -20 20 100 &&\
	gnuplot plot2.gpl 
exit
