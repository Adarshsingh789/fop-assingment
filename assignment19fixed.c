#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char gender[10];
    char designation[50];
    int age;
    char doj[20];
    float salary;
};

int main() {
    int n, i;
    int male = 0, female = 0, highSalary = 0, asstManager = 0;

    printf("Enter number of employees (max 100): ");
    scanf("%d", &n);

    if(n > 100) {
        printf("Limit exceeded! Max allowed is 100.\n");
        return 0;
    }

    struct Employee e[100];

    for(i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", e[i].name);

        printf("Gender (male/female): ");
        scanf(" %9s", e[i].gender);

        printf("Designation: ");
        scanf(" %49[^\n]", e[i].designation);

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Date of Joining (DD-MM-YYYY): ");
        scanf(" %19s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    for(i = 0; i < n; i++) {
        if(e[i].gender[0] == 'm' || e[i].gender[0] == 'M')
            male++;
        else
            female++;

        if(e[i].salary > 10000)
            highSalary++;

        if(strcmp(e[i].designation, "AsstManager") == 0)
            asstManager++;
    }

    printf("\n========== RESULTS ==========\n");
    printf("Total employees          = %d\n", n);
    printf("Male employees           = %d\n", male);
    printf("Female employees         = %d\n", female);
    printf("Salary > 10000           = %d\n", highSalary);
    printf("Asst Managers            = %d\n", asstManager);
    printf("==============================\n");

    return 0;
}
