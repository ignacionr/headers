main: main.o tutor.o student.o
	$(CXX) main.o tutor.o student.o -o main
