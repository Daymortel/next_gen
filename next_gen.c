#include <stdio.h>

int main(void)
{
    // initialization
    int big = 0, index = 0;
    char asw;

    // les questions sont dans un tableau
    char *q[5] = {"Aimes-tu la réalité virtuelle ? (1, 2) : ",
                  "Préfères-tu les jeux solo-naratif ou le netflix du jeu vidéo ? (1, 2) : ",
                  "Veux-tu rejoindre la plus grosse communauté ? (1, 2) : ",
                  "Préfères-tu une manette avec pleins de features ou une console super puissante ? (1, 2) : ",
                  "Préfères-tu que ta console prenne de la place (ventilation) ou qu'elle se marie bien dans le salon ? (1, 2) : "
                 };

    // les réponses sont stockées ici
    char *r[2] = {"Playstation 5", "Xbox Serie X"};

    // le score des 2 consoles
    int sc[2] = {0, 0};

    for (int i = 0; i < 5; i++)
    {
        // on pose ici les questions du tableau q une par une
        printf("%s", q[i]);
        scanf(" %c", &asw);

        // on vérifie la réponse
        if (asw == '1')
        {
            sc[0]++;
        }
        else if (asw == '2')
        {
            sc[1]++;
        }
        else
        {
            i--;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        // on récupère l'indice du tableau des scores correspondant au plus grand
        if (sc[i] > big)
        {
            big = sc[i];
            index = i;
        }
    }

    // on affiche le résultat final en fonction de l'indice récupéré par la boucle
    printf("La %s est faite pour vous !\n", r[index]);
}