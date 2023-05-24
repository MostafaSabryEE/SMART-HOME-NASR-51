/*
 * BIT_MATH.h
 *
 * Created:
 *  Author: Mostafa Sabry
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/*--------------------Set Bit Function--------------------*/
#define SET_BIT(REG,BIT_NUM) REG|=(1<<BIT_NUM)

/*-------------------Clear Bit Function-------------------*/
#define CLR_BIT(REG,BIT_NUM) REG&=(~(1<<BIT_NUM))

/*-------------------Toggle Bit Function-------------------*/
#define TOG_BIT(REG,BIT_NUM) REG^=(1<<BIT_NUM)

/*-------------------Read Bit Function-------------------*/
#define GET_BIT(REG,BIT_NUM) ((REG>>BIT_NUM)&1)

#endif