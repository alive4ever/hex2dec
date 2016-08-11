CFLAGS = -g -Wall
BIN = hex2dec dec2hex

all: bin

bin: $(BIN)

hex2dec: hex2dec.c
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

dec2hex: dec2hex.c
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

clean:
	$(RM) $(BIN)
