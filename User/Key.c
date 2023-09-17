#include "stm32f4xx_hal.h"
#include "Key.h"

uint8_t USER_GETKEY0(void)//获取按键的值
{
  uint8_t key=0;
  if(HAL_GPIO_ReadPin(KEY0_GPIO,KEY0_PIN)==0)
  {
    HAL_Delay(20);
    while(HAL_GPIO_ReadPin(KEY0_GPIO,KEY0_PIN)==0);
    HAL_Delay(20);
    key=1;
  }
  return key;
}


uint8_t USER_GETKEY1(void)//获取按键的值
{
  uint8_t key=0;
  if(HAL_GPIO_ReadPin(KEY1_GPIO,KEY1_PIN)==0)
  {
    HAL_Delay(20);
    if(HAL_GPIO_ReadPin(KEY1_GPIO,KEY1_PIN)==0)
    {
      key=1;
    }else{
      key=0;
    }
    while(HAL_GPIO_ReadPin(KEY1_GPIO,KEY1_PIN)==1);//等待松手
  }
  return key;
}


uint8_t USER_GETKEY2(void)//获取按键的值
{
  uint8_t key=0;
  if(HAL_GPIO_ReadPin(KEY2_GPIO,KEY1_PIN)==0)
  {
    HAL_Delay(20);
    if(HAL_GPIO_ReadPin(KEY2_GPIO,KEY1_PIN)==0)
    {
      key=1;
    }else{
      key=0;
    }
    while(HAL_GPIO_ReadPin(KEY2_GPIO,KEY2_PIN)==1);//等待松手
  }
  return key;
}

