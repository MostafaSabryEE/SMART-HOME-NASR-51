/*
 * EEPROM_program.c
 *
 * Created: 24-May-23 11:58:28 AM
 *  Author: Group 1
 */ 
/* UTILES */
#include "UTILES_STD_TYPES.h"
#include "UTILES_BIT_MATH.h"
#include "UTILES_ATMEGA32_REG.h"

/* MCAL */
#include "DIO_interface.h"
#include "EEPROM_interface.h"


void EEPROM_writeByte(u16 byteAddress, u8 data){
	
	/*block on the EEWE bit inside the EECR register to make sure 
	that writing operation has ended (wait until its value become zero)*/
	while(GET_BIT(EECR,1)==1);
	//update the EEAR register with the address inside EEPROM where data will be written
	EEAR_u16=byteAddress;
	//update EEDR register with the data that will be written inside the specified address 
	EEDR=data;
	/*When EEMWE is set, setting EEWE within four clock cycles 
	will write data to the EEPROM */
	SET_BIT(EECR,2);
    SET_BIT(EECR,1);
}
u8 EEPROM_readByte(u16 byteAddress){
	while(GET_BIT(EECR,1)==1);
	EEAR_u16=byteAddress;
	SET_BIT(EECR,0);
	return EEDR;
}



//void EEPROM_init(void){

//}

//while(GET_BIT(SPMCR,0)==1);

//disable ready interrupt inside the EEPROM control register
    //CLR_BIT(EECR,3);   // 2
	//CLR_BIT(EECR,1);
	//global interrupt disable
	//CLR_BIT(SREG,7);   //3
/*global interrupt disable to prevent any interrupt coming during the next four
	clock cycles which will cause writing inside EEPROM to fail*/
	//CLR_BIT(SREG,7);
	// delay command to wait four clock cycles 
	//_delay_ms(0.0000625);  // 1	