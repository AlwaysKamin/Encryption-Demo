#Compiler choice
CC = g++

#Executable name
EXE = cipherTest

#included Objects
OBJS = main.o Ceaser.o RailFence.o MonoAlpha.o RowTrans.o Vigenere.o

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(OBJS) -o $(EXE)

#compiling the main object
main.o: main.cpp
	$(CC) -c main.cpp #include/define.h

#compiling the ceaser object
Ceaser.o: Ceaser.cpp
	$(CC) -c Ceaser.cpp #include/Ceaser.h

#compiling the RailFence object
RailFence.o: RailFence.cpp
	$(CC) -c RailFence.cpp #include/RailFence.h

#compiling the MonoAlpha object
MonoAlpha.o: MonoAlpha.cpp
	$(CC) -c MonoAlpha.cpp

#compiling the RowTrans object
RowTrans.o: RowTrans.cpp
	$(CC) -c RowTrans.cpp

#compiling the Vigenere object
Vigenere.o: Vigenere.cpp
	$(CC) -c Vigenere.cpp

#cleanup for later
clean:
		rm *.o
		rm $(EXE)
