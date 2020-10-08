#!/bin/bash

g++ -std=c++11 -c simpledatagenerator.cpp -o simpledatagenerator.o &&\
		g++ -std=c++11 -c test.cpp -o test.o &&\
	g++ simpledatagenerator.o test.o -o makedata &&\
	./makedata -12.0 12.0 300 &&\
	gnuplot -e "set term png enhanced linewidth 2 fontscale 1.75; set 
		output 'plot3.png';plot 'database.dat' w l ls 1 title 'base', 'datainh.dat' w l ls 2 title 'inherited'"
