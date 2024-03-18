#include "Critter.h" // Inclou l'arxiu d'encapçalament on es declaren les classes Critter, Ogre, i Granja.

// Constructor de la classe Critter amb valors predeterminats per a gana i avorriment.
Critter::Critter(int gana, int avorriment) {
    m_Gana = gana; // Assigna el valor proporcionat a la variable membre m_Gana.
    m_Avorriment = avorriment; // Assigna el valor proporcionat a la variable membre m_Avorriment.
}

// Mètode per a que la criatura "parli", mostrant el seu estat de gana i avorriment.
void Critter::Xerra() {
    cout << "Hola, soc la teva mascota!" << endl; // Saluda al usuari.
    // Mostra el nivell de gana i avorriment, amb missatges específics segons el valor.
    cout << "Em trobo " << (m_Gana >= 8 ? "molt famolenc" : (m_Gana >= 5 ? "famolenc" : "satisfet"))
        << " i " << (m_Avorriment >= 8 ? "molt avorrit" : (m_Avorriment >= 5 ? "avorrit" : "entretingut")) << "." << endl;
}

// Mètode per alimentar la criatura, que redueix la seva gana.
void Critter::Menja(int menjar) {
    cout << "Nyam nyam nyam... menjant!" << endl; // Indica que la criatura està menjant.
    m_Gana -= menjar; // Redueix el nivell de gana basant-se en la quantitat de menjar proporcionada.
    if (m_Gana < 0) // Assegura que el nivell de gana no sigui negatiu.
        m_Gana = 0;
    PassaTemps(); // Simula el pas del temps, afectant els estats de gana i avorriment.
}

// Mètode per jugar amb la criatura, que redueix el seu avorriment.
void Critter::Juga(int diversio) {
    cout << "Yupi! Anem a jugar!" << endl; // Expressa entusiasme per jugar.
    m_Avorriment -= diversio; // Redueix el nivell d'avorriment basant-se en la quantitat de diversió proporcionada.
    if (m_Avorriment < 0) // Assegura que el nivell d'avorriment no sigui negatiu.
        m_Avorriment = 0;
    PassaTemps(); // Simula el pas del temps.
}

// Mètode que mostra l'estat actual de la criatura, incloent gana, avorriment i la seva adreça de memòria.
void Critter::Estat() {
    cout << "Nivell actual de gana: " << m_Gana << endl; // Mostra el nivell de gana.
    cout << "Nivell actual d'avorriment: " << m_Avorriment << endl; // Mostra el nivell d'avorriment.
    cout << "Adreça d'aquest objecte Critter: " << this << endl; // Mostra l'adreça de memòria de l'objecte.
}

// Mètode que simula que la criatura fa esport. Podria influir en els seus estats si es desenvolupa més.
void Critter::FaEsport() {
    cout << "La mascota fa esport." << endl;
}

// Retorna la suma dels nivells de gana i avorriment com a representació numèrica de l'estil de vida de la criatura.
int Critter::GetEstil() const {
    return (m_Gana + m_Avorriment);
}

// Simula el pas del temps, augmentant els nivells de gana i avorriment de manera uniforme.
void Critter::PassaTemps(int temps) {
    m_Gana += temps;
    m_Avorriment += temps;
}

// Sobrecàrrega de l'operador << per permetre mostrar l'estat de la criatura fàcilment mitjançant cout.
ostream& operator<<(ostream& os, const Critter& critter) {
    os << "Nivell de gana: " << critter.m_Gana << ", Nivell d'avorriment: " << critter.m_Avorriment;
    return os;
}

// Sobrecarrega de l'operador d'assignació per a assignar els valors d'una criatura a una altra.
Critter& Critter::operator=(const Critter& critter) {
    if (this != &critter) { // Comprova que no s'estigui intentant autoassignar.
        m_Gana = critter.m_Gana; // Copia el nivell de gana.
        m_Avorriment = critter.m_Avorriment; // Copia el nivell d'avorriment.
    }
    return *this; // Retorna una referència a la criatura actual.
}

// Constructor de la classe Ogre, inicialitza l'ogre amb un nivell de salut i enutjament predeterminats.
Ogre::Ogre(int health) : m_Salut(health), m_Enutjat(0) {}

// Mètode per a que l'ogre "parli", mostrant el seu estat de salut i enutjament.
void Ogre::Xerra() {
    cout << "Hola, soc l'ogre!" << endl; // Saluda al usuari.
    // Mostra el nivell de salut i enutjament, amb missatges específics segons el valor.
    cout << "Em trobo " << (m_Salut >= 80 ? "sano" : (m_Salut >= 50 ? "ferit" : "malalt"))
        << " i " << (m_Enutjat >= 8 ? "molt enfadat" : (m_Enutjat >= 5 ? "enfadat" : "tranquil")) << "." << endl;
}

// Mètode per alimentar l'ogre, que millora la seva salut.
void Ogre::Menja(int menjar) {
    cout << "Menjant... ara estic menys famolenc!" << endl; // Indica que l'ogre està menjant.
    m_Salut += menjar; // Augmenta el nivell de salut basant-se en la quantitat de menjar proporcionada.
    if (m_Salut > 100) // Assegura que el nivell de salut no superi el màxim.
        m_Salut = 100;
    PassaTemps(); // Simula el pas del temps, afectant els estats de salut i enutjament.
}

// Mètode per jugar amb l'ogre, que redueix el seu enutjament.
void Ogre::Juga(int diversio) {
    cout << "Jugant... això és divertit!" << endl; // Expressa entusiasme per jugar.
    m_Enutjat -= diversio; // Redueix el nivell d'enutjament basant-se en la quantitat de diversió proporcionada.
    if (m_Enutjat < 0) // Assegura que el nivell d'enutjament no sigui negatiu.
        m_Enutjat = 0;
    PassaTemps(); // Simula el pas del temps.
}

// Mètode que mostra l'estat actual de l'ogre, incloent salut, enutjament i la seva adreça de memòria.
void Ogre::Estat() {
    cout << "Nivell actual de salut: " << m_Salut << endl; // Mostra el nivell de salut.
    cout << "Nivell actual d'enutjament: " << m_Enutjat << endl; // Mostra el nivell d'enutjament.
    cout << "Adreça d'aquest objecte Ogre: " << this << endl; // Mostra l'adreça de memòria de l'objecte.
}

// Mètode que simula que l'ogre fa exercici. Podria influir en els seus estats si es desenvolupa més.
void Ogre::FaEsport() {
    cout << "L'ogre fa exercici." << endl;
}

// Retorna la suma dels nivells de salut i enutjament com a representació numèrica de l'estil de vida de l'ogre.
int Ogre::GetEstil() const {
    return (m_Salut + m_Enutjat);
}

// Simula el pas del temps, afectant els nivells de salut i enutjament de manera uniforme.
void Ogre::PassaTemps(int temps) {
    m_Salut -= temps; // Disminueix el nivell de salut.
    m_Enutjat += temps; // Augmenta el nivell d'enutjament.
}

// Sobrecàrrega de l'operador << per permetre mostrar l'estat de l'ogre fàcilment mitjançant cout.
ostream& operator<<(ostream& os, const Ogre& ogre) {
    os << "Nivell de salut: " << ogre.m_Salut << ", Nivell d'enutjament: " << ogre.m_Enutjat;
    return os;
}

// Sobrecarrega de l'operador d'assignació per a assignar els valors d'un ogre a un altre.
Ogre& Ogre::operator=(const Ogre& ogre) {
    if (this != &ogre) { // Comprova que no s'estigui intentant autoassignar.
        m_Salut = ogre.m_Salut; // Copia el nivell de salut.
        m_Enutjat = ogre.m_Enutjat; // Copia el nivell d'enutjament.
    }
    return *this; // Retorna una referència a l'ogre actual.
}

// Constructor de la classe Granja. Inicialitza una granja buida.
Granja::Granja() {}

// Afegeix una criatura a la granja, emmagatzemant-la en el vector de criatures.
void Granja::Agregar(const Critter& critter) {
    critters.push_back(critter);
}

// Afegeix un ogre a la granja, emmagatzemant-lo en el vector d'ogres.
void Granja::Agregar(const Ogre& ogre) {
    ogres.push_back(ogre);
}

// Mostra tots els animals de la granja, incloent criatures i ogres, si n'hi ha.
void Granja::MostrarAnimals() const {
    if (critters.empty() && ogres.empty()) { // Comprova si la granja està buida.
        cout << "La granja no té cap animal." << endl; // Informa que no hi ha animals.
        return;
    }

    cout << "Animals a la granja:" << endl; // Informa sobre els animals presents a la granja.

    cout << "\nCritters:" << endl; // Mostra les criatures.
    for (size_t i = 0; i < critters.size(); ++i) { // Recorre el vector de criatures.
        cout << "Critter " << i + 1 << ": " << critters[i] << endl; // Mostra cada criatura.
    }

    cout << "\nOgres:" << endl; // Mostra els ogres.
    for (size_t i = 0; i < ogres.size(); ++i) { // Recorre el vector d'ogres.
        cout << "Ogre " << i + 1 << ": " << ogres[i] << endl; // Mostra cada ogre.
    }
}

// Mostra un animal específic de la granja basat en un índex donat.
void Granja::MostrarAnimalEspecific(int indice) const {
    if (indice >= 0 && indice < critters.size()) { // Si l'índex correspon a una criatura.
        cout << "Critter a la posició " << indice + 1 << ": " << critters[indice] << endl; // Mostra la criatura.
    }
    else if (indice >= critters.size() && indice < critters.size() + ogres.size()) { // Si l'índex correspon a un ogre.
        cout << "Ogre a la posició " << indice - critters.size() + 1 << ": " << ogres[indice - critters.size()] << endl; // Mostra l'ogre.
    }
    else { // Si l'índex no és vàlid.
        cout << "L'índex especificat està fora del rang de la granja." << endl; // Informa que l'índex no és vàlid.
    }
}
