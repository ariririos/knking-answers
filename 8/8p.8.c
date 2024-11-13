#include <stdio.h>
#define N 5

int main() {
    int grades_by_student[N][N] = {}; // rows (students) then columns (quizzes)
    int student_sums[N] = {0};
    int quiz_sums[N] = {0};
    int quiz_highs[N] = {0};
    int quiz_lows[N] = {100, 100, 100, 100, 100};

    for (int i = 0; i < N; i++) {
        printf("Enter %d grades for student %d: ", N, i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &grades_by_student[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int grade = grades_by_student[i][j];
            student_sums[i] += grade;
            quiz_sums[j] += grade;
            if (grade < quiz_lows[j]) {
                quiz_lows[j] = grade;
            }
            else if (grade > quiz_highs[j]) {
                quiz_highs[j] = grade;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("Student %d total score: %d; average score: %d\n", i + 1, student_sums[i], (int) (student_sums[i] / (float) N));
    }

    for (int j = 0; j < 5; j++) {
        printf("Quiz %d average: %d; high: %d; low: %d\n", j + 1, (int) (quiz_sums[j] / (float) N), quiz_highs[j], quiz_lows[j]);
    }

    return 0;
}