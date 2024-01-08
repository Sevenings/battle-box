MAIN=teste3_main.cpp
PROJETO=Main


build:
	g++ -o $(PROJETO) $(MAIN) character.cpp ataques.cpp

run:
	./$(PROJETO)

debug:
	g++ -c $(PROJETO) $(MAIN) 


