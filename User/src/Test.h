/**
*	@file Test.h
* @brief ��������
*
*/

#ifndef ST_TEST_H
#define ST_TEST_H

#ifdef __cplusplus
extern "C" {
#endif

//------ Function Test Config----------
#define DOUT_TEST			0
#define DIN_TEST			0
#define ANOUT_TEST		0
#define ANIN_TEST			1
#define SERIAL_TEST		1
#define PWMOUT_TEST		1
	
void Test();
void HisTest();
void AnalogOutTest();
void DigitalInTest();
void DigitalOutTest();
void AnalogInTest();	
void SerialTest();	
void PWMOutTest();		
	
#ifdef __cplusplus
}
#endif

#endif

