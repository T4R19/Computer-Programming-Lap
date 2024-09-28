#include <stdio.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;


char* calculateGrade(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}//end char


float calculateAverage(S student) {
    return (student.ScoreSub1 + student.ScoreSub2 + student.ScoreSub3 + student.ScoreSub4 + student.ScoreSub5) / 5.0;
}//end float

int main() {
    S students[3];

    
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].Name);
        printf("ID: ");
        scanf("%s", students[i].ID);
        printf("Scores in Subject 1: ");
        scanf("%f", &students[i].ScoreSub1);
        printf("Scores in Subject 2: ");
        scanf("%f", &students[i].ScoreSub2);
        printf("Scores in Subject 3: ");
        scanf("%f", &students[i].ScoreSub3);
        printf("Scores in Subject 4: ");
        scanf("%f", &students[i].ScoreSub4);
        printf("Scores in Subject 5: ");
        scanf("%f", &students[i].ScoreSub5);
    }//end for

    
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("ID: %s\n", students[i].ID);
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n", students[i].ScoreSub1, students[i].ScoreSub2, students[i].ScoreSub3, students[i].ScoreSub4, students[i].ScoreSub5);
        
        printf("Grades: ");
        printf("%s ", calculateGrade(students[i].ScoreSub1));
        printf("%s ", calculateGrade(students[i].ScoreSub2));
        printf("%s ", calculateGrade(students[i].ScoreSub3));
        printf("%s ", calculateGrade(students[i].ScoreSub4));
        printf("%s\n", calculateGrade(students[i].ScoreSub5));
        
        float averageScore = calculateAverage(students[i]);
        printf("Average Scores: %.1f\n", averageScore);
    }//end for

    return 0;
}//end main function