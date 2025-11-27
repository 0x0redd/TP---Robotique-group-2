# TP1 : Manipulation d'Arduino N°1

Ce dossier contient les codes sources et les exercices du premier TP de Robotique consacré à la prise en main de la carte Arduino.

## 📄 Description
L'objectif de ce TP est de comprendre le fonctionnement de base d'une carte Arduino, la structure d'un programme (setup/loop), l'utilisation des entrées/sorties numériques (LED 13) et la communication série avec l'ordinateur.

## 🛠 Matériel requis
*   Carte Arduino (UNO ou équivalent)
*   Câble USB
*   PC avec l'IDE Arduino installé

## 📂 Contenu du TP

### 1. Prise en main et Structure
Introduction aux fonctions `setup()` et `loop()`, et premier contact avec le matériel.
*   **Document de référence** : `ManipulationArduino_1.pdf`

### 2. Les Exercices

#### Exercice 1 : Blink (Clignotement)
Programmation de la LED intégrée (Pin 13) pour la faire clignoter indéfiniment.
*   **Fichier** : `exercice1.ino`
*   **Commandes clés** : `pinMode()`, `digitalWrite()`, `delay()`

#### Moniteur Série (Démo)
Exemple simple d'initialisation de la communication série pour envoyer des messages du microcontrôleur vers le PC.
*   **Fichier** : `Moniteurserie.ino`
*   **Commandes clés** : `Serial.begin()`, `Serial.println()`

#### Exercice 2 : Hello Arduino World
Affichage formaté de texte sur le moniteur série ("Hello" / "Arduino" / "World !").
*   **Fichier** : `exercice2.ino`

#### Exercice 3 : Compteur et Clignotement combinés
Programme plus complexe qui :
1.  Compte de 1 à 20 sur le moniteur série.
2.  Pour chaque nombre *n*, fait clignoter la LED 13 *n* fois.
3.  Affiche "Fin" une fois terminé.
*   **Fichier** : `exercice3.ino`
*   **Notions** : Boucles `for`, conditions `if`, variables booléennes.

#### Exercice 4 : Table de Multiplication
Affichage de la table de multiplication par 7 (de 0 à 14) sur le moniteur série.
*   **Fichier** : `exercice4.ino`
*   **Objectif** : Calculs arithmétiques et formatage de sortie console.

## 🚀 Comment utiliser
1.  Ouvrir le fichier `.ino` souhaité dans l'IDE Arduino.
2.  Connecter la carte Arduino au port USB.
3.  Sélectionner le bon modèle de carte et le port COM dans l'IDE.
4.  Téléverser (Upload) le programme.
5.  Pour les exercices 2, 3, 4 et Moniteurserie : Ouvrir le **Moniteur Série** (loupe en haut à droite) et régler la vitesse sur **9600 baud**.

