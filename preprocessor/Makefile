TARGET=mk
OBJS:=makex.o

$(TARGET):$(OBJS)
	gcc -o $(TARGET) $(OBJS)
makex.o:makex.c
	gcc -c makex.c

xyz:
	rm makex.o
