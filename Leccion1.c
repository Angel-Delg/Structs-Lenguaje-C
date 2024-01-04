#include <stdio.h>
#include <string.h>
#define MAX_CHARACTERS 60

// simple structs
struct Student {
   int UID;
   char Names[ MAX_CHARACTERS ];
   char Lastnames [ MAX_CHARACTERS ];
   unsigned int Age;
   char Gender;
};

typedef struct Student Student;

//NOTA:: NO SON IGUALES: char [] => const char*

int main(){
   // Definir variable de tipo "Student"
   Student student;

   student.UID = 123456987;
   student.Age = 18;
   student.Gender = 'M';

   // student.Names = "Angel Abraham";
   strcpy(student.Names, "Angel Abraham");
   strcpy(student.Lastnames, "Lopez Delgado");

   printf("Carnet: %i\nNombre: %s\nApellidos: %s\nGenero: %c\nEdad: %i",student.UID, student.Names, student.Lastnames, student.Gender, student.Age);
   return 0;
}