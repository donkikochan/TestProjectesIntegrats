#ifndef MISSATGE_H_INCLUDED
#define MISSATGE_H_INCLUDED
#include <string>
using namespace std;

class Missatge
{
public:
	void llegeix();
	string getEmissor() const { return m_emissor; }
	string getText() const { return m_missatge; }
	string getData() const { return m_data; }
private:
	string m_emissor;
	string m_missatge;
	string m_data;
};


#endif // MISSATGE_H_INCLUDED
