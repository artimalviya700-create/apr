#include<stdio.h>

int main() { 
    typedef struct emp {
        char name[20];
        int emp_no;   
        float salary;
    } record;
    
    record rec[10];
    int n;

    printf("Enter no. of records: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d (Name, ID, Salary): ", i + 1);
        scanf("%s %d %f", rec[i].name, &rec[i].emp_no, &rec[i].salary);
    }

    printf("\n--- Employee Details ---\n");
    for(int i = 0; i < n; i++) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", rec[i].name, rec[i].emp_no, rec[i].salary);
    }

    return 0;
}
