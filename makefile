SOURCES=$(wildcard src/)
SOURCES1=$(wildcard src/factory/)
SOURCES2=$(wildcard src/util/)



all: FactoryMethod2
	

FactoryMethod2: Main.o ShapeFactory.o  Shape.o  Rectangle.o Square.o Triangle.o 
	g++ Main.o ShapeFactory.o Shape.o  Rectangle.o Square.o Triangle.o  -o FactoryMethod2

Main.o:$(SOURCES)/Main.cpp 
	g++ -c $(SOURCES)Main.cpp

ShapeFactory.o:$(SOURCES1)/ShapeFactory.cpp $(SOURCES1)/ShapeFactory.h    
	g++ -c $(SOURCES1)/ShapeFactory.cpp

Shape.o: $(SOURCES1)/Shape.cpp $(SOURCES1)/Shape.h
	g++ -c $(SOURCES1)/Shape.cpp
	
Rectangle.o:$(SOURCES2)/Rectangle.cpp $(SOURCES2)/Rectangle.h
	g++ -c $(SOURCES2)/Rectangle.cpp
	
Square.o:$(SOURCES2)/Square.cpp  $(SOURCES2)/Square.h
	g++ -c $(SOURCES2)/Square.cpp

Triangle.o:$(SOURCES2)/Triangle.cpp $(SOURCES2)/Triangle.h
	g++ -c $(SOURCES2)/Triangle.cpp
clean:
	rm *o FactoryMethod2


