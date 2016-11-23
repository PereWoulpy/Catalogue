#MakeFile du TP sur le catalogue
COMP = g++
EXEC = Test 
CFLAGS = -c -Wall

all : $(EXEC)

$(EXEC) : Test.o TrajetSimple.o Trajet.o Element.o TrajetCompose.o Catalogue.o
	$(COMP) -o $(EXEC) $^

TrajetSimple.o : Trajet.h
TrajetCompose.o : Trajet.h Element.h
Catalogue.o : Trajet.h Element.h
%.o : %.h
Test.o : TrajetSimple.h Trajet.h Element.h TrajetCompose.h Catalogue.h

%.o : %.cpp
	$(COMP) -c $<
