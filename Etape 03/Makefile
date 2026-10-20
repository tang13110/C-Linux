#premier fichier Makefile
#le DEBUG ne fonctionne pas
#faire le CLEAR
WAY=./Classes/
OBJ=$(WAY)/Time.o $(WAY)/Event.o $(WAY)Timing.o

Test3: Test3.cpp Event.o Time.o Timing.o
	g++ Test3.cpp $(WAY)Event.o $(WAY)Time.o $(WAY)Timing.o -I ./Classes -o Test3 

Event.o: $(WAY)Event.cpp $(WAY)Event.h
	g++ $(WAY)Event.cpp -c -o $(WAY)Event.o -I ./Classes

Time.o: $(WAY)Time.cpp $(WAY)Time.h
	g++ $(WAY)Time.cpp -c -o $(WAY)Time.o

Timing.o: $(WAY)Timing.cpp $(WAY)Timing.h
	g++ $(WAY)Timing.cpp -c -o $(WAY)Timing.o

clean:
	rm -f $(OBJ) core

clobber: clean
	rm -f Test3
