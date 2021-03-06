#ifndef _OBJECTS__H
#include "objects.h"
#endif
#define MAX_RADIUS 200

class AutoPilot
{       
private:
	float par[100]; // parametry początkowe i parametry aktualne
	long number_of_params;
public:
  AutoPilot();
  void AutoControl(MovableObject *ob);                        // pojedynczy krok sterowania
  void ControlTest(MovableObject *_ob,float krok_czasowy, float czas_proby); 
  void ParametersSimAnnealing(long number_of_epochs, float krok_czasowy, float czas_proby);
};