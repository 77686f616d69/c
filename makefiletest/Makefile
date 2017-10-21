CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = *.c
HDR = *.h
TARGET = a.out

all: $(TARGET)
# 'make' ou 'make all' revient au meme, make prend automatiquement le premier argument

$(TARGET): $(SRC) $(HDR)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
# $(TARGET) crée le a.out depuis les .c et .h

output: $(SRC) $(HDR)
	$(CC) $(CFLAGS) -c $(OBJ) $(SRC)
# 'make output' crée le .o

clean:
	rm -f $(TARGET) *.o
# 'make clean' supprime les .o et le a.out
