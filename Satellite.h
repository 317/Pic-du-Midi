#ifndef Satellite_h
#define Satellite_h

#include <Servo.h>

// reperage des pins
#define capteurG 1
#define capteurD 0
#define pinServo 9 


class Satellite
{
  public:
//@initialisation
    //@bloc texte=notre Satellite png=avance.png
    Satellite();
	//@bloc texte=procédure d'initialisation png=avance.png
    void initialise();

//@actions
    //@bloc texte=fait tourner le satellite selon les degrés png=avance.png
    void tourne(int _angle);
    //@bloc texte=tourne le satellite à gauche de _degres degrés png=avance.png
    void tourneGauche(int _degres);
     //@bloc texte=tourne le satellite à droite de _degress degrés png=avance.png
    void tourneDroite(int _degres);
    //@bloc texte=renvoie valeur capteur gauche png=avance.png
    int capteurGauche();
    //@bloc texte=renvoie valeur capteur droit png=avance.png
    int capteurDroit();

  private:
    Servo _servo;
    void relativeTurn(int _degres);
};

#endif
