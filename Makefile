lab_2: lab_2.o bmi.o
	g++ -o bmi lab_2.o bmi.o
bmi.o: bmi.cpp bmi.h
	g++ -c bmi.cpp
lab_2.o: lab_2.cpp bmi.h
	g++ -c lab_2.cpp
clean:
	rm bmi*.o