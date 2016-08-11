# HEX2DEC and DEC2HEX - Simple hex to dec converter

## Description

A simple program to convert hexadecimal number to decimal number and vice
versa.

## Compilation

You need a working C compiler and ''make'' program. Tested with GCC and clang
with GNU make.

```
make -k all
```

The resulting binary will be available in the same directory as the source code.

## Installation

You don't need to install the binary. If you need to ''install'' it, just copy
the binary to directory included in your ''PATH'', such as ''/usr/local/bin''.

### Example Installation

To install the binary into ''/usr/local/bin'', simply type these
commands with ''root'' privilege.

```
install -m 755 hex2dec /usr/local/bin/hex2dec
install -m 755 dec2hex /usr/local/bin/dec2hex
```

## LICENSE

**MIT (Expat)** style. Read [COPYING](./COPYING) for the literal text.
