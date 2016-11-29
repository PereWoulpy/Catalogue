#MakeFile du TP sur le catalogue
COMP = g++
EXEC = Test 
CFLAGS = -c -Wall7
LDFLAGS =
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
HEADS = $(wildcard *.h)

all : $(EXEC)

#Edition des liens pour crer l'exécutable
$(EXEC) : $(OBJ)
	$(COMP) -o $@ $^ $(LDFLAGS)

#Liste des dépendance suplémentaire du aux héritages et autres
TrajetSimple.o : Trajet.h TrajetSimple.h
TrajetCompose.o : Trajet.h Element.h TrajetCompose.h
Catalogue.o : Trajet.h Element.h

#Ajoute les dépendances sur tous les headers
Test.o : $(HEADS)

#Compilation
%.o : %.cpp %.h
	$(COMP) -o $@ -c $<

#Supprime les binaires translatables intermédiares
clean:
	rm -rf *.o
