#ifndef CRITTER_H // Si CRITTER_H no est� definit,
#define CRITTER_H // defineix CRITTER_H. Aix� prev� la inclusi� m�ltiple de l'arxiu.

#include <iostream> // Inclou la biblioteca est�ndard d'E/S per utilitzar objectes com cout.
#include <vector> // Inclou la biblioteca del contenidor vector de la STL.

using namespace std; // Fa servir l'espai de noms std per evitar la necessitat de prefixar els elements de std.

class Critter { // Inicia la definici� de la classe Critter.
public: // M�todes p�blics accessibles des de fora de la classe.
    Critter(int gana = 0, int avorriment = 0); // Constructor amb valors predeterminats per a gana i avorriment.
    void Xerra(); // M�tode per a que la criatura parli.
    void Menja(int menjar = 4); // M�tode per alimentar la criatura, amb un valor predeterminat per a menjar.
    void Juga(int diversio = 4); // M�tode per jugar amb la criatura, amb un valor predeterminat per a diversio.
    void Estat(); // M�tode per mostrar l'estat actual de la criatura.
    void FaEsport(); // M�tode per fer que la criatura faci esport.
    friend ostream& operator<<(ostream& os, const Critter& critter); // Sobrecarrega de l'operador << per imprimir l'estat de la criatura.
    Critter& operator=(const Critter& critter); // Sobrecarrega de l'operador d'assignaci�.

private: // Membres privats, accessibles nom�s des de dins de la classe.
    int m_Gana; // Nivell de gana de la criatura.
    int m_Avorriment; // Nivell d'avorriment de la criatura.
    int GetEstil() const; // M�tode per obtenir l'estil de vida de la criatura basat en gana i avorriment.
    void PassaTemps(int temps = 1); // M�tode per simular el pas del temps, afectant gana i avorriment.
};

class Ogre { // Inicia la definici� de la classe Ogre.
public: // M�todes p�blics accessibles des de fora de la classe.
    Ogre(int health = 100); // Constructor amb valor predeterminat per a la salut.
    void Xerra(); // M�tode per a que l'ogre parli.
    void Menja(int menjar = 4); // M�tode per alimentar l'ogre, amb un valor predeterminat per a menjar.
    void Juga(int diversio = 4); // M�tode per jugar amb l'ogre, amb un valor predeterminat per a diversio.
    void Estat(); // M�tode per mostrar l'estat actual de l'ogre.
    void FaEsport(); // M�tode per fer que l'ogre faci esport.
    friend ostream& operator<<(ostream& os, const Ogre& ogre); // Sobrecarrega de l'operador << per imprimir l'estat de l'ogre.
    Ogre& operator=(const Ogre& ogre); // Sobrecarrega de l'operador d'assignaci�.

private: // Membres privats, accessibles nom�s des de dins de la classe.
    int m_Salut; // Nivell de salut de l'ogre.
    int m_Enutjat; // Nivell d'enutjament de l'ogre.
    int GetEstil() const; // M�tode per obtenir l'estil de vida de l'ogre basat en salut i enutjament.
    void PassaTemps(int temps = 1); // M�tode per simular el pas del temps, afectant salut i enutjament.
};

class Granja { // Inicia la definici� de la classe Granja.
public: // M�todes p�blics accessibles des de fora de la classe.
    Granja(); // Constructor de la granja.
    void Agregar(const Critter& critter); // M�tode per afegir una criatura a la granja.
    void Agregar(const Ogre& ogre); // M�tode per afegir un ogre a la granja.
    void MostrarAnimals() const; // M�tode per mostrar tots els animals de la granja.
    void MostrarAnimalEspecific(int indice) const; // M�tode per mostrar un animal espec�fic de la granja segons un �ndex.

private: // Membres privats, accessibles nom�s des de dins de la classe.
    vector<Critter> critters; // Vector per emmagatzemar les criatures de la granja.
    vector<Ogre> ogres; // Vector per emmagatzemar els ogres de la granja.
};

#endif // CRITTER_H
