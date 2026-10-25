#le DEBUG ne fonctionne pas
#Trier les classes (demander prof). 

WAY=./Classes/
OBJ=$(WAY)Time.o $(WAY)Event.o $(WAY)Timing.o $(WAY)Professor.o $(WAY)Group.o $(WAY)Schedulable.o $(WAY)Classroom.o

Test4: Test4.cpp Event.o Time.o Timing.o Schedulable.o Professor.o Group.o Classroom.o
	g++ Test4.cpp $(OBJ) -I ./Classes -o Test4 

Event.o: $(WAY)Event.cpp $(WAY)Event.h
	g++ $(WAY)Event.cpp -c -o $(WAY)Event.o -I ./Classes

Time.o: $(WAY)Time.cpp $(WAY)Time.h
	g++ $(WAY)Time.cpp -c -o $(WAY)Time.o

Timing.o: $(WAY)Timing.cpp $(WAY)Timing.h
	g++ $(WAY)Timing.cpp -c -o $(WAY)Timing.o

Schedulable.o: $(WAY)Schedulable.cpp $(WAY)Schedulable.h
	g++ $(WAY)Schedulable.cpp -c -o $(WAY)Schedulable.o 

Professor.o: $(WAY)Professor.cpp $(WAY)Professor.h
	g++ $(WAY)Professor.cpp -c -o $(WAY)Professor.o

Group.o: $(WAY)Group.cpp $(WAY)Group.h
	g++ $(WAY)Group.cpp -c -o $(WAY)Group.o

Classroom.o: $(WAY)Classroom.cpp $(WAY)Classroom.h
	g++ $(WAY)Classroom.cpp -c -o $(WAY)Classroom.o

clean:
	rm -f $(OBJ) core

clobber: clean
	rm -f Test4
