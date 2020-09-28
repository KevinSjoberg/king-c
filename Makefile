CC = gcc
CFLAGS = -Wall -W -pedantic -ansi -std=c99

SOURCES = $(wildcard */*.c)
OBJECTS = $(join $(dir $(SOURCES:.c=)),$(addprefix build/,$(notdir $(SOURCES:.c=))))

.PHONY: all
all: $(OBJECTS)

%: ../%.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: format
format:
	clang-format -i $(SOURCES)