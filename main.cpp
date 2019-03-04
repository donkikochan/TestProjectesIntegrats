#include <iostream>

using namespace std;

#include "GrupConversa.h"




int main()
{
	Participant llistaParticipants[MAX_PARTICIPANTS] = 
	{
		{"P1", "T1"},{ "P2", "T2" },{ "P3", "T1" }
	};
    GrupConversa grup(llistaParticipants, MAX_PARTICIPANTS);
  
    return 0;
}
