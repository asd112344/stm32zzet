#include "led.h"

/********************************************************
@������		��	LED_Init
@ʱ��			��	2016-03-16
@����			��	��ʼ������
@�������	��	��
@����ֵ		��	��
@��ע			��	PB12
********************************************************/
void LED_Init(void)
{
		GPIO_InitTypeDef  GPIO_InitStructure;
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO, ENABLE);	 //ʹ��A�˿�ʱ��
	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_15;	 
 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//�ٶ�50MHz
 	GPIO_Init(GPIOA, &GPIO_InitStructure);	  //��ʼ��GPIOA
 	GPIO_SetBits(GPIOA,GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_15);	
	
//	GPIO_InitTypeDef	GPIO_InitStructure;
//	
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
//	
//	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_15;
//	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
//	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
//	GPIO_Init(GPIOA,&GPIO_InitStructure);
//	
//	GPIO_SetBits(GPIOA,GPIO_Pin_15);
}

/********************************************************
@������		��	LED_Set
@ʱ��			��	2016-03-17
@����			��	����LED1����
@�������	��	n=1����   n=0����
@����ֵ		��	��
@��ע			��	
********************************************************/
void LED_Set(u8 n)
{
//	if(n)
//	{
//		GPIO_ResetBits(GPIOA,GPIO_Pin_15);
//	}
//	else
//	{
//		GPIO_SetBits(GPIOA,GPIO_Pin_15);
//	}
	n?GPIO_ResetBits(GPIOA,GPIO_Pin_15):GPIO_SetBits(GPIOA,GPIO_Pin_15);
}


