# Nombre del compilador
CC = g++

# Nombre del archivo de salida
TARGET = programa

build:
	$(CC) main.cpp -o $(TARGET)

run:
	./$(TARGET)

clean:
	rm $(TARGET)
