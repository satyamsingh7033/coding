#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

#define PASSWORD "Riya@123"

// Function to check password
int checkPassword(const char *action) {
    char input[50];
    printf("\n🔐 Enter password to %s Student: ", action);
    scanf("%s", input);
    if (strcmp(input, PASSWORD) == 0) {
        return 1;
    } else {
        printf("\n❌ Incorrect password! Access denied.\n");
        return 0;
    }
}

// Function to insert student record
void insertStudent() {
    struct Student s;
    FILE *fp;

    if (!checkPassword("Insert")) return;

    printf("\nEnter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);  // to accept full name with spaces
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fp = fopen("student.dat", "ab");
    fwrite(&s, sizeof(struct Student), 1, fp);
    fclose(fp);

    printf("\n✅ Student Inserted Successfully!\n");
}

// Function to print menu box
void printMenu() {
    printf("╔════════════════════════════════════════════════╗\n");
    printf("║         📚 STUDENT MANAGEMENT SYSTEM          ║\n");
    printf("╠════════════════════════════════════════════════╣\n");
    printf("║ 1. Insert Student Record                       ║\n");
    printf("║ 2. Display Student Record                      ║\n");
    printf("║ 3. Search Student Record                       ║\n");
    printf("║ 4. Delete Student Record                       ║\n");
    printf("║ 5. Update Student Record                       ║\n");
    printf("║ 6. Sort Student Record                         ║\n");
    printf("║ 7. Exit                                        ║\n");
    printf("╚════════════════════════════════════════════════╝\n");
}

int main() {
    int choice;

    while (1) {
        printMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            insertStudent();
            break;
        case 7:
            printf("\n👋 Exiting Program. Goodbye!\n");
            exit(0);
        default:
            printf("\n⚠ Invalid choice! Try again.\n");
        }

        printf("\n----------------------------------------\n\n");
    }
    return 0;
}