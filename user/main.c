#include "stm32f10x.h"
#include "bsp_led.h"   
#include "bsp_systick.h"
#include "bsp_usart.h"

int main(void)
{

	LED_GPIO_Config();
	SysTick_Init();
	USART_Config();
	printf("are you OK\n\n\n");
	
	while(1)
	{
		
		//µãÁÁ×ÏÉ«µÆ
	}
}
