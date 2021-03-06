#ifndef LIB_TRIANGLE_H_
#define LIB_TRIANGLE_H_
 
#include <Arduino.h>  
#include <WaveGen.h>
 
class Triangle : public WaveGen{
	public:     
		
	public: 
 		virtual void _setWavelength(uint16_t,bool);
 		virtual void _stop(); 
 		virtual uint8_t _getWaveDataMessage();
 		virtual void _sendWaveDataMessage();
  		virtual void _applyAttack();
 		virtual void _applyRelease(); 

	};

#endif