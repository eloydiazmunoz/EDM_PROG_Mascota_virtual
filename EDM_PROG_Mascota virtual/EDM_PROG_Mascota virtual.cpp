#include <iostream> // Inclou la biblioteca estàndard d'entrada i sortida. Es fa servir per a operacions d'entrada i sortida, com imprimir text a la consola.
#include "Critter.h" // Inclou l'arxiu d'encapçalament "Critter.h", que probablement declara la classe Critter i possiblement altres classes o funcions relacionades.

using namespace std; // Fa que l'espai de noms std sigui disponible sense haver de prefixar els noms del std cada cop. Això inclou objectes com cout i cin.

int main() { // La funció principal del programa. Aquesta és la funció que s'executa quan el programa comença.
    Critter crit; // Crea una instància de la classe Critter anomenada "crit".
    Ogre unOgre; // Crea una instància de l'objecte Ogre anomenat "unOgre".
    int opcio; // Declara una variable de tipus enter anomenada "opcio" per a guardar l'elecció de l'usuari.

    do { // Comença un bucle do-while que permetrà a l'usuari interactuar amb el programa fins que decideixi sortir.
        // A continuació es mostren diferents opcions a l'usuari a través de la consola.
        cout << "\nCuidador de Criatures\n\n";
        cout << "0 Sortir\n";
        cout << "1 Escoltar la teva criatura\n";
        cout << "2 Donar menjar a la teva criatura\n";
        cout << "3 Jugar amb la teva criatura\n";
        cout << "4 Mostrar l'estat de la teva criatura\n";
        cout << "5 Fer esport amb la teva criatura\n";
        cout << "6 Mostrar l'Ogre\n"; 
        cout << "7 Mostrar Granja\n"; 
        cout << "8 Mostrar Animal Especific\n"; 
        cout << "\nOpcio: ";
        cin >> opcio; // Llegeix l'elecció de l'usuari des de la consola i l'assigna a la variable "opcio".

        switch (opcio) { // Utilitza l'estructura switch per a executar diferents blocs de codi basats en el valor de "opcio".
        case 0:
            cout << "Adeu.\n"; // Si l'usuari introdueix 0, s'imprimeix "Adeu." i el programa acabarà després d'aquest cicle.
            break;
        case 1:
            crit.Xerra(); // Crida al mètode Xerra de l'objecte "crit".
            break;
        case 2:
            crit.Menja(); // Crida al mètode Menja de "crit".
            break;
        case 3:
            crit.Juga(); // Crida al mètode Juga de "crit".
            break;
        case 4:
            crit.Estat(); // Crida al mètode Estat de "crit" per a mostrar el seu estat actual.
            break;
        case 5:
            crit.FaEsport(); // Crida al mètode FaEsport de "crit".
            break;
        case 6:
            unOgre.Xerra(); // Crida al mètode Parla (aquí anomenat Xerra) del Ogre.
            unOgre.Estat(); // Opcional: Mostra l'estat de salut de l'Ogre, si el mètode existeix.
            break;
        case 7:
        {
            Granja granja; // Crea una instància de la classe Granja.
            granja.Agregar(crit); // Afegeix "crit" a la granja.
            granja.Agregar(unOgre); // Afegeix "unOgre" a la granja.
            granja.MostrarAnimals(); // Mostra tots els animals de la granja.
        }
        break;
        case 8:
        {
            int indice; // Declara una variable de tipus enter per a l'índex.
            cout << "Introdueix l'index de l'animal a mostrar: ";
            cin >> indice; // Llegeix l'índex de l'animal a mostrar des de la consola.
            Granja granja; // Crea una altra instància de la classe Granja.
            granja.Agregar(crit); // Afegeix "crit" a aquesta granja.
            granja.Agregar(unOgre); // Afegeix "unOgre" a aquesta granja.
            granja.MostrarAnimalEspecific(indice); // Mostra l'animal específic basat en l'índex proporcionat.
        }
        break;
        default:
            cout << "\nHo sentim, pero " << opcio << " no es una opcio valida.\n"; // Si l'usuari introdueix un número que no correspon a cap opció, s'informa que no és vàlid.
            break;
        }
    } while (opcio != 0); // El bucle continua mentre que l'opció sigui diferent de 0.

    return 0; // El programa retorna 0, el que indica que s'ha acabat amb èxit.
}
