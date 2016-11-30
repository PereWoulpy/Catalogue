#MakeFile du TP sur le catalogue
COMP=g++
EXEC_DIR=Exec
EXEC=LTIF
OBJEX=$(EXEC_DIR)/LTIF.o
CFLAGS=-c -Wall7
LDFLAGS=
SRC_DIR=Source
SRC=$(wildcard $(SRC_DIR)/*.cpp)
OBJ=$(SRC:.cpp=.o)
HEADS=$(wildcard $(SRC_DIR)/*.h)

all: $(EXEC)

#Edition des liens pour crer l'exécutable
$(EXEC): $(OBJ) $(OBJEX)
	$(COMP) -o $@ $^ $(LDFLAGS)

#Liste des dépendance suplémentaire du aux héritages et autres
Source/TrajetSimple.o: Source/Trajet.h Source/TrajetSimple.h
Source/TrajetCompose.o: Source/Trajet.h Source/Element.h Source/TrajetCompose.h
Source/Catalogue.o: Source/Trajet.h Source/Element.h
Source/Element.o:  Source/Trajet.h

#Ajoute les dépendances sur tous les headers
$(OBJEX): $(HEADS)

#Compilation
%.o: %.cpp %.h
	$(COMP) -o $@ -c $<

#Supprime les binaires translatables intermédiares
clean:
	rm -rf $(SRC_DIR)/*.o
	rm -rf $(EXEC_DIR)/*.o
