CXX = g++
CXXFLAGS = -std=c++14 -Wall -Werror -MMD
EXEC = main
OBJECTS = main.o flight.o passenger.o ticket.o subject.o classes/businessclass.o classes/economyclass.o classes/firstclass.o classes/premiumclass.o meals/baseburger.o meals/lettuce.o meals/protein.o meals/sauce.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

clean:
	rm ${DEPENDS} ${OBJECTS}
.PHONY: clean
