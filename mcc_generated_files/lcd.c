/**
  LCD Generated Driver File
  
  @Company
    Microchip Technology Inc.

  @File Name
    lcd.c

  @Summary
    This is the generated driver implementation file for the LCD driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides implementations for driver APIs for LCD.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.4
        Device            :  PIC16F19176
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

/**
  Section: Included Files
*/

#include <xc.h>
#include "lcd.h"

/**
  Section: LCD APIs
*/

void LCD_Initialize(void)
{
    // Disable module before configuring
    LCDCONbits.LCDEN = 0;

    // set the LCD to the options selected in the User Interface
    // LP 1:7; WFT Type-A waveform; 
    LCDPS = 0x06;
    
    // LCDCST Max contrast (Min Resistance); 
    LCDREF = 0x00;
    
    // LRLAP disabled; LRLBP disabled; LCDIRI disabled; LRLAT Always B Power mode; 
    LCDRL = 0x00;
    
    // BIAS 2.80V; EN5V disabled; LPEN disabled; 
    LCDVCON1 = 0x00;
    
    // CPWDT disabled; LCDVSRC All voltage sources disabled; 
    LCDVCON2 = 0x80;
    
    //SegCom Data Registers
	LCDDATA0 = 0x00;
	LCDDATA1 = 0x00;
	LCDDATA2 = 0x00;
	LCDDATA3 = 0x00;
	LCDDATA4 = 0x00;
	LCDDATA6 = 0x00;
	LCDDATA7 = 0x00;
	LCDDATA8 = 0x00;
	LCDDATA9 = 0x00;
	LCDDATA10 = 0x00;
	LCDDATA12 = 0x00;
	LCDDATA13 = 0x00;
	LCDDATA14 = 0x00;
	LCDDATA15 = 0x00;
	LCDDATA16 = 0x00;
	LCDDATA18 = 0x00;
	LCDDATA19 = 0x00;
	LCDDATA20 = 0x00;
	LCDDATA21 = 0x00;
	LCDDATA22 = 0x00;
	LCDDATA24 = 0x00;
	LCDDATA25 = 0x00;
	LCDDATA26 = 0x00;
	LCDDATA27 = 0x00;
	LCDDATA28 = 0x00;
	LCDDATA30 = 0x00;
	LCDDATA31 = 0x00;
	LCDDATA32 = 0x00;
	LCDDATA33 = 0x00;
	LCDDATA34 = 0x00;
	LCDDATA36 = 0x00;
	LCDDATA37 = 0x00;
	LCDDATA38 = 0x00;
	LCDDATA39 = 0x00;
	LCDDATA40 = 0x00;
	LCDDATA42 = 0x00;
	LCDDATA43 = 0x00;
	LCDDATA44 = 0x00;
	LCDDATA45 = 0x00;
	LCDDATA46 = 0x00;
    
	//Enable used segments
	LCDSE0 = 0xFF;
	LCDSE1 = 0x00;
	LCDSE2 = 0x00;
	LCDSE3 = 0x00;
	LCDSE4 = 0x00;
	LCDSE5 = 0x00;
	
    // CS SOSC; SLPEN disabled; WERR No LCD Write Error; LMUX Static COM0; LCDEN enabled; 
    LCDCON = 0xD1;
	
}

void LCD_Enable (void)
{
    LCDCONbits.LCDEN = 1;
}

void LCD_Disable (void)
{
    LCDCONbits.LCDEN = 0;    
}

void LCD_EnableSleepMode (void)
{
    LCDCONbits.SLPEN = 1;
}

void LCD_DisableSleepMode (void) 
{
    LCDCONbits.SLPEN = 0;    
}

void LCD_SetContrast (unsigned int value)
{
    LCDREFbits.LCDCST = value;
}

void LCD_SetIntervalAPowerMode (unsigned int value)
{
    LCDRLbits.LRLAP = value;      
}

void LCD_SetIntervalBPowerMode (unsigned int value)
{
    LCDRLbits.LRLBP = value;      
}

void LCD_SetPowerDistribution (unsigned int value)
{
    LCDRLbits.LRLAT = value;       
}

bool LCD_IsActive (void)
{
    return LCDPSbits.LCDA;
}

void LCD_DisplayOn_DIGIT_SYM00Num()
{
	DIGIT_SYM00AON;DIGIT_SYM00BON;DIGIT_SYM00CON;DIGIT_SYM00DON;DIGIT_SYM00EON;DIGIT_SYM00FON;DIGIT_SYM00GON;
}

void LCD_DisplayOff_DIGIT_SYM00Num()
{
	DIGIT_SYM00AOFF;DIGIT_SYM00BOFF;DIGIT_SYM00COFF;DIGIT_SYM00DOFF;DIGIT_SYM00EOFF;DIGIT_SYM00FOFF;DIGIT_SYM00GOFF;
}

void LCD_DIGIT_SYM00Num (unsigned char num) 
{
    switch (num)
    {
        case 0: DIGIT_SYM00AON;   DIGIT_SYM00BON;   DIGIT_SYM00CON;   DIGIT_SYM00DON;   DIGIT_SYM00EON;   DIGIT_SYM00FON;   DIGIT_SYM00GOFF;  break;
        case 1: DIGIT_SYM00AOFF;  DIGIT_SYM00BON;   DIGIT_SYM00CON;   DIGIT_SYM00DOFF;  DIGIT_SYM00EOFF;  DIGIT_SYM00FOFF;  DIGIT_SYM00GOFF;  break;
        case 2: DIGIT_SYM00AON;   DIGIT_SYM00BON;   DIGIT_SYM00COFF;  DIGIT_SYM00DON;   DIGIT_SYM00EON;   DIGIT_SYM00FOFF;  DIGIT_SYM00GON;   break;
        case 3: DIGIT_SYM00AON;   DIGIT_SYM00BON;   DIGIT_SYM00CON;   DIGIT_SYM00DON;   DIGIT_SYM00EOFF;  DIGIT_SYM00FOFF;  DIGIT_SYM00GON;   break;
        case 4: DIGIT_SYM00AOFF;  DIGIT_SYM00BON;   DIGIT_SYM00CON;   DIGIT_SYM00DOFF;  DIGIT_SYM00EOFF;  DIGIT_SYM00FON;   DIGIT_SYM00GON;   break;
        case 5: DIGIT_SYM00AON;   DIGIT_SYM00BOFF;  DIGIT_SYM00CON;   DIGIT_SYM00DON;   DIGIT_SYM00EOFF;  DIGIT_SYM00FON;   DIGIT_SYM00GON;   break;
        case 6: DIGIT_SYM00AON;   DIGIT_SYM00BOFF;  DIGIT_SYM00CON;   DIGIT_SYM00DON;   DIGIT_SYM00EON;   DIGIT_SYM00FON;   DIGIT_SYM00GON;   break;
        case 7: DIGIT_SYM00AON;   DIGIT_SYM00BON;   DIGIT_SYM00CON;   DIGIT_SYM00DOFF;  DIGIT_SYM00EOFF;  DIGIT_SYM00FOFF;  DIGIT_SYM00GOFF;  break;
        case 8: DIGIT_SYM00AON;   DIGIT_SYM00BON;   DIGIT_SYM00CON;   DIGIT_SYM00DON;   DIGIT_SYM00EON;   DIGIT_SYM00FON;   DIGIT_SYM00GON;   break;
        case 9: DIGIT_SYM00AON;   DIGIT_SYM00BON;   DIGIT_SYM00CON;   DIGIT_SYM00DON;   DIGIT_SYM00EOFF;  DIGIT_SYM00FON;   DIGIT_SYM00GON;   break;

        default: DIGIT_SYM00AOFF; DIGIT_SYM00BOFF; DIGIT_SYM00COFF; DIGIT_SYM00DOFF; DIGIT_SYM00EOFF; DIGIT_SYM00FOFF; DIGIT_SYM00GOFF;
    }    
}

// end of file