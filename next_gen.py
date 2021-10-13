import sys

# initialization
i = 0
big = 0
index = 0

# les questions sont dans un tableau
q = ["Aimes-tu la réalité virtuelle ? (1, 2) : ",
     "Préfères-tu les jeux solo-naratif ou le netflix du jeu vidéo ? (1, 2) : ",
     "Veux-tu rejoindre la plus grosse communauté ? (1, 2) : ",
     "Préfères-tu une manette avec pleins de features ou une console super puissante ? (1, 2) : ",
     "Préfères-tu que ta console prenne de la place (ventilation) ou qu'elle se marie bien dans le salon ? (1, 2) : "
     ]

# les réponses sont stockées ici
r = ["Playstation 5", "Xbox Serie X"]

# le score des 2 consoles
sc = [0, 0]

while i < 5:
    # on pose ici les questions du tableau q une par une
    asw = input(q[i])
    i += 1
    # on vérifie la réponse
    if asw == '1':
        sc[0] += 1
    elif asw == '2':
        sc[1] += 1
    else:
        i -= 1

for i in range(2):
    # on récupère l'indice du tableau des scores correspondant au plus grand
    if sc[i] > big:
        big = sc[i]
        index = i

# on affiche le résultat final en fonction de l'indice récupéré par la boucle
print("La ", r[index], " est faite pour vous !")