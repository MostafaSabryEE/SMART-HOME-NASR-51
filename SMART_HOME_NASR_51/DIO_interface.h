/*
 * DIO_interface.h
 *
 * Created: 31-Mar-23 1:46:52 PM
 *  Author: Group 1
 */ 

             
#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
           /******************** MACROS FOR PORT ***********************/
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3
          /********************* MACROS FOR PIN DIRECTION ***************/
#define DIO_PIN_INPUT 1
#define DIO_PIN_OUTPUT 0
          /********************* MACROS FOR PIN ***************/
#define DIO_PIN0   0
#define DIO_PIN1   1 
#define DIO_PIN2   2
#define DIO_PIN3   3
#define DIO_PIN4   4
#define DIO_PIN5   5
#define DIO_PIN6   6
#define DIO_PIN7   7
          /********************* MACROS FOR PIN VALUE ********************/
#define DIO_PIN_HIGH 1
#define DIO_PIN_LOW  0

          /********************* DIO FUNCTIONS PROTOTYPE ********************/

void DIO_setPinDirection(u8 PortId, u8 PinId, u8 PinDirection);

void DIO_setPinValue(u8 PortId, u8 PinId, u8 PinValue);

void DIO_getPinValue(u8 PortId, u8 PinId, u8 *PinValue);

void DIO_togglePinValue(u8 PortId, u8 PinId);

void DIO_activePullUpResistor(u8 PortId, u8 PinId);



#endif /* DIO_INTERFACE_H_ */