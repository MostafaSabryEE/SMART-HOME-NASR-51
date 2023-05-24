/*
 * EEPROM_interface.h
 *
 * Created: 24-May-23 11:57:43 AM
 *  Author: Group 1
 */ 


#ifndef EEPROM_INTERFACE_H_ 
#define EEPROM_INTERFACE_H_

//void EEPROM_init(void);
void EEPROM_writeByte(u16 byteAddress, u8 data);
u8 EEPROM_readByte(u16 byteAddress);



#endif /* EEPROM_INTERFACE_H_ */