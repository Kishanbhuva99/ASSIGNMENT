//Write a C program to check whether a triangle can be formed with the given values for the angles.


#include <stdio.h>

int main() {
    int angle1, angle2, angle3, sum;

    // Input angles
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Calculate the sum of the angles
    sum = angle1 + angle2 + angle3;

    // Check if the sum is 180 and all angles are positive
    if (sum == 180 )
    {
        printf("The angles form a valid triangle.\n");
    } else {
        printf("The angles do not form a valid triangle.\n");
    }

    return 0;
}
