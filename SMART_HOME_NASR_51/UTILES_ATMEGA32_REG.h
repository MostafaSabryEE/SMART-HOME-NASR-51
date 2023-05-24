/*
 * ATMEGA32_REG.h
 *
 * Created: 3/31/2023 3:13:36 PM
 *  Author: Group 1
 */ 


#ifndef ATMEGA32_REG_H_
#define ATMEGA32_REG_H_

/*--------------------DDRs Memory Registers--------------------*/
#define DDRA (*(volatile u8*)0x3A)
#define DDRB (*(volatile u8*)0x37)
#define DDRC (*(volatile u8*)0x34)
#define DDRD (*(volatile u8*)0x31)

/*--------------------PORTs Memory Registers--------------------*/
#define PORTA (*(volatile u8*)0x3B)
#define PORTB (*(volatile u8*)0x38)
#define PORTC (*(volatile u8*)0x35)
#define PORTD (*(volatile u8*)0x32)

/*--------------------PINs Memory Registers--------------------*/
#define PINA (*(volatile u8*)0x39)
#define PINB (*(volatile u8*)0x36)
#define PINC (*(volatile u8*)0x33)
#define PIND (*(volatile u8*)0x30)

/*--------------------External Interrupt Registers--------------------*/
// MCU Control Register
#define MCUCR (*(volatile u8*)0x55)
// MCU Control and Status Register
#define MCUCSR (*(volatile u8*)0x54)
// General Interrupt Control Register
#define GICR (*(volatile u8*)0x5B)
// General Interrupt Flag Register
#define GIFR (*(volatile u8*)0x5A)
// Register for input pins
#define SREG (*(volatile u8*)0x5f)

/*--------------------ADC Registers--------------------*/
// ADC Multiplexer Selection Register
#define ADMUX (*(volatile u8*)0x27)
// ADC Control and Status Register A
#define ADCSRA (*(volatile u8*)0x26)
// The ADC Data Register
#define ADC_u16 (*(volatile u8*)0x24)  // ADCL and ADCH
// Special FunctionIO Register
#define SFIOR (*(volatile u8*)0x50)

/*--------------------TIMER0 Registers--------------------*/
// Timer/Counter Control Register
#define TCCR0 (*(volatile u8*)0x53)
// Timer/Counter Register
#define TCNT0 (*(volatile u8*)0x52)
// Output Compare Register
#define OCR0 (*(volatile u8*)0x5c)
// Timer/Counter Interrupt Mask Register
#define TIMSK (*(volatile u8*)0x59)
// Timer/Counter Interrupt Flag Register
#define TIFR (*(volatile u8*)0x58)

/*--------------------TIMER1 Registers--------------------*/
// Timer/Counter1 Control Register A
#define TCCR1A (*(volatile u8*)0x4F)
//Timer/Counter1 Control Register B
#define TCCR1B (*(volatile u8*)0x4E)
//Timer/Counter1 – TCNT1H and TCNT1L
#define TCNT1L_u16 (*(volatile u16*)0x4C)
// Output Compare Register 1 A – OCR1AH and OCR1AL
#define OCR1AL_u16 (*(volatile u16*)0x4A)
// Output Compare Register 1 B – OCR1BH and OCR1BL
#define OCR1BL_u16 (*(volatile u16*)0x48)
// Input Capture Register 1 – ICR1H and ICR1L
#define ICR1L_u16 (*(volatile u16*)0x46)
/*
// Timer/Counter Interrupt Mask Register – TIMSK
#define TIMSK (*(volatile u8*)0x59)  // Defined in Timer0
// Timer/Counter Interrupt Flag Register – TIFR
#define TIFR (*(volatile u8*)0x58)   // Defined in Timer0
*/

/*--------------------UART Registers--------------------*/
// USART I/O Data Register – UDR
#define UDR (*(volatile u8*)0x2C)
// USART Control and Status Register A – UCSRA
#define UCSRA (*(volatile u8*)0x2B)
// USART Control and Status Register B – UCSRB
#define UCSRB (*(volatile u8*)0x2A)
// USART Control and Status Register C – UCSRC
#define UCSRC (*(volatile u8*)0x40)
// USART Baud Rate Registers – UBRRL and UBRRH
#define UBRRL (*(volatile u8*)0x29)
#define UBRRH (*(volatile u8*)0x40)

/*--------------------SPI Registers--------------------*/
// SPI Control Register – SPCR
#define SPCR (*(volatile u8*)0x2D)
// SPI Status Register – SPSR
#define SPSR (*(volatile u8*)0x2E)
// SPI Data Register – SPDR
#define SPDR (*(volatile u8*)0x2F)
 
/*------------------EEPROM Registers------------------*/
// The EEPROM Address Register – EEARH and EEARL
#define EEAR_u16    (*(volatile u16*) 0x3E)
// The EEPROM Data Register – EEDR
#define EEDR        (*(volatile u8*) 0x3D)
// The EEPROM Control Register – EECR
#define EECR        (*(volatile u8*) 0x3C)
// Store Program Memory Control Register – SPMCR
#define SPMCR       (*(volatile u8*) 0x57)

#endif /* ATMEGA32_REG_H_ */