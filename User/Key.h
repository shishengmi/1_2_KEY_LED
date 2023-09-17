#ifndef KEY_H__
#define KEY_H__
#endif

#define KEY0_GPIO GPIOE
#define KEY1_GPIO GPIOE
#define KEY2_GPIO GPIOE

#define KEY0_PIN GPIO_PIN_4
#define KEY1_PIN GPIO_PIN_3
#define KEY2_PIN GPIO_PIN_2

uint8_t USER_GETKEY0(void);
uint8_t USER_GETKEY1(void);
uint8_t USER_GETKEY2(void);

