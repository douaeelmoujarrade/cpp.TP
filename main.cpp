#include "card.h"
#include "PokemonCard.h"
#include "EnergyCard.h"
#include "TrainerCard.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Création du joueur 1
    Player player1("Hadi");
    player1.addCardToBench(new EnergyCard("Electric"));
    player1.addCardToBench(new EnergyCard("Electric"));
    player1.addCardToBench(new TrainerCard("Ash", "Heal all your active Pokémon"));
    player1.addCardToBench(new PokemonCard("Pikachu", "Electric", "Pikachu", 2, 100, 2, "Thunder Bolt", 20, 3, "Thunder Storm", 30));

    // Activation d'une carte Pokémon
    player1.activatePokemonCard(3);

    // Attachement de cartes énergie
    player1.attachEnergyCard(0, 0);
    player1.attachEnergyCard(0, 0);

    // Affichage des cartes sur le banc et actives
    cout << endl;
    player1.displayBench();
    cout << endl;
    player1.displayAction();

    // Création du joueur 2
    Player player2("Germain");
    player2.addCardToBench(new EnergyCard("Grass"));
    player2.addCardToBench(new TrainerCard("Brock", "Heal all your active Pokémon"));
    player2.addCardToBench(new PokemonCard("Bulbasaur", "Grass", "Bulbasaur", 1, 100, 2, "Leech Seed", 15, 3, "Vine Whip", 25));

    // Activation d'une carte Pokémon
    player2.activatePokemonCard(2);

    // Attachement de carte énergie
    player2.attachEnergyCard(0, 0);

    // Affichage des cartes sur le banc et actives
    cout << endl;
    player2.displayBench();
    cout << endl;
    player2.displayAction();

    // Attaque du joueur 1 contre le joueur 2
    player1.attack(0, 0, player2, 0);

    // Affichage des cartes actives du joueur 2
    cout << endl;
    player2.displayAction();

    // Utilisation d'une carte entraîneur par le joueur 2
    player2.useTrainer(0);

    // Affichage final des cartes actives du joueur 2
    cout << endl;
    player2.displayAction();

    return 0;
}
