/*Q13. [Pointer Arithmetic – Byte-level]
Write a C program that: (a) declares an int variable x = 0x12345678, (b) creates a char pointer
pointing to x, (c) prints each byte of x individually using the char pointer, (d) determines if the system
is little-endian or big-endian from the output.
■ Hint: char *p = (char*)&x; then p[0], p[1], p[2], p[3].
■ Tests: byte-level pointer access, type casting, endianness.*/