PROGRAM = trinaryTree
CC = gcc
CFLAGS = -g

$(PROGRAM):		$(PROGRAM).o testTrinaryTree.o
				$(CC) $(CFLAGS) $(PROGRAM).o testTrinaryTree.o -o $(PROGRAM)

$(PROGRAM).o:	$(PROGRAM).h

clean:
				rm -f *.o $(PROGRAM)

lint:
				lint testTrinaryTree.c $(PROGRAM).c
