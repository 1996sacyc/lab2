main6: BMI.o main.o
	g++ -o BMI main.o BMI.o

timer6.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

main6.o: main.cpp BMI.h
	g++ -c main.cpp

clean:
	rm BMI *.o

