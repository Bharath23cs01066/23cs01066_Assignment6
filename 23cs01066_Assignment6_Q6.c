#include <stdio.h>
void calculateAverage(int cities, int temperatures[cities][7]) {
    for (int i = 0; i < cities; i++) {
        int sum = 0;
        for (int j = 0; j < 7; j++)
            sum += temperatures[i][j];
        float average = (float)sum / 7;
        printf("Average temperature for city %d: %.2f\n", i + 1, average);
    }
}

int main() {
    int cities;

    printf("Enter number of cities: ");
    scanf("%d", &cities);

    int temperatures[cities][7];

    printf("Enter temperatures for each city for a week:\n");
    for (int i = 0; i < cities; i++) {
        printf("City %d:\n", i + 1);
        for (int j = 0; j < 7; j++) {
            printf("Day %d: ", j + 1);
            scanf("%d", &temperatures[i][j]);
        }
    }

    calculateAverage(cities, temperatures);

    return 0;
}