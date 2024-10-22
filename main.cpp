#include <iostream>
#include <string>

class Voiture{
    private:
        std::string marque;
        std::string modele;
        int annee;
        float Kilometrage;
        float vitesse;
    public:
        Voiture();
        Voiture(std::string mq, std::string md, int an, float km, float v);
        void accelerer(float valeur);
        void freiner(float valeur);
        void afficherInfo() const;
        void avancer(float distance);
        ~Voiture();
};
Voiture::Voiture() {
    marque = "Inconnue";
    modele = "Inconnu";
    annee = 0;
    Kilometrage = 0.0;
    vitesse = 0.0;
}
Voiture::Voiture(std::string mq, std::string md, int an, float km, float v) {
    marque = mq;
    modele = md;
    annee = an;
    Kilometrage = km;
    vitesse = v;
}
void Voiture::accelerer(float valeur) {
    vitesse += valeur;
}
void Voiture::freiner(float valeur) {
    vitesse -= valeur;
    if (vitesse < 0) {
        vitesse = 0;
    }
}
void Voiture::afficherInfo() const {
    std::cout << "Marque: " << marque << std::endl;
    std::cout << "Modele: " << modele << std::endl;
    std::cout << "Annee: " << annee << std::endl;
    std::cout << "Kilometrage: " << Kilometrage << " km" << std::endl;
    std::cout << "Vitesse: " << vitesse << " km/h" << std::endl;
    std::cout << std::endl;
}
void Voiture::avancer(float distance) {
    Kilometrage += distance;
}
Voiture::~Voiture() {
    std::cout << "La voiture est detruite." <<std::endl;
}
int main() {
    Voiture voiture1;
    voiture1.afficherInfo();

    std::cout << "Les informations de la voiture n1:"<<std::endl;
    Voiture voiture2("BMW", "M4 competition", 2023, 50000, 220);
    voiture2.afficherInfo();

    std::cout << "Les informations de la voiture n°2:"<<std::endl;
    Voiture voiture3("Porsche","911", 2022, 372886,316);
    voiture3.afficherInfo();

    std::cout << "Les informations de la voiture n°1 apres l'acceleration:"<<std::endl;
    voiture2.accelerer(100);
    voiture2.afficherInfo();

    std::cout << "Les informations de la voiture n°1 apres le freinage:"<<std::endl;
    voiture2.freiner(50);
    voiture2.afficherInfo();

    std::cout << "Les informations de la voiture n°1 apres modfication au niveau du kilometrage:"<<std::endl;
    voiture2.avancer(100);
    voiture2.afficherInfo();

    std::cout << "Les informations de la voiture n°2 apres l'acceleration:"<<std::endl;
    voiture3.accelerer(20);
    voiture3.afficherInfo();

    std::cout << "Les informations de la voiture n°2 apres le freinage:"<< std::endl;
    voiture3.freiner(50);
    voiture3.afficherInfo();

    std::cout << "Les informations de la voiture n°2 apres modfication au niveau du kilometrage:"<<std::endl;
    voiture3.avancer(100);
    voiture3.afficherInfo();

    return 0; // Le destructeur est appelé ici automatiquement.
}
