CXX = g++
CC  = gcc
cpp_src = $(wildcard *.cpp ./src/*.cpp)
c_src = $(wildcard *.c ./src/*.c)
cpp_objs = $(patsubst %.cpp, %.o, $(cpp_src))
c_objs =  $(patsubst %.c, %.o, $(c_src))
objs = $(cpp_objs) $(c_objs)
all: app
app:$(objs)
	$(CXX) $(objs) -o $@

$(c_objs): %.o: %.c
	$(CC) -c $^ -o $@

$(cpp_objs): %.o: %.cpp
	$(CXX) -c $^ -o $@

.PHONY : clean
clean:
	rm -f *.o app ./src/*.o
