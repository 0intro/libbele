AR?=ar
AS?=as
RANLIB?=ranlib
CC?=gcc
LD?=gcc
CFLAGS?=-Wall -Wextra -O3
LDFLAGS?=

LIB=libbele.a

OFILES=\
	beget.o\
	leget.o\

HFILES=\
	bele.h\

all: $(LIB)
$(LIB): $(OFILES) $(HFILES)
	$(AR) r $(LIB) $(OFILES)
	$(RANLIB) $(LIB)

%.o: %.c
	$(CC) -c $(CFLAGS) $*.c

clean:
	rm -f *.o

nuke: clean
	rm -f $(LIB)
