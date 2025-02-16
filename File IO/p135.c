// C Program to Rename a file

#include <stdio.h>

int main() {
    char oldName[100], newName[100];

    printf("Enter current filename: ");
    scanf("%s", oldName);

    printf("Enter new filename: ");
    scanf("%s", newName);

    if (rename(oldName, newName) == 0)
        printf("File renamed successfully.\n");
    else
        printf("Error renaming file.\n");

    return 0;
}
