/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    __enable_irq(); /* Enable global interrupts. */
    /* Enable CM4.  CY_CORTEX_M4_APPL_ADDR must be updated if CM4 memory layout is changed. */
    Cy_SysEnableCM4(CY_CORTEX_M4_APPL_ADDR); 

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    mUART_Start();
    for(;;)
    {
        //아두이노 연동한 사인파 표시
        static float angleR = 0, angleS = 120, angleT = 240;
        angleR+=1;
        angleS+=1;
        angleT+=1;
        float valueR = sin(angleR * 3.14 / 180);
        float valueS = sin(angleS * 3.14 / 180);
        float valueT = sin(angleT * 3.14 / 180);
        printf("%7.3f\t%7.3f\t%7.3f\t\n\r", valueR, valueS, valueT);
        /* Place your application code here. */
        /* 통신을 이용한 
        for(int i = 1; i < 10; i++) {
            printf("2 x %d = %d\n\r", i, 2*i);
        }
        CyDelay(500);
        */
    }
}

/* [] END OF FILE */
