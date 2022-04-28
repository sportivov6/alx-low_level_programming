Tasks
0.  C function that converts a binary number to an unsigned int.
Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL

1.  C function that prints the binary representation of a number.
Prototype: void print_binary(unsigned long int n);

2. 10

C function that returns the value of a bit at a given index.
Prototype: int get_bit(unsigned long int n, unsigned int index);
where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured.

3. 11

C function that sets the value of a bit at a given index to 1.
Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

4. 100

C function that sets the value of a bit at a given index to 0.
Prototype: int clear_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred.

5. 101

C function that returns the number of bits needed to be flipped to get from one number to another.
Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
You are not allowed to use the % or / operators

6. Endianness

C function that checks the endianness.
Prototype: int get_endianness(void);
If big-endian - returns 0.
If little-endian - returns 1.
7. Crackme3

File containing the password for the crackme3 executable.
