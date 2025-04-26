CXX = g++
CC  = gcc
cpp_src = $(shell find . -name "*.cpp")
c_src = $(shell find . -name "*.c")
cpp_objs = $(cpp_src:.cpp=.o)
c_objs =  $(c_src:.c=.o)
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
	rm -f $(objs) app
