#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{

char saisie[20];
printf("Accès restreint : saisissez votre mot de passe \n");
while (strcmp(saisie,"LYCEEXP")!=0)
{
printf("Mot de passe ? \n");
scanf("%19s",saisie);
}

printf("Accès autorisé \n");

return 0;
} 
