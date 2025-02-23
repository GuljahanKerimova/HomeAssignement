
# Makefile simple

# Cible par défaut
all: main

# Règle pour créer main.out
main: main.o hello.o
	g++ main.o hello.o -o main

# Règle pour compiler main.cpp
main.o: main.cpp
	g++ -c main.cpp

# Règle pour compiler hello.cpp
hello.o: hello.cpp
	g++ -c hello.cpp

# Cible pour nettoyer les fichiers générés
clean:
	rm -f *.o main
