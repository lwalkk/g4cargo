// get rid of all this crap -- or use QBBC instead if it will still work

#include "globals.hh"
#include "G4PhysicalConstants.hh"
#include "G4SystemOfUnits.hh"
#include "G4ParticleDefinition.hh"
#include "NeutronCapture.hh"

#include "G4DecayPhysics.hh"
#include "G4EmStandardPhysics.hh"
#include "G4EmStandardPhysics_option4.hh"
#include "G4EmExtraPhysics.hh"
#include "G4StoppingPhysics.hh"

#include "G4HadronInelasticQBBC.hh"
#include "G4HadronElasticPhysics.hh"
#include "G4HadronElasticPhysicsXS.hh"
#include "G4HadronElasticPhysicsHP.hh"
#include "G4ChargeExchangePhysics.hh"
#include "G4IonPhysicsXS.hh"
#include "G4IonElasticPhysics.hh"
#include "G4NeutronTrackingCut.hh"
#include "G4HadronCaptureProcess.hh"

NeutronCapture::NeutronCapture(G4int ver, const G4String&)
{
	G4cout << "<<< Physics List for Neutron Capture" << G4endl;

	// ??
	defaultCutValue = 0.7 * mm;
	SetVerboseLevel(ver);

	
	// Hadron Physics
	RegisterPhysics(new G4HadronCaptureProcess(ver));
}

