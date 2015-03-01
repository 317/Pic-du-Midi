/*
  Satellite.cpp - Library for flashing Satellite code.
*/

#include <Arduino.h>
#include "Satellite.h"

Satellite::Satellite()
{
 
}

void Satellite::initialise()
{	
  // initialise les servos
  _servo.attach(pinServo);
  _servo.write(90);
  
}	

void Satellite::tourne(int _angle) {
	_angle = max(0, _angle);
	_angle = min(180, _angle);
  	_servo.write(_angle); 
}

void Satellite::tourneGauche(int _degres) {
	relativeTurn(- _degres);
}

void Satellite::tourneDroite(int _degres) {
	relativeTurn(_degres);
}
void Satellite::relativeTurn(int _degres){
	int current_angle = _servo.read();
	int new_angle = current_angle + _degres;
	new_angle = max(0, new_angle);
	new_angle = min(1023, new_angle);
	_servo.write(new_angle);
}

//TODO : installer processing 2

int Satellite::capteurGauche(){
  return map(analogRead(capteurG), 0, 1024, 0, 100);
}

int Satellite::capteurDroit(){
  return map(analogRead(capteurD), 0, 1024, 0, 100);
}

