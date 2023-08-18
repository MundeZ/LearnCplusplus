SRC = main.cpp
TARGET = privet
LIB = MyLib
PREFIX = /home/roman/linux

privet: $(SRC) lib
	g++ -o $(TARGET) $(SRC) -L. -l$(LIB)
	
lib:	$(LIB).cpp $(LIB).hpp
	g++ -o $(LIB).o $(LIB).cpp -c
	ar rc lib$(LIB).a $(LIB).o

clean:
	rm -rf *.o *.a
	
install:
	install $(TARGET) $(PREFIX)

uninstall:
	rm -rf $(PREFIX)/$(TARGET)
