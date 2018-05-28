CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g $(shell root-config --cflags)
LDFLAGS=-g $(shell root-config --ldflags)
LDLIBS=$(shell root-config --libs)

SRCS=main.cc
OBJS=$(subst .cc,.o,$(SRCS))

all: console

console: $(OBJS)
	$(CXX) $(LDFLAGS) -o console $(OBJS) $(LDLIBS) 

console.o: console.cc

support.o: support.hh

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) console


