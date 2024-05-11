#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        LED_0_Write(1);
        CyDelay(500);
        LED_0_Write(0);
        CyDelay(500);
    }
}

/* [] END OF FILE */
