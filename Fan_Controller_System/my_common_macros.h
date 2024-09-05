#ifndef MY_COMMON_MACROS_H
#define MY_COMMON_MACROS_H

#define SET_BIT(REG, BIT_NUM) (REG |= (1 << BIT_NUM))
#define CLEAR_BIT(REG, BIT_NUM) (REG &= ~(1 << BIT_NUM))
#define GET_BIT(REG, BIT_NUM) (( REG & (1 << BIT_NUM) ) >> BIT_NUM)

#endif
