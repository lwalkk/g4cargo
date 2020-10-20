#ifndef		NEUTRONCAPTURE_h
#define		NEUTRONCAPTURE_h 1

#include "globals.hh"
#include "G4VModularPhysicsList.hh"

class NeutronCapture : public G4VModularPhysicsList
{
public:

	explicit NeutronCapture(G4int ver = 1, const G4String& type = "NeutronCapture");

	virtual ~NeutronCapture() = default;

	// copy constructor and hide assignment operator
	NeutronCapture(const NeutronCapture&) = delete;
	NeutronCapture& operator=(const NeutronCapture& right) = delete;

};

#endif
