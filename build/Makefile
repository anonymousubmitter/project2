SRC=*.cpp

all:
	g++ -std=c++11 -fPIC -c ../*.cpp
	g++ -shared -Wl,-soname,libnbtree.so.1 -o libnbtree.so.1.0   *.o
	ln -sf libnbtree.so.1.0 libnbtree.so
	ln -sf libnbtree.so.1.0 libnbtree.so.1
