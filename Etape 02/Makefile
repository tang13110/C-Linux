#premier fichier Makefile
WAY=./Classes/

Test2: Test2.cpp Event.o Time.o
	g++ Test2.cpp Event.o Time.o -I Classes -o Test2 

Event.o: $(WAY)Event.cpp $(WAY)Event.h
	g++ $(WAY)Event.cpp -c

Time.o: $(WAY)Time.cpp $(WAY)Time.h
	g++ $(WAY)Time.cpp -c