#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_CHARACTERS 60
#define MAX_STUDENT_SOFTWARE_ENGINEERING 60
#define MAX_STUDENT_MEDICINE 50
#define MAX_STUDENT_FINANCES 90

typedef struct {
   int UID;
   char Names[ MAX_CHARACTERS ];
   char Lastnames [ MAX_CHARACTERS ];
   unsigned int Age;
   char Gender;
   char Career[ MAX_CHARACTERS ];
}Student;

// LIFO => Last In, First Out
typedef struct {
   Student students[ MAX_STUDENT_SOFTWARE_ENGINEERING ];
   int top;
}StackToStudentsOfSoftwareEngineering;

typedef struct {
   Student students [ MAX_STUDENT_MEDICINE ];
   int top;
}StackToStudentsOfMedicine;

typedef struct {
   Student students [ MAX_STUDENT_FINANCES ];
   int top;
}StackToStudentsOfFinances;

typedef struct {
   StackToStudentsOfFinances* stackFinances;
   StackToStudentsOfMedicine* stackMedicine;
   StackToStudentsOfSoftwareEngineering* stackSotware;
}StackManager;

// Prototypes
bool isEmptyStackSotwareEngineer(StackToStudentsOfSoftwareEngineering*);
bool isEmptyStackMedicine(StackToStudentsOfMedicine*);
bool isEmptyStackFinances(StackToStudentsOfFinances*);
void InitializeStacks(StackManager*);
void FreeMemoryStacks(StackManager*);
void insertNewStudent(char career[]);

int main(void){
   int option;
   StackManager AllCareers;
   InitializeStacks(&AllCareers);
   
   do{
      system("cls");
      printf("===== Menu =====\n");
      printf("1. Inscribir estudiante\n");
      printf("2. Buscar estudiante\n");
      printf("3. Salir\n");
      printf("Ingres la opci%cn: ", 162);
      scanf("%d", &option);

      switch (option){
         case 1: {
            system("cls");
            int subOption;

            do{
               system("cls");

               printf("1) Medicina\n");
               printf("2) Finanzas\n");
               printf("3) Ingenieria de software\n");
               printf("4) Cancelar\n");
               printf("Ingrese una opci%cn: ", 162);
               scanf("%i", &subOption);

               switch(subOption){
                  case 1:{

                  }
                  case 2: {

                  }
                  case 3: {

                  }
                  case 4: {
                     printf("Cancelando Inscripci%cn...", 162);
                  }
                  default: {
                     printf("Carrera no valida!");
                  }
               }

            }while(subOption != 4);
            break;
         }
         
         case 2: {


            break;
         }

         case 3: {
            printf("Saliendo del programa...");
            break;
         }
         default:{
            printf("NOTA: Opci%cn no valida!", 162);
         }
      }

   }while(option != 3);

   FreeMemoryStacks(&AllCareers);
   return 0;
}

bool isEmptyStackSotwareEngineer(StackToStudentsOfSoftwareEngineering* stack){
   return stack->top == -1;
}
bool isEmptyStackMedicine(StackToStudentsOfMedicine* stack){
   return stack->top == -1;
}
bool isEmptyStackFinances(StackToStudentsOfFinances* stack){
   return stack->top == -1;
}
void InitializeStacks(StackManager* StackManager){
   StackManager->stackFinances = (StackToStudentsOfFinances*) malloc(sizeof(StackToStudentsOfFinances));
   StackManager->stackMedicine = (StackToStudentsOfMedicine*) malloc(sizeof(StackToStudentsOfMedicine));
   StackManager->stackSotware = (StackToStudentsOfSoftwareEngineering*) malloc(sizeof(StackToStudentsOfSoftwareEngineering));

   StackManager->stackFinances->top = -1;
   StackManager->stackMedicine->top = -1;
   StackManager->stackSotware->top = -1;
}
void FreeMemoryStacks(StackManager* StackManager){
   free(StackManager->stackFinances);  
   free(StackManager->stackMedicine);
   free(StackManager->stackSotware);
}

void insertNewStudent(char career[]){

}