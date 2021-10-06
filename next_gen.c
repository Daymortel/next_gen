#include <stdio.h>

int main(void)
{
    int a, b, c, d, e; // define answers
    int x = 0; // playstation 5
    int y = 0; // xbox series

    printf("Aimes-tu la réalité virtuelle ? (1, 2) : "); // question 1
    scanf("%i", &a); // scan question 1
    printf("Préfères-tu les jeux solo-naratif ou le netflix du jeu vidéo ? (1, 2) : "); // question 2
    scanf("%i", &b); // scan question 2
    printf("Veux-tu rejoindre la plus grosse communauté ? (1, 2) : "); // question 3
    scanf("%i", &c); // scan question 3
    printf("Préfères-tu une manette avec pleins de features ou une console super puissante ? (1, 2) : "); // question 4
    scanf("%i", &d); // scan question 4
    printf("Préfères-tu que ta console prenne de la place (ventilation) ou qu'elle se marie bien dans le salon ? (1, 2) : "); // question 5
    scanf("%i", &e); // scan question 5

    switch (a) //answer 1
    {
        case 1:
            x++;
            break;
        case 2:
            y++;
            break;
        default:
            return 0;
    }
    switch (b) // answer 2
    {
        case 1:
            x++;
            break;
        case 2:
            y++;
            break;
        default:
            return 0;
    }
    switch (c) // answer 3
    {
        case 1:
            x++;
            break;
        case 2:
            y++;
            break;
        default:
            return 0;
    }
    switch (d) // answer 4
    {
        case 1:
            x++;
            break;
        case 2:
            y++;
            break;
        default:
            return 0;
    }
    switch (e) // answer 5
    {
        case 1:
            x++;
            break;
        case 2:
            y++;
            break;
        default:
            return 0;
    }
    // calcul of final answer
    if (x >= 3)
    {
        printf("Je te conseilles la Playstation 5\n");
    }
    else if (y >= 3)
    {
        printf("Je te conseilles la Xbox Serie X\n");
    }
    else
    {
        return 0;
    }
	system("PAUSE");
}