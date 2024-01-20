MAIN=main.cpp
PROJETO=Main
INCLUDE_DIR=headers
SOURCES=src/character.cpp src/ataques.cpp


build:
	g++ -o $(PROJETO) $(MAIN) -I$(INCLUDE_DIR) $(SOURCES)

run:
	./$(PROJETO)

debug:
	g++ -c $(PROJETO) $(MAIN) 

	
