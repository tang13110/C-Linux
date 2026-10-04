#premier fichier Makefile
#le -I permet d'éviter de devoir faire un include avec le répértoire entier.
#le DEBUG ne fonctionne pas ?
WAY=./Classes/

Test2: Test2.cpp Event.o Time.o Timing.o
	g++ Test2.cpp Event.o Time.o -I Classes -o Test2 

Event.o: $(WAY)Event.cpp $(WAY)Event.h
	g++ $(WAY)Event.cpp -c 

Time.o: $(WAY)Time.cpp $(WAY)Time.h
	g++ $(WAY)Time.cpp -c 

Timing.o: $(WAY)Timing.cpp $(WAY)Timing.h
	g++ $(WAY)Timing.cpp -c -I Classes