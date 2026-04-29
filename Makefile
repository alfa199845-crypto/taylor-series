# 1. Variables: Aquí defines los nombres una sola vez
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = programa
SOURCES = main.cpp

# 2. Regla por defecto: Lo que pasa si solo escribes 'make'
all: build

# 3. Compilación: Transforma el código en un ejecutable
build:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

# 4. Ejecución: Corre el programa generado
run:
	./$(TARGET)

# 5. Limpieza: Borra el ejecutable para empezar de cero
clean:
	rm -f $(TARGET)
