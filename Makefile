SQL = -l sqlite3
DEBUG = -g
FLAGS = -Wall
PROG1 = main
PROG2 = 
PROG3 = 
PROGS = $(PROG1)

all: $(PROGS)

$(PROG1): $(PROG1).o
	g++ -o $@ $^ $(SQL)

$(PROG1).o: $(PROG1).c
	g++ $(DEBUG) $(SQL) $(FLAGS) -c $<

clean cls:
	rm -f $(PROGS) *.o *~ \#*