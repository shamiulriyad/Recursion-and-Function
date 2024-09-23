#include<stdio.h>

void inputData(int goals[], int mins[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the goals scored in match %d: ", i + 1);
        scanf("%d", &goals[i]);
        printf("Enter the play minutes in match %d: ", i + 1);
        scanf("%d", &mins[i]);
    }
}

int countofhattricks(int goals[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (goals[i] >= 3) {  
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter the number of matches played: ");
    scanf("%d", &n);

    int goals[n], mins[n];

    inputData(goals, mins, n);

    int hattricks = countofhattricks(goals, n);

    printf("Number of hattricks: %d\n", hattricks);

    return 0;
}
