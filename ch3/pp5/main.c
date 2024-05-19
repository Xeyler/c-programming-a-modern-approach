#include <stdio.h>

int main(void) {
    int i[16];

    printf("Enter the i from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
          &i[0],
          &i[1],
          &i[2],
          &i[3],
          &i[4],
          &i[5],
          &i[6],
          &i[7],
          &i[8],
          &i[9],
          &i[10],
          &i[11],
          &i[12],
          &i[13],
          &i[14],
          &i[15]);

    printf("%2d %2d %2d %2d\n", i[0], i[1], i[2], i[3]);
    printf("%2d %2d %2d %2d\n", i[4], i[5], i[6], i[7]);
    printf("%2d %2d %2d %2d\n", i[8], i[9], i[10], i[11]);
    printf("%2d %2d %2d %2d\n", i[12], i[13], i[14], i[15]);
    printf("Row sums: %d %d %d %d\n",
           i[0] + i[1] + i[2] + i[3],
           i[4] + i[5] + i[6] + i[7],
           i[8] + i[9] + i[10] + i[11],
           i[12] + i[13] + i[14] + i[15]);
    printf("Column sums: %d %d %d %d\n",
           i[0] + i[4] + i[8] + i[12],
           i[1] + i[5] + i[9] + i[13],
           i[2] + i[6] + i[10] + i[14],
           i[3] + i[7] + i[11] + i[15]);
    printf("Diagonal sums: %d %d\n",
           i[0] + i[5] + i[10] + i[15],
           i[3] + i[6] + i[9], + i[12]);
    return 0;
}