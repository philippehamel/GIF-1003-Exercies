/*
 * Temps.cpp
 *
 *  Created on: 2018-03-03
 *      Author: etudiant
 */

#include "Temps.h"
#include <time.h>
#include <sstream>
#include <iostream>

using namespace std;
namespace labo {

Temps::Temps() {
	m_seconde = time(NULL);

	m_heure = m_seconde / 3600;
	m_heure = m_heure % 24;
	m_heure = m_heure - 5;

	m_minute = m_seconde / 60;
	m_minute = m_minute % (24 * 60);
	m_minute = m_minute % 60;

	m_seconde = m_seconde % (24 * 60);
	m_seconde = m_seconde % 3600;
	m_seconde = m_seconde % 60;
}

Temps::Temps(int p_heure, int p_minute, int p_seconde) :
		m_heure(p_heure), m_minute(p_minute), m_seconde(p_seconde) {
}

int Temps::getHeure() const {
	return m_heure;
}

void Temps::setHeure(int p_heure) {
	m_heure = (p_heure >= 0 && p_heure < 24) ? p_heure : 0;
}

int Temps::getMinute() const {
	return m_minute;
}

void Temps::setMinute(int p_minute) {
	m_minute = (p_minute >= 0 && p_minute < 60) ? p_minute : 0;
}

int Temps::getSeconde() const {
	return m_seconde;
}

void Temps::setSeconde(int p_seconde) {
	m_seconde = (p_seconde >= 0 && p_seconde < 60) ? p_seconde : 0;
}

std::string Temps::reqTempsFormate() {
	ostringstream os;
	os << m_heure << ":" << m_minute << ":" << m_seconde;
	return os.str();
}

void Temps::setTemps(int p_heure, int p_minute, int p_seconde) {
	setHeure(p_heure);
	setMinute(p_minute);
	setSeconde(p_seconde);
}

} /* namespace labo */
