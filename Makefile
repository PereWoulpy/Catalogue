#MakeFile du TP sur le catalogue
COMP=g++
EXEC=LTIF
OBJEX=LTIF.o
CFLAGS=-c -Wall7
LDFLAGS=
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
HEADS=$(wildcard *.h)

all: $(EXEC)

#Edition des liens pour creer l'exécutable
$(EXEC): $(OBJ) $(OBJEX)
	$(COMP) -o $@ $^ $(LDFLAGS)

#Liste des dependances suplementaire dues aux heritages et autres
TrajetSimple.o: Trajet.h TrajetSimple.h
TrajetCompose.o: Trajet.h Element.h TrajetCompose.h
Catalogue.o: Trajet.h Element.h
Element.o:  Trajet.h

#Ajoute les dependances sur tous les headers
$(OBJEX): $(HEADS)

#Compilation
%.o: %.cpp %.h
	$(COMP) -o $@ -c $<

#Supprime les binaires translatables
clean:
	rm -rf *.o
