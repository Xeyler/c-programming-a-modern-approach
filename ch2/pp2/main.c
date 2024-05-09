#include <stdio.h>

int main(void) {
    float radius = 10;
    float volume = 4.0f / 3.0f * 3.14f * radius * radius * radius;
    printf("%f\n", volume);
    return 0;
}