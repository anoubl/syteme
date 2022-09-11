#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
char id[30];
char pass[30];
}formation;
int i=0,k=0;
formation f[20];
    void ajoute()
    {
    if (i!=20)
    {
    printf("donner identifiant:");
    fflush(stdin);
    gets(f[i].id);
    printf("donner mot de passe:");
    fflush(stdin);
    gets(f[i].pass);
    k++;
    i++;
}
    else
printf("\n\ttableau remplir!!");
}
void liste()
{
for(i=0;i<k;i++)
{
printf("id(%d):",i+1);
fflush(stdin);
puts(f[i].id);
}

}
int login(char idi[],char pase[])
{
for(i=0;i<k;i++)
{
if(strcmp(idi,f[i].id)==0 && strcmp(pase,f[i].pass)==0)
{
return 1;
}
}
return 0;
}
int  modifyutu(char idi[],char key[])
{
for(i=0;i<k;i++)
{
if(strcmp(idi,f[i].id)==0 && strcmp(key,f[i].pass)==0)
{
printf("donner nouveau mot de passe:");
fflush(stdin);
gets(f[i].pass);
return 1;
}
}
return 0;
}
void modifyadmin(char d[])
{
for(i=0;i<k;i++)
{
if(strcmp(d,f[i].id)==0)
{
printf("donner nouveau mot de passe:");
fflush(stdin);
gets(f[i].pass);
}
}
}
void suprimer(char idi[])
{
int n;
for(i=0;i<k;i++)
{
if(strcmp(idi,f[i].id)==0)
{
n=i;
for(i=n;i<k;i++)
{
f[i]=f[i+1];
k--;
}
}
}
}
main()
{
int choix;
char a[20],b[20];
char c[20],d[20];
char e[20];
char l[20];
do{
printf("\n\t\t\t\ttapez 1 pour ajouter utilisateur");
        printf("\n\t\t\t\ttapez 2 pour afficher la liste");
        printf("\n\t\t\t\ttapez 3 pour login un utilisateur");
        printf("\n\t\t\t\ttapez 4 pour modifier le mot de passe par vous meme ");
        printf("\n\t\t\t\ttapez 5 pour madifier le mot de passe par un  admin");
        printf("\n\t\t\t\ttapez 6 pour supprimer un utilisateur");
        printf("\n\t\t\t\ttapez 7 pour quitter");
        printf("\ndonner votre choix:");
     scanf("%d",&choix);
     switch(choix)
     {
      case 1:ajoute();break;
      case 2: liste();break;
      case 3:while(login(a,b)==0)
      {
      printf("donner identifiant:");
      fflush(stdin);
            gets(a);
            printf("donner mot de passe:");
            fflush(stdin);
            gets(b);
}
printf("\t\t\t***bienvenue***\n");
      break;
      case 4: while( modifyutu(c,d)==0)
      {
      printf("donner identifiant:");
      fflush(stdin);
            gets(c);
            printf("donner mot de passe:");
            fflush(stdin);
            gets(d);
}
break;
case 5:
printf("donner le identifiant:");
fflush(stdin);
gets(e);
modifyadmin(e); break;
case 6: printf("donner identifiant:");
      fflush(stdin);
            gets(l);
suprimer(l);
break;
case 7:printf("programme quitter!!!");break;
      default:printf("choix invalide");
}
}while(choix!=7);
return 0;
}

