#include <stdio.h>
#include <stdlib.h>
// version 3
void rman();
int GudBye();
int GudBye() {
    printf("Au revoir");
    return 0;
}
int main(int argc, char *argv[])
{
    double un = 0,deux = 0;
    printf("Entre le premier nombre\n");
    scanf("%lf", &un);
    printf("Entre le deuxieme nombre\n");
    scanf("%lf", &deux);
    double resultat = 0;
    resultat = un + deux;
    printf("Ca fait %lf\n",resultat);
    printf("Voulez vous faire une autre addition ? mettez 1 pour oui et un autre nombre pour nom");
    int choix;
    scanf("%d", &choix);
    if(choix == 1)
    {
        rman(); // et on recommence
    }
    else
    {
        printf("Au revoir");
        return 0;
    }

}
void rman() // recommencer
{
    double un = 0,deux = 0;
    printf("Entre le premier nombre\n");
    scanf("%lf", &un);
    printf("Entre le deuxieme nombre\n");
    scanf("%lf", &deux);
    double resultat = 0;
    resultat = un + deux;
    printf("Ca fait %lf\n",resultat);

    printf("Voulez vous faire une autre addition ? mettez 1 pour oui et un autre nombre pour nom\n");
    int choix;
    scanf("%d", &choix);
    if(choix == 1)
    {
        rman();
    }
    else
    {
        GudBye();
    }

}


