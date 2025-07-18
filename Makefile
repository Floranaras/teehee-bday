# Makefile
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = teehee-bday
SOURCE = birthday.c

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

install: $(TARGET)
	install -Dm755 $(TARGET) /usr/local/bin/$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: install clean
