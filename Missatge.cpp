#include <iostream>
using namespace std;

#include "Missatge.h"

void Missatge::llegeix()
{
	cout << "Introdueix nom de l’emissor: ";
	getline(cin, m_emissor);
	cout << "Introdueix text del missatge: ";
	getline(cin, m_missatge);
	cout << "Introdueix data: ";
	getline(cin, m_data);
}

