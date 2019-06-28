//#include "led.h"
//#include "usart1.h"
//#include "oled.h"
//#include "bmp.h"
//#include "includes.h"
//#include "delay.h"
//int i=0;
////开始任务
//#define APP_TASK_START_PRIO	3
//#define APP_TASK_START_STK_SIZE	128
//OS_TCB	AppTaskStartTCB;
//CPU_STK	AppTaskStartStk[APP_TASK_START_STK_SIZE];

//static  void  AppTaskStart  (void *p_arg);

////LED任务

//#define LED_TASK_PRIO		4
//#define LED_TASK_STK_SIZE	128
//OS_TCB	LEDTaskTCB;
//CPU_STK	LEDTaskStk[LED_TASK_STK_SIZE];
//static	void LED_Task(void *p_arg);
//static  void  AppTaskCreate (void);


////usart1任务
//#define USART1_TASK_PRIO		5
//#define USART1_TASK_STK_SIZE	128
//OS_TCB	USART1TaskTCB;
//CPU_STK	USART1TaskStk[USART1_TASK_STK_SIZE];
//static	void USART1_Task(void *p_arg);
//static  void  AppTaskCreate1 (void);
////oled任务

//#define OLED_TASK_PRIO		6
//#define OLED_TASK_STK_SIZE	128
//OS_TCB	OLEDTaskTCB;
//CPU_STK	OLEDTaskStk[USART1_TASK_STK_SIZE];
//static	void OLED_Task(void *p_arg);
//static  void  AppTaskCreate3 (void);

////DELAY
//#define  OS_CFG_TICK_RATE_HZ            200u 
//#define  OS_CFG_TMR_TASK_RATE_HZ         100u  
//#define OS_CFG_TMR_EN                   1u         
//#define OS_CFG_TMR_DEL_EN               1u 
//OS_TMR tmr1;
//void tmr1_callback(OS_TMR *p_tmr, void *p_arg);

////信號量
//OS_SEM LED_SEM;
//OS_SEM TASK_SEM;
//static void AppobjCreate(void);

//static  void  AppTaskCreate2 (void);


// int main(void)
// {	
//	 
//		OS_ERR  err;

//		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 
//	 
////	  usart1_Init();
//		 	LED_Init();
//    OSInit(&err);                                               /* Init uC/OS-III.                                      */

//    OSTaskCreate((OS_TCB     *)&AppTaskStartTCB,                /* Create the start task                                */
//                 (CPU_CHAR   *)"App Task Start",
//                 (OS_TASK_PTR ) AppTaskStart,
//                 (void       *) 0,
//                 (OS_PRIO     ) APP_TASK_START_PRIO,
//                 (CPU_STK    *)&AppTaskStartStk[0],
//                 (CPU_STK_SIZE) APP_TASK_START_STK_SIZE / 10,
//                 (CPU_STK_SIZE) APP_TASK_START_STK_SIZE,
//                 (OS_MSG_QTY  ) 5u,
//                 (OS_TICK     ) 0u,
//                 (void       *) 0,
//                 (OS_OPT      )(OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR),
//                 (OS_ERR     *)&err);

//    OSStart(&err);                                              /* Start multitasking (i.e. give control to uC/OS-III). */

// }

// static  void  AppTaskStart (void *p_arg)
//{
//    CPU_INT32U  cpu_clk_freq;
//    CPU_INT32U  cnts;
//    OS_ERR      err;
//		CPU_SR_ALLOC();

//   (void)p_arg;

//    BSP_Init();                                                 /* Initialize BSP functions                             */
//    CPU_Init();

//    cpu_clk_freq = BSP_CPU_ClkFreq();                           /* Determine SysTick reference freq.                    */
//    cnts = cpu_clk_freq / (CPU_INT32U)OSCfg_TickRate_Hz;        /* Determine nbr SysTick increments                     */
//    OS_CPU_SysTickInit(cnts);                                   /* Init uC/OS periodic time src (SysTick).              */
//  
//#if OS_CFG_STAT_TASK_EN > 0u
//		OSStatTaskCPUUsageInit(&err);  	//统计任务                
//#endif
//	
//#ifdef CPU_CFG_INT_DIS_MEAS_EN		//如果使能了测量中断关闭时间
//			CPU_IntDisMeasMaxCurReset();	
//#endif
//	
//#if	OS_CFG_SCHED_ROUND_ROBIN_EN  //当使用时间片轮转的时候
//		//使能时间片轮转调度功能,时间片长度为1个系统时钟节拍，既1*5=5ms
//		OSSchedRoundRobinCfg(DEF_ENABLED,1,&err);  
//#endif

//		cpu_clk_freq = BSP_CPU_ClkFreq();                           /* Determine SysTick reference freq.                    */
//		cnts = cpu_clk_freq / (CPU_INT32U)OSCfg_TickRate_Hz;        /* Determine nbr SysTick increments                     */
//		OS_CPU_SysTickInit(cnts);                                   /* Init uC/OS periodic time src (SysTick).              */
//	
//#if OS_CFG_STAT_TASK_EN > 0u
//		OSStatTaskCPUUsageInit(&err);                               /* Compute CPU capacity with no task running            */
//#endif
//		CPU_IntDisMeasMaxCurReset();

//		OS_CRITICAL_ENTER(); //进入临界区

//    CPU_IntDisMeasMaxCurReset();
//		

//                                           /* Create Application Tasks                             */
////   AppTaskCreate();
//	 AppTaskCreate1();
//			AppTaskCreate2();
////		AppTaskCreate2();
//	//AppTaskCreate3();
//    AppobjCreate();                                             /* Create Application Objects                           */
//    
//    OS_CRITICAL_EXIT();	//退出临界区
//		     
////		 AppTaskCreate1();
////			AppTaskCreate2();
////		OSTaskDel((OS_TCB *)0,&err);
//}

///*
//*********************************************************************************************************
//*                                      CREATE APPLICATION TASKS
//*
//* Description:  This function creates the application tasks.
//*
//* Arguments  :  none
//*
//* Returns    :  none
//*********************************************************************************************************
//*/

//static  void  AppTaskCreate (void)
//{
//	OS_ERR	err;
//	
//	OSTaskCreate((OS_TCB     *)&LEDTaskTCB,                // Create  task                                
//                 (CPU_CHAR   *)"LED Task",
//                 (OS_TASK_PTR ) LED_Task,
//                 (void       *) 0,
//                 (OS_PRIO     ) LED_TASK_PRIO,
//                 (CPU_STK    *)&LEDTaskStk[0],
//                 (CPU_STK_SIZE) LED_TASK_STK_SIZE / 10,
//                 (CPU_STK_SIZE) LED_TASK_STK_SIZE,
//                 (OS_MSG_QTY  ) 0u,
//                 (OS_TICK     ) 0u,
//                 (void       *) 0,
//                 (OS_OPT      )(OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR),
//                 (OS_ERR     *)&err);
//								 
//}
//static  void  AppTaskCreate1 (void)
//{
//	OS_ERR	err;
//	
//	OSTaskCreate((OS_TCB     *)&USART1TaskTCB,              //  Create  task                                
//                 (CPU_CHAR   *)"USART1 Task",
//                 (OS_TASK_PTR ) USART1_Task,
//                 (void       *) 0,
//                 (OS_PRIO     ) USART1_TASK_PRIO,
//                 (CPU_STK    *)&USART1TaskStk[0],
//                 (CPU_STK_SIZE) USART1_TASK_STK_SIZE / 10,
//                 (CPU_STK_SIZE) USART1_TASK_STK_SIZE,
//                 (OS_MSG_QTY  ) 0u,
//                 (OS_TICK     ) 0u,
//                 (void       *) 0,
//                 (OS_OPT      )(OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR),
//                 (OS_ERR     *)&err);
//								 
//}
//static  void  AppTaskCreate2 (void)
//{	
//	OS_ERR	err;
//	OSTmrCreate (  (OS_TMR               *)&tmr1,	
//                   (CPU_CHAR             *)"tmr1",
//                   (OS_TICK               )0,		
//                   (OS_TICK               )20,		
//                   (OS_OPT                )OS_OPT_TMR_PERIODIC,	
//                   (OS_TMR_CALLBACK_PTR   )tmr1_callback,
//                   (void                 *)0,
//                   (OS_ERR               *)&err	);	
//	OSTmrStart(&tmr1,&err);
//									 
////	for(;;)
////	{
////		OSTimeDly(1000,OS_OPT_TIME_HMSM_STRICT,&err);
////	}
//}
//void tmr1_callback(OS_TMR *p_tmr, void *p_arg)
//{
//	OS_ERR	err;
//	LED_Init();
//	
//	
//	if(i==0)
//	{
//		i++;
//		LED_Set(1);
//		//OSTmrStop(&tmr1,OS_OPT_TMR_NONE,0,&err);
//			//	OSTimeDly(100,OS_OPT_TIME_HMSM_STRICT,&err);
//	}
//	//		OSTmrStart(&tmr1,&err);//?????1
//	else
//	{
//		i=0;
//		LED_Set(0);
//		//OSTimeDly(100,OS_OPT_TIME_HMSM_STRICT,&err);
//	}
//  
//	OSSemPost(&LED_SEM,OS_OPT_POST_1,&err);	
//	//	OSTmrStop(&tmr1,OS_OPT_TMR_NONE,0,&err);
////	printf("%s cnt:%d \r\n",__FUNCTION__,cnt);
//}



//static  void  AppTaskCreate3(void)
//{
//	OS_ERR	err;
//	
//	OSTaskCreate((OS_TCB     *)&OLEDTaskTCB,                 //Create  task                                
//                 (CPU_CHAR   *)"OLED Task",
//                 (OS_TASK_PTR ) OLED_Task,
//                 (void       *) 0,
//                 (OS_PRIO     ) OLED_TASK_PRIO,
//                 (CPU_STK    *)&OLEDTaskStk[0],
//                 (CPU_STK_SIZE) OLED_TASK_STK_SIZE / 10,
//                 (CPU_STK_SIZE) OLED_TASK_STK_SIZE,
//                 (OS_MSG_QTY  ) 0u,
//                 (OS_TICK     ) 0u,
//                 (void       *) 0,
//                 (OS_OPT      )(OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR),
//                 (OS_ERR     *)&err);
//								 
//}

///*
//*********************************************************************************************************
//*                                      CREATE APPLICATION EVENTS
//*
//* Description:  This function creates the application kernel objects.
//*
//* Arguments  :  none
//*
//* Returns    :  none
//*********************************************************************************************************
//*/

//static	void OLED_Task(void *p_arg)
//{
//		OS_ERR	err;
//	p_arg = p_arg;
//	OLED_Init();
//	OLED_DisPlay_On();
//	for(;;)
//	{
//		//OLED_Clear();
//		OLED_DrawCircle(50,30,20);
//		OLED_Refresh();
//	//	delay();
//	OSTimeDly(1,OS_OPT_TIME_HMSM_STRICT,&err);
//	}
//}

//static	void USART1_Task(void *p_arg)
//{
//		OS_ERR	err;
//	p_arg = p_arg;
//	usart1_Init();
//	
//	for(;;)
//	{
//		
//		OSSemPend(&LED_SEM,0,OS_OPT_PEND_BLOCKING,0,&err);
//		usart1_Send(3);
//	}
//}

//static	void LED_Task(void *p_arg)
//{
//	OS_ERR	err;
//	p_arg = p_arg;
//	LED_Init();

//	for(;;)
//	{
////		OSTmrStart(&tmr1,&err);//?????1
//		
//		LED_Set(1);
//		//OSTmrStop(&tmr1,OS_OPT_TMR_NONE,0,&err);
//				OSTimeDly(100,OS_OPT_TIME_HMSM_STRICT,&err);
//	//		OSTmrStart(&tmr1,&err);//?????1
//		LED_Set(0);
//		OSTimeDly(100,OS_OPT_TIME_HMSM_STRICT,&err);	
////		OSTmrStop(&tmr1,OS_OPT_TMR_NONE,0,&err);
//	}
//}

//static void AppobjCreate(){
//	OS_ERR	err;
//	OSSemCreate((OS_SEM  *)&TASK_SEM,
//							(CPU_CHAR *)"TASK SEM",
//							(OS_SEM_CTR)1,
//							(OS_ERR *)&err
//	             );
//	OSSemCreate((OS_SEM  *)&LED_SEM,
//							(CPU_CHAR *)"LED SEM",
//							(OS_SEM_CTR)1,
//							(OS_ERR *)&err
//	             );
//}


#include "dht11.h"
#include "oled.h"
#include "ds1302.h"
#include "delay.h"
#include "sys.h"
#include "usart1.h"
int main()
{
	u8 buffer[5];
  double hum;
  double temp;
	u8 time[15];
   delay_init();

    usart1_Init();
    DS1302_Init();
	delay_ms(10);
	DS1302_Write_Time();
    while (1)
    {
			DS1302_Get_Time(time);
			printf("%d%d%d%d年%d%d月%d%d日 ", time[0],time[1],time[2],time[3],time[4],time[5],time[6],time[7]);
			printf("%d%d时%d%d分%d%d秒 星期%d\r\n", time[9],time[10],time[11],time[12],time[13],time[14],time[8]);
			delay_ms(1000);
        if (dht11_read_data(buffer) == 0)
        {
            hum = buffer[0] + buffer[1] / 10.0;
            temp = buffer[2] + buffer[3] / 10.0;
        }
        printf("___{\"temperature\": %.2f, \"humidness\": %.2f}___\n", temp, hum);
        delay_us(2000000);
        delay_us(2000000);
    }
}
