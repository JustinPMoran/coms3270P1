#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// If the file has less than 4 lines, we know itll be invalid.

// Amount of lines between two lines of solid integers must equal to the first line's integer.

// |Longitude| needs to be <= 90

// |Latitude| needs to be <= 180

// No empty lines allowed.

// Every line after second integer-only line needs to have same amount of entries as the number in integer-only line.

// must follow format; 2 entries can't be the same.

// entries must have node a, node b, distance, longitude, latitude, name



int validate(void *data) {
    if (data == NULL) {
        fprintf(stderr, "Error: NULL pointer provided.\n");
        return -1;
    }
    return 0;
}