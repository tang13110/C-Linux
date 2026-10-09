#premier fichier Makefile
#le DEBUG ne fonctionne pas
WAY=./Classes/

Test3: Test3.cpp Event.o Time.o Timing.o
	g++ Test3.cpp $(WAY)Event.o $(WAY)Time.o $(WAY)Timing.o -I ./Classes -o Test3 

Event.o: $(WAY)Event.cpp $(WAY)Event.h
	g++ $(WAY)Event.cpp -c -o $(WAY)Event.o -I ./Classes

Time.o: $(WAY)Time.cpp $(WAY)Time.h
	g++ $(WAY)Time.cpp -c -o $(WAY)Time.o

Timing.o: $(WAY)Timing.cpp $(WAY)Timing.h
	g++ $(WAY)Timing.cpp -c -o $(WAY)Timing.o 