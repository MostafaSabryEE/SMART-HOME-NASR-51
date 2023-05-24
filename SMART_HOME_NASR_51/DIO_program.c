/*
 * CFile1.c
 *
 * Created: 31-Mar-23 1:43:03 PM
 *  Author: Group 1
 */ 
/* UTILES */
#include "UTILES_STD_TYPES.h"
#include "UTILES_BIT_MATH.h"
#include "UTILES_ATMEGA32_REG.h"

/* MCAL */
#include "DIO_interface.h"

/* HAL */



void DIO_setPinDirection(u8 PortId, u8 PinId, u8 PinDirection){
	
	switch(PortId){
		case DIO_PORTA: // PORTA
		if(DIO_PIN_OUTPUT == PinDirection){
			SET_BIT(DDRA,PinId);
		}else if(DIO_PIN_INPUT == PinDirection){
			CLR_BIT(DDRA,PinId);
		}
		break;
		
		case DIO_PORTB: // PORTB
		if(DIO_PIN_OUTPUT == PinDirection){
			SET_BIT(DDRB,PinId);
			}else if(DIO_PIN_INPUT == PinDirection){
			CLR_BIT(DDRB,PinId);
		}
		break;
		
		case DIO_PORTC: // PORTC
		if(DIO_PIN_OUTPUT == PinDirection){
			SET_BIT(DDRC,PinId);
			}else if(DIO_PIN_INPUT == PinDirection){
			CLR_BIT(DDRC,PinId);
		}
		break;
		
		case DIO_PORTD: // PORTD
		if(DIO_PIN_OUTPUT == PinDirection){
			SET_BIT(DDRD,PinId);
			}else if(DIO_PIN_INPUT == PinDirection){
			CLR_BIT(DDRD,PinId);
		}
		break;
	}
}

void DIO_setPinValue(u8 PortId, u8 PinId, u8 PinValue){
	switch(PortId){
		case DIO_PORTA:
		if(DIO_PIN_HIGH == PinValue){
			SET_BIT(PORTA,PinId);
		}else if(DIO_PIN_LOW == PinValue){
			CLR_BIT(PORTA,PinId);
		}
		break;
		
		case DIO_PORTB:
		if(DIO_PIN_HIGH == PinValue){
			SET_BIT(PORTB,PinId);
			}else if(DIO_PIN_LOW == PinValue){
			CLR_BIT(PORTB,PinId);
		}
		break;
		
		case DIO_PORTC:
		if(DIO_PIN_HIGH == PinValue){
			SET_BIT(PORTC,PinId);
			}else if(DIO_PIN_LOW == PinValue){
			CLR_BIT(PORTC,PinId);
		}
		break;
		
		case DIO_PORTD:
		if(DIO_PIN_HIGH == PinValue){
			SET_BIT(PORTD,PinId);
			}else if(DIO_PIN_LOW == PinValue){
			CLR_BIT(PORTD,PinId);
		}
		break;
	}
}

void DIO_getPinValue(u8 PortId, u8 PinId, u8 *PinValue){
	
	switch(PortId){
		
		case DIO_PORTA:
		*PinValue = GET_BIT(PINA,PinId);
		break;
		
		case DIO_PORTB:
		*PinValue = GET_BIT(PINB,PinId);
		break;
		
		case DIO_PORTC:
		*PinValue = GET_BIT(PINC,PinId);
		break;
		
		case DIO_PORTD:
		*PinValue = GET_BIT(PIND,PinId);
		break;
		
	}
	
}

void DIO_togglePinValue(u8 PortId, u8 PinId){
	
	switch(PortId){
		
		case DIO_PORTA:
		TOG_BIT(PORTA,PinId);
		break;
		
		case DIO_PORTB:
		TOG_BIT(PORTB,PinId);
		break;
		
		case DIO_PORTC:
		TOG_BIT(PORTC,PinId);
		break;
		
		case DIO_PORTD:
		TOG_BIT(PORTD,PinId);
		break;
		
	}
	
}

void DIO_activePullUpResistor(u8 PortId, u8 PinId){
	switch(PortId){
		
		case DIO_PORTA:
		SET_BIT(PORTA,PinId);
		break;
		
		case DIO_PORTB:
		SET_BIT(PORTB,PinId);
		break;
		
		case DIO_PORTC:
		SET_BIT(PORTC,PinId);
		break;
		
		case DIO_PORTD:
		SET_BIT(PORTD,PinId);
		break;
		
	}
}

