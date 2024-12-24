# Usefull memory allocation functions for C
---

##### Disclaimer
> This implementation is recreational and except a few functions, most of them shouldn't be used in
> production

#### Every function is correctly described in their respective .h file
## Memory Management
---
- [x] Implemented:
    - [x] reCalloc

- [ ] To implement:
    - [ ] malloc: Allocates a block of uninitialized memory.
    - [ ] calloc: Allocates and zero-initializes a block of memory.
    - [ ] realloc: Resizes a previously allocated memory block.
    - [ ] free: Frees allocated memory.

## String conversion
---
- [ ] To implement:
    - [ ] atoi: Converts a string to an int.
    - [ ] atol: Converts a string to a long.
    - [ ] atoll: Converts a string to a long long.
    - [ ] strtol: Converts a string to a long with base control.
    - [ ] strtoll: Converts a string to a long long with base control.
    - [ ] strtoul: Converts a string to an unsigned long with base control.
    - [ ] strtoull: Converts a string to an unsigned long long with base control.
    - [ ] strtof: Converts a string to a float.
    - [ ] strtod: Converts a string to a double.
    - [ ] strtold: Converts a string to a long double.

## Random number generator
---
- [x] Implemented:
    - [x] randNormalize
    - [x] randInt
    - [x] randReal
    - [x] randomize
    - [x] srand: Seeds the pseudo-random number generator.
- [ ] To implement:
    - [ ] rand: Generates a pseudo-random number.

## Process control
---
- [ ]  To implement:
    - [ ] abort: Terminates the program immediately without cleanup.
    - [ ] exit: Terminates the program, cleaning up resources.
    - [ ] atexit: Registers a function to execute at program termination.
    - [ ] _Exit: Terminates the program immediately without cleanup.

## Integer aritmetic
---
- [ ] To implement:
    - [ ] abs: Returns the absolute value of an integer.
    - [ ] labs: Returns the absolute value of a long.
    - [ ] llabs: Returns the absolute value of a long long.
    - [ ] div: Performs integer division, returning quotient and remainder.
    - [ ] ldiv: Same as div, but for long.
    - [ ] lldiv: Same as div, but for long long.

## Multibyte character functions
---
- [ ] To implement:
    - [ ] mblen: Returns the length of a multibyte character.
    - [ ] mbtowc: Converts a multibyte character to a wide character.
    - [ ] wctomb: Converts a wide character to a multibyte character.
    - [ ] mbstowcs: Converts a multibyte string to a wide-character string.
    - [ ] wcstombs: Converts a wide-character string to a multibyte string.

