#include "GreenBull.h"

GreenBull::GreenBull() : ObjetMagique() {}

GreenBull::GreenBull(const std::string &nom, int bonus) : ObjetMagique(nom,bonus) {}

void GreenBull::utiliserSur(Creature& creature) const {

	if ((creature.obtenirEnergieTotale() - creature.obtenirEnergie()) > obtenirBonus()) {
		creature.modifierEnergie(creature.obtenirEnergie() + obtenirBonus());
	}
	else {
		creature.modifierEnergie(creature.obtenirEnergieTotale());
	}

}

std::ostream& operator<<(std::ostream& os, const GreenBull& potion) {

	os << "l'objet " << potion.obtenirNom() << "fournit un bonus de " << potion.obtenirBonus() << " point(s) d'energie " << std::endl;
	return os;

}