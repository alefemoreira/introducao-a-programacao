#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MINIMUM_SALARY 1045.00
#define LENGTH 100

int main(int argc, char const *argv[]) { 
  char name_employee[LENGTH];
  float hours_worked, extra_hours, gross_salary, extra_salary, salary;

  setlocale(LC_ALL, "Portuguese");
  printf("Digite o nome do funcionário: ");
  scanf("%s", &name_employee);

  printf("Digite o numero de horas trabalhadas (Horas mensais): ");
  scanf("%f", &hours_worked);

  gross_salary = (MINIMUM_SALARY / 8) * hours_worked;

  printf("Digite o numero de horas extras trabalhadas (Horas mensais): ");
  scanf("%f", &extra_hours);

  extra_salary = (MINIMUM_SALARY / 4) * extra_hours;
  salary = gross_salary + extra_salary;

  printf("O salário bruto de %s é: %.2f\n", name_employee, gross_salary);
  printf("O salário por horas extras de %s é: %.2f\n", name_employee, extra_salary);
  printf("O salário total de %s é: %.2f\n", name_employee, salary);

  return 0;
}
