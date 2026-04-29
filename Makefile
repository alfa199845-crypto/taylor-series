CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = programa
SOURCES = main.cpp taylor.cpp

build:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)
