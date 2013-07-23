/*
    FreeRTOS V7.5.0 - Copyright (C) 2013 Real Time Engineers Ltd.

    VISIT http://www.FreeRTOS.org TO ENSURE YOU ARE USING THE LATEST VERSION.

    ***************************************************************************
     *                                                                       *
     *    FreeRTOS provides completely free yet professionally developed,    *
     *    robust, strictly quality controlled, supported, and cross          *
     *    platform software that has become a de facto standard.             *
     *                                                                       *
     *    Help yourself get started quickly and support the FreeRTOS         *
     *    project by purchasing a FreeRTOS tutorial book, reference          *
     *    manual, or both from: http://www.FreeRTOS.org/Documentation        *
     *                                                                       *
     *    Thank you!                                                         *
     *                                                                       *
    ***************************************************************************

    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation >>!AND MODIFIED BY!<< the FreeRTOS exception.

    >>! NOTE: The modification to the GPL is included to allow you to distribute
    >>! a combined work that includes FreeRTOS without being obliged to provide
    >>! the source code for proprietary components outside of the FreeRTOS
    >>! kernel.

    FreeRTOS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE.  Full license text is available from the following
    link: http://www.freertos.org/a00114.html

    1 tab == 4 spaces!

    ***************************************************************************
     *                                                                       *
     *    Having a problem?  Start by reading the FAQ "My application does   *
     *    not run, what could be wrong?"                                     *
     *                                                                       *
     *    http://www.FreeRTOS.org/FAQHelp.html                               *
     *                                                                       *
    ***************************************************************************

    http://www.FreeRTOS.org - Documentation, books, training, latest versions,
    license and Real Time Engineers Ltd. contact details.

    http://www.FreeRTOS.org/plus - A selection of FreeRTOS ecosystem products,
    including FreeRTOS+Trace - an indispensable productivity tool, a DOS
    compatible FAT file system, and our tiny thread aware UDP/IP stack.

    http://www.OpenRTOS.com - Real Time Engineers ltd license FreeRTOS to High
    Integrity Systems to sell under the OpenRTOS brand.  Low cost OpenRTOS
    licenses offer ticketed support, indemnification and middleware.

    http://www.SafeRTOS.com - High Integrity Systems also provide a safety
    engineered and independently SIL3 certified version for use in safety and
    mission critical applications that require provable dependability.

    1 tab == 4 spaces!
*/

/*-----------------------------------------------------------
 * Simple IO routines to control the LEDs.
 *-----------------------------------------------------------*/

/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"

/* Demo includes. */
#include "partest.h"

/* Hardware specifics. */
#include "iodefine.h"

/*-----------------------------------------------------------*/

void vParTestInitialise( void )
{
	/* Initialise P4_10 for LED1. */
	PORT4.PMCn.BIT.PMCn10 = 0;
	PORT4.Pn.BIT.Pn10 = 1;
	PORT4.PMn.BIT.PMn10 = 0;
	PORT4.PIPCn.BIT.PIPCn10 = 0;

	/* Initialise P4_11 for LED2. */
	PORT4.PMCn.BIT.PMCn11 = 0;
	PORT4.Pn.BIT.Pn11 = 1;
	PORT4.PMn.BIT.PMn11 = 0;
	PORT4.PIPCn.BIT.PIPCn11 = 0;
}
/*-----------------------------------------------------------*/

void vParTestSetLED( unsigned long ulLED, signed long xValue )
{
	/* A high value turns the LED off. */
	xValue = !xValue;

	taskENTER_CRITICAL();
	{
		if( ulLED == 0 )
		{
			PORT4.Pn.BIT.Pn10 = xValue;
		}

		if( ulLED == 1 )
		{
			PORT4.Pn.BIT.Pn11 = xValue;
		}
	}
	taskEXIT_CRITICAL();
}
/*-----------------------------------------------------------*/

void vParTestToggleLED( unsigned long ulLED )
{
	taskENTER_CRITICAL();
	{
		if( ulLED == 0 )
		{
			PORT4.Pn.BIT.Pn10 = !PORT4.Pn.BIT.Pn10;
		}

		if( ulLED == 1 )
		{
			PORT4.Pn.BIT.Pn11 = !PORT4.Pn.BIT.Pn11;
		}
	}
	taskEXIT_CRITICAL();
}
/*-----------------------------------------------------------*/
