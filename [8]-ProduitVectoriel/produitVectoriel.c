#include <stdio.h>

int main() {
    int u[3], v[3], w[3];
    int i;

    printf("Enter the value of the vector u:");
    for (i = 0; i < 3; i++) {
        scanf("%d", &u[i]);
    }

    printf("Enter the value of the vector v:");
    for (i = 0; i < 3; i++) {
        scanf("%d", &v[i]);
    }

    w[0] = u[1]*v[2] - u[2]*v[1];
    w[1] = u[2]*v[0] - u[0]*v[2];
    w[2] = u[0]*v[1] - u[1]*v[0];

    printf("The vectorial product of u × v is: (%d, %d, %d)\n", w[0], w[1], w[2]);

    return 0;
}