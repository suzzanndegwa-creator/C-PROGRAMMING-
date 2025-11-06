/*
Name:Ndegwa Susan Mumbi
Reg No:CT101/G/26435/25
Description:A program on student records
*/

#include <stdio.h>
#include <stdlib.h>

//A structure to hold student information
struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    // Create the binary file and store records
    file = fopen("results.dat", "wb");
    if (file == NULL) {
        perror("Error creating file");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // clear newline after scanf

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        fgets(s.name, sizeof(s.name), stdin);

        // Remove newline from fgets
        int j = 0; s.name[j] != '\0'; j++; {
            if (s.name[j] == '\n') {
                s.name[j] = '\0';
                break;
            }
        }

        printf("Enter registration number: ");
        scanf("%d", &s.regNo);

        printf("Enter total marks: ");
        scanf("%f", &s.marks);
        getchar();

        fwrite(&s, sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("\nStudent records successfully written to results.dat\n\n");

    //all student records
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    //  Display the name and marks of each student
    printf("Name\t\tMarks\n");
    printf("--------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("%-15s %.2f\n", s.name, s.marks);
    }

    fclose(file);
    return 0;
}
