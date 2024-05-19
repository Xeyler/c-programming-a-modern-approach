#include <stdio.h>

int main(void) {
    int phone_area;
    int phone_prefix;
    int phone_suffix;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &phone_area, &phone_prefix, &phone_suffix);
    printf("You entered %.3d.%.3d.%.4d\n",
           phone_area,
           phone_prefix,
           phone_suffix);
    return 0;
}