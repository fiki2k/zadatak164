// Program treba naci duljinu polja pomocu pointera.

#include<stdio.h>

int string_ln(char*);

int main()
{
   char str[30];
   int duljina;

   printf("Unesi neki string: ");
   scanf("%s",str);

   duljina = string_duljina(str);
   printf("\nDuljina danog stringa [ %s ] je : %d\n", str, duljina);

  return 0;
}

int string_duljina(char*p) /* p=&str[0] */
{
   int brojac = 0;
   while (*p != '\0') {
      brojac++;
      p++;
   }
   return brojac;
}
