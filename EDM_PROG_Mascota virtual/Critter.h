#ifndef CRITTER_H // Si CRITTER_H no està definit,
#define CRITTER_H // defineix CRITTER_H. Això prevé la inclusió múltiple de l'arxiu.

#include <iostream> // Inclou la biblioteca estàndard d'E/S per utilitzar objectes com cout.
#include <vector> // Inclou la biblioteca del contenidor vector de la STL.

using namespace std; // Fa servir l'espai de noms std per evitar la necessitat de prefixar els elements de std.

class Critter { // Inicia la definició de la classe Critter.
public: // Mètodes públics accessibles des de fora de la classe.
    Critter(int gana = 0, int avorriment = 0); // Constructor amb valors predeterminats per a gana i avorriment.
    void Xerra(); // Mètode per a que la criatura parli.
    void Menja(int menjar = 4); // Mètode per alimentar la criatura, amb un valor predeterminat per a menjar.
    void Juga(int diversio = 4); // Mètode per jugar amb la criatura, amb un valor predeterminat per a diversio.
    void Estat(); // Mètode per mostrar l'estat actual de la criatura.
    void FaEsport(); // Mètode per fer que la criatura faci esport.
    friend ostream& operator<<(ostream& os, const Critter& critter); // Sobrecarrega de l'operador << per imprimir l'estat de la criatura.
    Critter& operator=(const Critter& critter); // Sobrecarrega de l'operador d'assignació.

private: // Membres privats, accessibles només des de dins de la classe.
    int m_Gana; // Nivell de gana de la criatura.
    int m_Avorriment; // Nivell d'avorriment de la criatura.
    int GetEstil() const; // Mètode per obtenir l'estil de vida de la criatura basat en gana i avorriment.
    void PassaTemps(int temps = 1); // Mètode per simular el pas del temps, afectant gana i avorriment.
};

class Ogre { // Inicia la definició de la classe Ogre.
public: // Mètodes públics accessibles des de fora de la classe.
    Ogre(int health = 100); // Constructor amb valor predeterminat per a la salut.
    void Xerra(); // Mètode per a que l'ogre parli.
    void Menja(int menjar = 4); // Mètode per alimentar l'ogre, amb un valor predeterminat per a menjar.
    void Juga(int diversio = 4); // Mètode per jugar amb l'ogre, amb un valor predeterminat per a diversio.
    void Estat(); // Mètode per mostrar l'estat actual de l'ogre.
    void FaEsport(); // Mètode per fer que l'ogre faci esport.
    friend ostream& operator<<(ostream& os, const Ogre& ogre); // Sobrecarrega de l'operador << per imprimir l'estat de l'ogre.
    Ogre& operator=(const Ogre& ogre); // Sobrecarrega de l'operador d'assignació.

private: // Membres privats, accessibles només des de dins de la classe.
    int m_Salut; // Nivell de salut de l'ogre.
    int m_Enutjat; // Nivell d'enutjament de l'ogre.
    int GetEstil() const; // Mètode per obtenir l'estil de vida de l'ogre basat en salut i enutjament.
    void PassaTemps(int temps = 1); // Mètode per simular el pas del temps, afectant salut i enutjament.
};

class Granja { // Inicia la definició de la classe Granja.
public: // Mètodes públics accessibles des de fora de la classe.
    Granja(); // Constructor de la granja.
    void Agregar(const Critter& critter); // Mètode per afegir una criatura a la granja.
    void Agregar(const Ogre& ogre); // Mètode per afegir un ogre a la granja.
    void MostrarAnimals() const; // Mètode per mostrar tots els animals de la granja.
    void MostrarAnimalEspecific(int indice) const; // Mètode per mostrar un animal específic de la granja segons un índex.

private: // Membres privats, accessibles només des de dins de la classe.
    vector<Critter> critters; // Vector per emmagatzemar les criatures de la granja.
    vector<Ogre> ogres; // Vector per emmagatzemar els ogres de la granja.
};

#endif // CRITTER_H
