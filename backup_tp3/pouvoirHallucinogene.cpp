#include "pouvoirHallucinogene.h"

PouvoirHallucinogene::PouvoirHallucinogene(const std::string& nom,
	unsigned int nombreDeDegat, unsigned int energieNecessaire) : Pouvoir(nom, nombreDeDegat, energieNecessaire) {
	type_ = TypeEtat_confus;
}

PouvoirHallucinogene::PouvoirHallucinogene(const std::string& nom,
	unsigned int nombreDeDegat, unsigned int energieNecessaire, int duree) : Pouvoir(nom, nombreDeDegat, energieNecessaire), duree_(duree) {
	type_ = TypeEtat_confus;
}

void PouvoirHallucinogene::appliquerEffetOffensif(Creature& creatureEnnemie) {
	creatureEnnemie.modifierEtat(new EtatCreature("confus", duree_));
}

std::ostream& operator<<(std::ostream& os, const PouvoirHallucinogene& hallucinogene) {

	os << static_cast<Pouvoir>(hallucinogene);
	os << " il peut rendre confus la cible" << std::endl;
	/*os << hallucinogene.nom_ << " possede un nombre de d�gat de " << hallucinogene.nombreDeDegat_ <<
		" et une energie necessaire de " << hallucinogene.energieNecessaire_ << std::endl;*/
	return os;

}