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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16F19176
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
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
    // LP 1:1; WFT Type-A waveform; 
    LCDPS = 0x00;
    
    // LCDCST Max contrast (Min Resistance); 
    LCDREF = 0x00;
    
    // LRLAP Low; LRLBP High; LCDIRI disabled; LRLAT Always B Power mode; 
    LCDRL = 0x70;
    
    // BIAS 3.00V; EN5V disabled; LPEN disabled; 
    LCDVCON1 = 0x02;
    
    // CPWDT disabled; LCDVSRC Internal Resistor Ladder + Vdd for VLCD3; 
    LCDVCON2 = 0x82;
    
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
	LCDSE0 = 0xEF;
	LCDSE1 = 0x0F;
	LCDSE2 = 0x98;
	LCDSE3 = 0xFF;
	LCDSE4 = 0x07;
	LCDSE5 = 0x00;
	
    // CS LFINTOSC; SLPEN disabled; WERR No LCD Write Error; LMUX 1/4 COM(3:0); LCDEN enabled; 
    LCDCON = 0xC4;
	
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

void LCD_DisplayOn_DIG_SYM00Num()
{
	DIG_SYM00AON;DIG_SYM00BON;DIG_SYM00CON;DIG_SYM00DON;DIG_SYM00EON;DIG_SYM00FON;DIG_SYM00GON;
}

void LCD_DisplayOff_DIG_SYM00Num()
{
	DIG_SYM00AOFF;DIG_SYM00BOFF;DIG_SYM00COFF;DIG_SYM00DOFF;DIG_SYM00EOFF;DIG_SYM00FOFF;DIG_SYM00GOFF;
}

void LCD_DIG_SYM00Num (unsigned char num) 
{
    switch (num)
    {
        case 0: DIG_SYM00AON;   DIG_SYM00BON;   DIG_SYM00CON;   DIG_SYM00DON;   DIG_SYM00EON;   DIG_SYM00FON;   DIG_SYM00GOFF;  break;
        case 1: DIG_SYM00AOFF;  DIG_SYM00BON;   DIG_SYM00CON;   DIG_SYM00DOFF;  DIG_SYM00EOFF;  DIG_SYM00FOFF;  DIG_SYM00GOFF;  break;
        case 2: DIG_SYM00AON;   DIG_SYM00BON;   DIG_SYM00COFF;  DIG_SYM00DON;   DIG_SYM00EON;   DIG_SYM00FOFF;  DIG_SYM00GON;   break;
        case 3: DIG_SYM00AON;   DIG_SYM00BON;   DIG_SYM00CON;   DIG_SYM00DON;   DIG_SYM00EOFF;  DIG_SYM00FOFF;  DIG_SYM00GON;   break;
        case 4: DIG_SYM00AOFF;  DIG_SYM00BON;   DIG_SYM00CON;   DIG_SYM00DOFF;  DIG_SYM00EOFF;  DIG_SYM00FON;   DIG_SYM00GON;   break;
        case 5: DIG_SYM00AON;   DIG_SYM00BOFF;  DIG_SYM00CON;   DIG_SYM00DON;   DIG_SYM00EOFF;  DIG_SYM00FON;   DIG_SYM00GON;   break;
        case 6: DIG_SYM00AON;   DIG_SYM00BOFF;  DIG_SYM00CON;   DIG_SYM00DON;   DIG_SYM00EON;   DIG_SYM00FON;   DIG_SYM00GON;   break;
        case 7: DIG_SYM00AON;   DIG_SYM00BON;   DIG_SYM00CON;   DIG_SYM00DOFF;  DIG_SYM00EOFF;  DIG_SYM00FOFF;  DIG_SYM00GOFF;  break;
        case 8: DIG_SYM00AON;   DIG_SYM00BON;   DIG_SYM00CON;   DIG_SYM00DON;   DIG_SYM00EON;   DIG_SYM00FON;   DIG_SYM00GON;   break;
        case 9: DIG_SYM00AON;   DIG_SYM00BON;   DIG_SYM00CON;   DIG_SYM00DON;   DIG_SYM00EOFF;  DIG_SYM00FON;   DIG_SYM00GON;   break;

        default: DIG_SYM00AOFF; DIG_SYM00BOFF; DIG_SYM00COFF; DIG_SYM00DOFF; DIG_SYM00EOFF; DIG_SYM00FOFF; DIG_SYM00GOFF;
    }    
}

void LCD_DisplayOn_DIG_SYM01Num()
{
	DIG_SYM01AON;DIG_SYM01BON;DIG_SYM01CON;DIG_SYM01DON;DIG_SYM01EON;DIG_SYM01FON;DIG_SYM01GON;
}

void LCD_DisplayOff_DIG_SYM01Num()
{
	DIG_SYM01AOFF;DIG_SYM01BOFF;DIG_SYM01COFF;DIG_SYM01DOFF;DIG_SYM01EOFF;DIG_SYM01FOFF;DIG_SYM01GOFF;
}

void LCD_DIG_SYM01Num (unsigned char num) 
{
    switch (num)
    {
        case 0: DIG_SYM01AON;   DIG_SYM01BON;   DIG_SYM01CON;   DIG_SYM01DON;   DIG_SYM01EON;   DIG_SYM01FON;   DIG_SYM01GOFF;  break;
        case 1: DIG_SYM01AOFF;  DIG_SYM01BON;   DIG_SYM01CON;   DIG_SYM01DOFF;  DIG_SYM01EOFF;  DIG_SYM01FOFF;  DIG_SYM01GOFF;  break;
        case 2: DIG_SYM01AON;   DIG_SYM01BON;   DIG_SYM01COFF;  DIG_SYM01DON;   DIG_SYM01EON;   DIG_SYM01FOFF;  DIG_SYM01GON;   break;
        case 3: DIG_SYM01AON;   DIG_SYM01BON;   DIG_SYM01CON;   DIG_SYM01DON;   DIG_SYM01EOFF;  DIG_SYM01FOFF;  DIG_SYM01GON;   break;
        case 4: DIG_SYM01AOFF;  DIG_SYM01BON;   DIG_SYM01CON;   DIG_SYM01DOFF;  DIG_SYM01EOFF;  DIG_SYM01FON;   DIG_SYM01GON;   break;
        case 5: DIG_SYM01AON;   DIG_SYM01BOFF;  DIG_SYM01CON;   DIG_SYM01DON;   DIG_SYM01EOFF;  DIG_SYM01FON;   DIG_SYM01GON;   break;
        case 6: DIG_SYM01AON;   DIG_SYM01BOFF;  DIG_SYM01CON;   DIG_SYM01DON;   DIG_SYM01EON;   DIG_SYM01FON;   DIG_SYM01GON;   break;
        case 7: DIG_SYM01AON;   DIG_SYM01BON;   DIG_SYM01CON;   DIG_SYM01DOFF;  DIG_SYM01EOFF;  DIG_SYM01FOFF;  DIG_SYM01GOFF;  break;
        case 8: DIG_SYM01AON;   DIG_SYM01BON;   DIG_SYM01CON;   DIG_SYM01DON;   DIG_SYM01EON;   DIG_SYM01FON;   DIG_SYM01GON;   break;
        case 9: DIG_SYM01AON;   DIG_SYM01BON;   DIG_SYM01CON;   DIG_SYM01DON;   DIG_SYM01EOFF;  DIG_SYM01FON;   DIG_SYM01GON;   break;

        default: DIG_SYM01AOFF; DIG_SYM01BOFF; DIG_SYM01COFF; DIG_SYM01DOFF; DIG_SYM01EOFF; DIG_SYM01FOFF; DIG_SYM01GOFF;
    }    
}

void LCD_DisplayOn_DIG_SYM02Num()
{
	DIG_SYM02AON;DIG_SYM02BON;DIG_SYM02CON;DIG_SYM02DON;DIG_SYM02EON;DIG_SYM02FON;DIG_SYM02GON;
}

void LCD_DisplayOff_DIG_SYM02Num()
{
	DIG_SYM02AOFF;DIG_SYM02BOFF;DIG_SYM02COFF;DIG_SYM02DOFF;DIG_SYM02EOFF;DIG_SYM02FOFF;DIG_SYM02GOFF;
}

void LCD_DIG_SYM02Num (unsigned char num) 
{
    switch (num)
    {
        case 0: DIG_SYM02AON;   DIG_SYM02BON;   DIG_SYM02CON;   DIG_SYM02DON;   DIG_SYM02EON;   DIG_SYM02FON;   DIG_SYM02GOFF;  break;
        case 1: DIG_SYM02AOFF;  DIG_SYM02BON;   DIG_SYM02CON;   DIG_SYM02DOFF;  DIG_SYM02EOFF;  DIG_SYM02FOFF;  DIG_SYM02GOFF;  break;
        case 2: DIG_SYM02AON;   DIG_SYM02BON;   DIG_SYM02COFF;  DIG_SYM02DON;   DIG_SYM02EON;   DIG_SYM02FOFF;  DIG_SYM02GON;   break;
        case 3: DIG_SYM02AON;   DIG_SYM02BON;   DIG_SYM02CON;   DIG_SYM02DON;   DIG_SYM02EOFF;  DIG_SYM02FOFF;  DIG_SYM02GON;   break;
        case 4: DIG_SYM02AOFF;  DIG_SYM02BON;   DIG_SYM02CON;   DIG_SYM02DOFF;  DIG_SYM02EOFF;  DIG_SYM02FON;   DIG_SYM02GON;   break;
        case 5: DIG_SYM02AON;   DIG_SYM02BOFF;  DIG_SYM02CON;   DIG_SYM02DON;   DIG_SYM02EOFF;  DIG_SYM02FON;   DIG_SYM02GON;   break;
        case 6: DIG_SYM02AON;   DIG_SYM02BOFF;  DIG_SYM02CON;   DIG_SYM02DON;   DIG_SYM02EON;   DIG_SYM02FON;   DIG_SYM02GON;   break;
        case 7: DIG_SYM02AON;   DIG_SYM02BON;   DIG_SYM02CON;   DIG_SYM02DOFF;  DIG_SYM02EOFF;  DIG_SYM02FOFF;  DIG_SYM02GOFF;  break;
        case 8: DIG_SYM02AON;   DIG_SYM02BON;   DIG_SYM02CON;   DIG_SYM02DON;   DIG_SYM02EON;   DIG_SYM02FON;   DIG_SYM02GON;   break;
        case 9: DIG_SYM02AON;   DIG_SYM02BON;   DIG_SYM02CON;   DIG_SYM02DON;   DIG_SYM02EOFF;  DIG_SYM02FON;   DIG_SYM02GON;   break;

        default: DIG_SYM02AOFF; DIG_SYM02BOFF; DIG_SYM02COFF; DIG_SYM02DOFF; DIG_SYM02EOFF; DIG_SYM02FOFF; DIG_SYM02GOFF;
    }    
}

void LCD_DisplayOn_DIG_SYM03Num()
{
	DIG_SYM03AON;DIG_SYM03BON;DIG_SYM03CON;DIG_SYM03DON;DIG_SYM03EON;DIG_SYM03FON;DIG_SYM03GON;
}

void LCD_DisplayOff_DIG_SYM03Num()
{
	DIG_SYM03AOFF;DIG_SYM03BOFF;DIG_SYM03COFF;DIG_SYM03DOFF;DIG_SYM03EOFF;DIG_SYM03FOFF;DIG_SYM03GOFF;
}

void LCD_DIG_SYM03Num (unsigned char num) 
{
    switch (num)
    {
        case 0: DIG_SYM03AON;   DIG_SYM03BON;   DIG_SYM03CON;   DIG_SYM03DON;   DIG_SYM03EON;   DIG_SYM03FON;   DIG_SYM03GOFF;  break;
        case 1: DIG_SYM03AOFF;  DIG_SYM03BON;   DIG_SYM03CON;   DIG_SYM03DOFF;  DIG_SYM03EOFF;  DIG_SYM03FOFF;  DIG_SYM03GOFF;  break;
        case 2: DIG_SYM03AON;   DIG_SYM03BON;   DIG_SYM03COFF;  DIG_SYM03DON;   DIG_SYM03EON;   DIG_SYM03FOFF;  DIG_SYM03GON;   break;
        case 3: DIG_SYM03AON;   DIG_SYM03BON;   DIG_SYM03CON;   DIG_SYM03DON;   DIG_SYM03EOFF;  DIG_SYM03FOFF;  DIG_SYM03GON;   break;
        case 4: DIG_SYM03AOFF;  DIG_SYM03BON;   DIG_SYM03CON;   DIG_SYM03DOFF;  DIG_SYM03EOFF;  DIG_SYM03FON;   DIG_SYM03GON;   break;
        case 5: DIG_SYM03AON;   DIG_SYM03BOFF;  DIG_SYM03CON;   DIG_SYM03DON;   DIG_SYM03EOFF;  DIG_SYM03FON;   DIG_SYM03GON;   break;
        case 6: DIG_SYM03AON;   DIG_SYM03BOFF;  DIG_SYM03CON;   DIG_SYM03DON;   DIG_SYM03EON;   DIG_SYM03FON;   DIG_SYM03GON;   break;
        case 7: DIG_SYM03AON;   DIG_SYM03BON;   DIG_SYM03CON;   DIG_SYM03DOFF;  DIG_SYM03EOFF;  DIG_SYM03FOFF;  DIG_SYM03GOFF;  break;
        case 8: DIG_SYM03AON;   DIG_SYM03BON;   DIG_SYM03CON;   DIG_SYM03DON;   DIG_SYM03EON;   DIG_SYM03FON;   DIG_SYM03GON;   break;
        case 9: DIG_SYM03AON;   DIG_SYM03BON;   DIG_SYM03CON;   DIG_SYM03DON;   DIG_SYM03EOFF;  DIG_SYM03FON;   DIG_SYM03GON;   break;

        default: DIG_SYM03AOFF; DIG_SYM03BOFF; DIG_SYM03COFF; DIG_SYM03DOFF; DIG_SYM03EOFF; DIG_SYM03FOFF; DIG_SYM03GOFF;
    }    
}

void LCD_DisplayOn_DIG_SYM04Num()
{
	DIG_SYM04AON;DIG_SYM04BON;DIG_SYM04CON;DIG_SYM04DON;DIG_SYM04EON;DIG_SYM04FON;DIG_SYM04GON;
}

void LCD_DisplayOff_DIG_SYM04Num()
{
	DIG_SYM04AOFF;DIG_SYM04BOFF;DIG_SYM04COFF;DIG_SYM04DOFF;DIG_SYM04EOFF;DIG_SYM04FOFF;DIG_SYM04GOFF;
}

void LCD_DIG_SYM04Num (unsigned char num) 
{
    switch (num)
    {
        case 0: DIG_SYM04AON;   DIG_SYM04BON;   DIG_SYM04CON;   DIG_SYM04DON;   DIG_SYM04EON;   DIG_SYM04FON;   DIG_SYM04GOFF;  break;
        case 1: DIG_SYM04AOFF;  DIG_SYM04BON;   DIG_SYM04CON;   DIG_SYM04DOFF;  DIG_SYM04EOFF;  DIG_SYM04FOFF;  DIG_SYM04GOFF;  break;
        case 2: DIG_SYM04AON;   DIG_SYM04BON;   DIG_SYM04COFF;  DIG_SYM04DON;   DIG_SYM04EON;   DIG_SYM04FOFF;  DIG_SYM04GON;   break;
        case 3: DIG_SYM04AON;   DIG_SYM04BON;   DIG_SYM04CON;   DIG_SYM04DON;   DIG_SYM04EOFF;  DIG_SYM04FOFF;  DIG_SYM04GON;   break;
        case 4: DIG_SYM04AOFF;  DIG_SYM04BON;   DIG_SYM04CON;   DIG_SYM04DOFF;  DIG_SYM04EOFF;  DIG_SYM04FON;   DIG_SYM04GON;   break;
        case 5: DIG_SYM04AON;   DIG_SYM04BOFF;  DIG_SYM04CON;   DIG_SYM04DON;   DIG_SYM04EOFF;  DIG_SYM04FON;   DIG_SYM04GON;   break;
        case 6: DIG_SYM04AON;   DIG_SYM04BOFF;  DIG_SYM04CON;   DIG_SYM04DON;   DIG_SYM04EON;   DIG_SYM04FON;   DIG_SYM04GON;   break;
        case 7: DIG_SYM04AON;   DIG_SYM04BON;   DIG_SYM04CON;   DIG_SYM04DOFF;  DIG_SYM04EOFF;  DIG_SYM04FOFF;  DIG_SYM04GOFF;  break;
        case 8: DIG_SYM04AON;   DIG_SYM04BON;   DIG_SYM04CON;   DIG_SYM04DON;   DIG_SYM04EON;   DIG_SYM04FON;   DIG_SYM04GON;   break;
        case 9: DIG_SYM04AON;   DIG_SYM04BON;   DIG_SYM04CON;   DIG_SYM04DON;   DIG_SYM04EOFF;  DIG_SYM04FON;   DIG_SYM04GON;   break;

        default: DIG_SYM04AOFF; DIG_SYM04BOFF; DIG_SYM04COFF; DIG_SYM04DOFF; DIG_SYM04EOFF; DIG_SYM04FOFF; DIG_SYM04GOFF;
    }    
}

void LCD_DisplayOn_DIG_SYM05Num()
{
	DIG_SYM05AON;DIG_SYM05BON;DIG_SYM05CON;DIG_SYM05DON;DIG_SYM05EON;DIG_SYM05FON;DIG_SYM05GON;
}

void LCD_DisplayOff_DIG_SYM05Num()
{
	DIG_SYM05AOFF;DIG_SYM05BOFF;DIG_SYM05COFF;DIG_SYM05DOFF;DIG_SYM05EOFF;DIG_SYM05FOFF;DIG_SYM05GOFF;
}

void LCD_DIG_SYM05Num (unsigned char num) 
{
    switch (num)
    {
        case 0: DIG_SYM05AON;   DIG_SYM05BON;   DIG_SYM05CON;   DIG_SYM05DON;   DIG_SYM05EON;   DIG_SYM05FON;   DIG_SYM05GOFF;  break;
        case 1: DIG_SYM05AOFF;  DIG_SYM05BON;   DIG_SYM05CON;   DIG_SYM05DOFF;  DIG_SYM05EOFF;  DIG_SYM05FOFF;  DIG_SYM05GOFF;  break;
        case 2: DIG_SYM05AON;   DIG_SYM05BON;   DIG_SYM05COFF;  DIG_SYM05DON;   DIG_SYM05EON;   DIG_SYM05FOFF;  DIG_SYM05GON;   break;
        case 3: DIG_SYM05AON;   DIG_SYM05BON;   DIG_SYM05CON;   DIG_SYM05DON;   DIG_SYM05EOFF;  DIG_SYM05FOFF;  DIG_SYM05GON;   break;
        case 4: DIG_SYM05AOFF;  DIG_SYM05BON;   DIG_SYM05CON;   DIG_SYM05DOFF;  DIG_SYM05EOFF;  DIG_SYM05FON;   DIG_SYM05GON;   break;
        case 5: DIG_SYM05AON;   DIG_SYM05BOFF;  DIG_SYM05CON;   DIG_SYM05DON;   DIG_SYM05EOFF;  DIG_SYM05FON;   DIG_SYM05GON;   break;
        case 6: DIG_SYM05AON;   DIG_SYM05BOFF;  DIG_SYM05CON;   DIG_SYM05DON;   DIG_SYM05EON;   DIG_SYM05FON;   DIG_SYM05GON;   break;
        case 7: DIG_SYM05AON;   DIG_SYM05BON;   DIG_SYM05CON;   DIG_SYM05DOFF;  DIG_SYM05EOFF;  DIG_SYM05FOFF;  DIG_SYM05GOFF;  break;
        case 8: DIG_SYM05AON;   DIG_SYM05BON;   DIG_SYM05CON;   DIG_SYM05DON;   DIG_SYM05EON;   DIG_SYM05FON;   DIG_SYM05GON;   break;
        case 9: DIG_SYM05AON;   DIG_SYM05BON;   DIG_SYM05CON;   DIG_SYM05DON;   DIG_SYM05EOFF;  DIG_SYM05FON;   DIG_SYM05GON;   break;

        default: DIG_SYM05AOFF; DIG_SYM05BOFF; DIG_SYM05COFF; DIG_SYM05DOFF; DIG_SYM05EOFF; DIG_SYM05FOFF; DIG_SYM05GOFF;
    }    
}

void LCD_DisplayOn_CHAR_SYM18Num()
{
	CHAR_SYM18AON;CHAR_SYM18BON;CHAR_SYM18CON;CHAR_SYM18DON;CHAR_SYM18EON;CHAR_SYM18FON;CHAR_SYM18GON;
}

void LCD_DisplayOff_CHAR_SYM18Num()
{
	CHAR_SYM18AOFF;CHAR_SYM18BOFF;CHAR_SYM18COFF;CHAR_SYM18DOFF;CHAR_SYM18EOFF;CHAR_SYM18FOFF;CHAR_SYM18GOFF;
}

void LCD_CHAR_SYM18Num (unsigned char num) 
{
    switch (num)
    {
        case 0: CHAR_SYM18AON;   CHAR_SYM18BON;   CHAR_SYM18CON;   CHAR_SYM18DON;   CHAR_SYM18EON;   CHAR_SYM18FON;   CHAR_SYM18GOFF;  break;
        case 1: CHAR_SYM18AOFF;  CHAR_SYM18BON;   CHAR_SYM18CON;   CHAR_SYM18DOFF;  CHAR_SYM18EOFF;  CHAR_SYM18FOFF;  CHAR_SYM18GOFF;  break;
        case 2: CHAR_SYM18AON;   CHAR_SYM18BON;   CHAR_SYM18COFF;  CHAR_SYM18DON;   CHAR_SYM18EON;   CHAR_SYM18FOFF;  CHAR_SYM18GON;   break;
        case 3: CHAR_SYM18AON;   CHAR_SYM18BON;   CHAR_SYM18CON;   CHAR_SYM18DON;   CHAR_SYM18EOFF;  CHAR_SYM18FOFF;  CHAR_SYM18GON;   break;
        case 4: CHAR_SYM18AOFF;  CHAR_SYM18BON;   CHAR_SYM18CON;   CHAR_SYM18DOFF;  CHAR_SYM18EOFF;  CHAR_SYM18FON;   CHAR_SYM18GON;   break;
        case 5: CHAR_SYM18AON;   CHAR_SYM18BOFF;  CHAR_SYM18CON;   CHAR_SYM18DON;   CHAR_SYM18EOFF;  CHAR_SYM18FON;   CHAR_SYM18GON;   break;
        case 6: CHAR_SYM18AON;   CHAR_SYM18BOFF;  CHAR_SYM18CON;   CHAR_SYM18DON;   CHAR_SYM18EON;   CHAR_SYM18FON;   CHAR_SYM18GON;   break;
        case 7: CHAR_SYM18AON;   CHAR_SYM18BON;   CHAR_SYM18CON;   CHAR_SYM18DOFF;  CHAR_SYM18EOFF;  CHAR_SYM18FOFF;  CHAR_SYM18GOFF;  break;
        case 8: CHAR_SYM18AON;   CHAR_SYM18BON;   CHAR_SYM18CON;   CHAR_SYM18DON;   CHAR_SYM18EON;   CHAR_SYM18FON;   CHAR_SYM18GON;   break;
        case 9: CHAR_SYM18AON;   CHAR_SYM18BON;   CHAR_SYM18CON;   CHAR_SYM18DON;   CHAR_SYM18EOFF;  CHAR_SYM18FON;   CHAR_SYM18GON;   break;

        default: CHAR_SYM18AOFF; CHAR_SYM18BOFF; CHAR_SYM18COFF; CHAR_SYM18DOFF; CHAR_SYM18EOFF; CHAR_SYM18FOFF; CHAR_SYM18GOFF;
    }    
}

void LCD_DisplayOn_CHAR_SYM19Num()
{
	CHAR_SYM19AON;CHAR_SYM19BON;CHAR_SYM19CON;CHAR_SYM19DON;CHAR_SYM19EON;CHAR_SYM19FON;CHAR_SYM19GON;
}

void LCD_DisplayOff_CHAR_SYM19Num()
{
	CHAR_SYM19AOFF;CHAR_SYM19BOFF;CHAR_SYM19COFF;CHAR_SYM19DOFF;CHAR_SYM19EOFF;CHAR_SYM19FOFF;CHAR_SYM19GOFF;
}

void LCD_CHAR_SYM19Num (unsigned char num) 
{
    switch (num)
    {
        case 0: CHAR_SYM19AON;   CHAR_SYM19BON;   CHAR_SYM19CON;   CHAR_SYM19DON;   CHAR_SYM19EON;   CHAR_SYM19FON;   CHAR_SYM19GOFF;  break;
        case 1: CHAR_SYM19AOFF;  CHAR_SYM19BON;   CHAR_SYM19CON;   CHAR_SYM19DOFF;  CHAR_SYM19EOFF;  CHAR_SYM19FOFF;  CHAR_SYM19GOFF;  break;
        case 2: CHAR_SYM19AON;   CHAR_SYM19BON;   CHAR_SYM19COFF;  CHAR_SYM19DON;   CHAR_SYM19EON;   CHAR_SYM19FOFF;  CHAR_SYM19GON;   break;
        case 3: CHAR_SYM19AON;   CHAR_SYM19BON;   CHAR_SYM19CON;   CHAR_SYM19DON;   CHAR_SYM19EOFF;  CHAR_SYM19FOFF;  CHAR_SYM19GON;   break;
        case 4: CHAR_SYM19AOFF;  CHAR_SYM19BON;   CHAR_SYM19CON;   CHAR_SYM19DOFF;  CHAR_SYM19EOFF;  CHAR_SYM19FON;   CHAR_SYM19GON;   break;
        case 5: CHAR_SYM19AON;   CHAR_SYM19BOFF;  CHAR_SYM19CON;   CHAR_SYM19DON;   CHAR_SYM19EOFF;  CHAR_SYM19FON;   CHAR_SYM19GON;   break;
        case 6: CHAR_SYM19AON;   CHAR_SYM19BOFF;  CHAR_SYM19CON;   CHAR_SYM19DON;   CHAR_SYM19EON;   CHAR_SYM19FON;   CHAR_SYM19GON;   break;
        case 7: CHAR_SYM19AON;   CHAR_SYM19BON;   CHAR_SYM19CON;   CHAR_SYM19DOFF;  CHAR_SYM19EOFF;  CHAR_SYM19FOFF;  CHAR_SYM19GOFF;  break;
        case 8: CHAR_SYM19AON;   CHAR_SYM19BON;   CHAR_SYM19CON;   CHAR_SYM19DON;   CHAR_SYM19EON;   CHAR_SYM19FON;   CHAR_SYM19GON;   break;
        case 9: CHAR_SYM19AON;   CHAR_SYM19BON;   CHAR_SYM19CON;   CHAR_SYM19DON;   CHAR_SYM19EOFF;  CHAR_SYM19FON;   CHAR_SYM19GON;   break;

        default: CHAR_SYM19AOFF; CHAR_SYM19BOFF; CHAR_SYM19COFF; CHAR_SYM19DOFF; CHAR_SYM19EOFF; CHAR_SYM19FOFF; CHAR_SYM19GOFF;
    }    
}

void LCD_DisplayOn_CHAR_SYM20Num()
{
	CHAR_SYM20AON;CHAR_SYM20BON;CHAR_SYM20CON;CHAR_SYM20DON;CHAR_SYM20EON;CHAR_SYM20FON;CHAR_SYM20GON;
}

void LCD_DisplayOff_CHAR_SYM20Num()
{
	CHAR_SYM20AOFF;CHAR_SYM20BOFF;CHAR_SYM20COFF;CHAR_SYM20DOFF;CHAR_SYM20EOFF;CHAR_SYM20FOFF;CHAR_SYM20GOFF;
}

void LCD_CHAR_SYM20Num (unsigned char num) 
{
    switch (num)
    {
        case 0: CHAR_SYM20AON;   CHAR_SYM20BON;   CHAR_SYM20CON;   CHAR_SYM20DON;   CHAR_SYM20EON;   CHAR_SYM20FON;   CHAR_SYM20GOFF;  break;
        case 1: CHAR_SYM20AOFF;  CHAR_SYM20BON;   CHAR_SYM20CON;   CHAR_SYM20DOFF;  CHAR_SYM20EOFF;  CHAR_SYM20FOFF;  CHAR_SYM20GOFF;  break;
        case 2: CHAR_SYM20AON;   CHAR_SYM20BON;   CHAR_SYM20COFF;  CHAR_SYM20DON;   CHAR_SYM20EON;   CHAR_SYM20FOFF;  CHAR_SYM20GON;   break;
        case 3: CHAR_SYM20AON;   CHAR_SYM20BON;   CHAR_SYM20CON;   CHAR_SYM20DON;   CHAR_SYM20EOFF;  CHAR_SYM20FOFF;  CHAR_SYM20GON;   break;
        case 4: CHAR_SYM20AOFF;  CHAR_SYM20BON;   CHAR_SYM20CON;   CHAR_SYM20DOFF;  CHAR_SYM20EOFF;  CHAR_SYM20FON;   CHAR_SYM20GON;   break;
        case 5: CHAR_SYM20AON;   CHAR_SYM20BOFF;  CHAR_SYM20CON;   CHAR_SYM20DON;   CHAR_SYM20EOFF;  CHAR_SYM20FON;   CHAR_SYM20GON;   break;
        case 6: CHAR_SYM20AON;   CHAR_SYM20BOFF;  CHAR_SYM20CON;   CHAR_SYM20DON;   CHAR_SYM20EON;   CHAR_SYM20FON;   CHAR_SYM20GON;   break;
        case 7: CHAR_SYM20AON;   CHAR_SYM20BON;   CHAR_SYM20CON;   CHAR_SYM20DOFF;  CHAR_SYM20EOFF;  CHAR_SYM20FOFF;  CHAR_SYM20GOFF;  break;
        case 8: CHAR_SYM20AON;   CHAR_SYM20BON;   CHAR_SYM20CON;   CHAR_SYM20DON;   CHAR_SYM20EON;   CHAR_SYM20FON;   CHAR_SYM20GON;   break;
        case 9: CHAR_SYM20AON;   CHAR_SYM20BON;   CHAR_SYM20CON;   CHAR_SYM20DON;   CHAR_SYM20EOFF;  CHAR_SYM20FON;   CHAR_SYM20GON;   break;

        default: CHAR_SYM20AOFF; CHAR_SYM20BOFF; CHAR_SYM20COFF; CHAR_SYM20DOFF; CHAR_SYM20EOFF; CHAR_SYM20FOFF; CHAR_SYM20GOFF;
    }    
}

void LCD_DisplayOn_CHAR_SYM21Num()
{
	CHAR_SYM21AON;CHAR_SYM21BON;CHAR_SYM21CON;CHAR_SYM21DON;CHAR_SYM21EON;CHAR_SYM21FON;CHAR_SYM21GON;
}

void LCD_DisplayOff_CHAR_SYM21Num()
{
	CHAR_SYM21AOFF;CHAR_SYM21BOFF;CHAR_SYM21COFF;CHAR_SYM21DOFF;CHAR_SYM21EOFF;CHAR_SYM21FOFF;CHAR_SYM21GOFF;
}

void LCD_CHAR_SYM21Num (unsigned char num) 
{
    switch (num)
    {
        case 0: CHAR_SYM21AON;   CHAR_SYM21BON;   CHAR_SYM21CON;   CHAR_SYM21DON;   CHAR_SYM21EON;   CHAR_SYM21FON;   CHAR_SYM21GOFF;  break;
        case 1: CHAR_SYM21AOFF;  CHAR_SYM21BON;   CHAR_SYM21CON;   CHAR_SYM21DOFF;  CHAR_SYM21EOFF;  CHAR_SYM21FOFF;  CHAR_SYM21GOFF;  break;
        case 2: CHAR_SYM21AON;   CHAR_SYM21BON;   CHAR_SYM21COFF;  CHAR_SYM21DON;   CHAR_SYM21EON;   CHAR_SYM21FOFF;  CHAR_SYM21GON;   break;
        case 3: CHAR_SYM21AON;   CHAR_SYM21BON;   CHAR_SYM21CON;   CHAR_SYM21DON;   CHAR_SYM21EOFF;  CHAR_SYM21FOFF;  CHAR_SYM21GON;   break;
        case 4: CHAR_SYM21AOFF;  CHAR_SYM21BON;   CHAR_SYM21CON;   CHAR_SYM21DOFF;  CHAR_SYM21EOFF;  CHAR_SYM21FON;   CHAR_SYM21GON;   break;
        case 5: CHAR_SYM21AON;   CHAR_SYM21BOFF;  CHAR_SYM21CON;   CHAR_SYM21DON;   CHAR_SYM21EOFF;  CHAR_SYM21FON;   CHAR_SYM21GON;   break;
        case 6: CHAR_SYM21AON;   CHAR_SYM21BOFF;  CHAR_SYM21CON;   CHAR_SYM21DON;   CHAR_SYM21EON;   CHAR_SYM21FON;   CHAR_SYM21GON;   break;
        case 7: CHAR_SYM21AON;   CHAR_SYM21BON;   CHAR_SYM21CON;   CHAR_SYM21DOFF;  CHAR_SYM21EOFF;  CHAR_SYM21FOFF;  CHAR_SYM21GOFF;  break;
        case 8: CHAR_SYM21AON;   CHAR_SYM21BON;   CHAR_SYM21CON;   CHAR_SYM21DON;   CHAR_SYM21EON;   CHAR_SYM21FON;   CHAR_SYM21GON;   break;
        case 9: CHAR_SYM21AON;   CHAR_SYM21BON;   CHAR_SYM21CON;   CHAR_SYM21DON;   CHAR_SYM21EOFF;  CHAR_SYM21FON;   CHAR_SYM21GON;   break;

        default: CHAR_SYM21AOFF; CHAR_SYM21BOFF; CHAR_SYM21COFF; CHAR_SYM21DOFF; CHAR_SYM21EOFF; CHAR_SYM21FOFF; CHAR_SYM21GOFF;
    }    
}

void LCD_DisplayOn_CHAR_SYM22Num()
{
	CHAR_SYM22AON;CHAR_SYM22BON;CHAR_SYM22CON;CHAR_SYM22DON;CHAR_SYM22EON;CHAR_SYM22FON;CHAR_SYM22GON;
}

void LCD_DisplayOff_CHAR_SYM22Num()
{
	CHAR_SYM22AOFF;CHAR_SYM22BOFF;CHAR_SYM22COFF;CHAR_SYM22DOFF;CHAR_SYM22EOFF;CHAR_SYM22FOFF;CHAR_SYM22GOFF;
}

void LCD_CHAR_SYM22Num (unsigned char num) 
{
    switch (num)
    {
        case 0: CHAR_SYM22AON;   CHAR_SYM22BON;   CHAR_SYM22CON;   CHAR_SYM22DON;   CHAR_SYM22EON;   CHAR_SYM22FON;   CHAR_SYM22GOFF;  break;
        case 1: CHAR_SYM22AOFF;  CHAR_SYM22BON;   CHAR_SYM22CON;   CHAR_SYM22DOFF;  CHAR_SYM22EOFF;  CHAR_SYM22FOFF;  CHAR_SYM22GOFF;  break;
        case 2: CHAR_SYM22AON;   CHAR_SYM22BON;   CHAR_SYM22COFF;  CHAR_SYM22DON;   CHAR_SYM22EON;   CHAR_SYM22FOFF;  CHAR_SYM22GON;   break;
        case 3: CHAR_SYM22AON;   CHAR_SYM22BON;   CHAR_SYM22CON;   CHAR_SYM22DON;   CHAR_SYM22EOFF;  CHAR_SYM22FOFF;  CHAR_SYM22GON;   break;
        case 4: CHAR_SYM22AOFF;  CHAR_SYM22BON;   CHAR_SYM22CON;   CHAR_SYM22DOFF;  CHAR_SYM22EOFF;  CHAR_SYM22FON;   CHAR_SYM22GON;   break;
        case 5: CHAR_SYM22AON;   CHAR_SYM22BOFF;  CHAR_SYM22CON;   CHAR_SYM22DON;   CHAR_SYM22EOFF;  CHAR_SYM22FON;   CHAR_SYM22GON;   break;
        case 6: CHAR_SYM22AON;   CHAR_SYM22BOFF;  CHAR_SYM22CON;   CHAR_SYM22DON;   CHAR_SYM22EON;   CHAR_SYM22FON;   CHAR_SYM22GON;   break;
        case 7: CHAR_SYM22AON;   CHAR_SYM22BON;   CHAR_SYM22CON;   CHAR_SYM22DOFF;  CHAR_SYM22EOFF;  CHAR_SYM22FOFF;  CHAR_SYM22GOFF;  break;
        case 8: CHAR_SYM22AON;   CHAR_SYM22BON;   CHAR_SYM22CON;   CHAR_SYM22DON;   CHAR_SYM22EON;   CHAR_SYM22FON;   CHAR_SYM22GON;   break;
        case 9: CHAR_SYM22AON;   CHAR_SYM22BON;   CHAR_SYM22CON;   CHAR_SYM22DON;   CHAR_SYM22EOFF;  CHAR_SYM22FON;   CHAR_SYM22GON;   break;

        default: CHAR_SYM22AOFF; CHAR_SYM22BOFF; CHAR_SYM22COFF; CHAR_SYM22DOFF; CHAR_SYM22EOFF; CHAR_SYM22FOFF; CHAR_SYM22GOFF;
    }    
}

void LCD_DisplayOn_CHAR_SYM23Num()
{
	CHAR_SYM23AON;CHAR_SYM23BON;CHAR_SYM23CON;CHAR_SYM23DON;CHAR_SYM23EON;CHAR_SYM23FON;CHAR_SYM23GON;
}

void LCD_DisplayOff_CHAR_SYM23Num()
{
	CHAR_SYM23AOFF;CHAR_SYM23BOFF;CHAR_SYM23COFF;CHAR_SYM23DOFF;CHAR_SYM23EOFF;CHAR_SYM23FOFF;CHAR_SYM23GOFF;
}

void LCD_CHAR_SYM23Num (unsigned char num) 
{
    switch (num)
    {
        case 0: CHAR_SYM23AON;   CHAR_SYM23BON;   CHAR_SYM23CON;   CHAR_SYM23DON;   CHAR_SYM23EON;   CHAR_SYM23FON;   CHAR_SYM23GOFF;  break;
        case 1: CHAR_SYM23AOFF;  CHAR_SYM23BON;   CHAR_SYM23CON;   CHAR_SYM23DOFF;  CHAR_SYM23EOFF;  CHAR_SYM23FOFF;  CHAR_SYM23GOFF;  break;
        case 2: CHAR_SYM23AON;   CHAR_SYM23BON;   CHAR_SYM23COFF;  CHAR_SYM23DON;   CHAR_SYM23EON;   CHAR_SYM23FOFF;  CHAR_SYM23GON;   break;
        case 3: CHAR_SYM23AON;   CHAR_SYM23BON;   CHAR_SYM23CON;   CHAR_SYM23DON;   CHAR_SYM23EOFF;  CHAR_SYM23FOFF;  CHAR_SYM23GON;   break;
        case 4: CHAR_SYM23AOFF;  CHAR_SYM23BON;   CHAR_SYM23CON;   CHAR_SYM23DOFF;  CHAR_SYM23EOFF;  CHAR_SYM23FON;   CHAR_SYM23GON;   break;
        case 5: CHAR_SYM23AON;   CHAR_SYM23BOFF;  CHAR_SYM23CON;   CHAR_SYM23DON;   CHAR_SYM23EOFF;  CHAR_SYM23FON;   CHAR_SYM23GON;   break;
        case 6: CHAR_SYM23AON;   CHAR_SYM23BOFF;  CHAR_SYM23CON;   CHAR_SYM23DON;   CHAR_SYM23EON;   CHAR_SYM23FON;   CHAR_SYM23GON;   break;
        case 7: CHAR_SYM23AON;   CHAR_SYM23BON;   CHAR_SYM23CON;   CHAR_SYM23DOFF;  CHAR_SYM23EOFF;  CHAR_SYM23FOFF;  CHAR_SYM23GOFF;  break;
        case 8: CHAR_SYM23AON;   CHAR_SYM23BON;   CHAR_SYM23CON;   CHAR_SYM23DON;   CHAR_SYM23EON;   CHAR_SYM23FON;   CHAR_SYM23GON;   break;
        case 9: CHAR_SYM23AON;   CHAR_SYM23BON;   CHAR_SYM23CON;   CHAR_SYM23DON;   CHAR_SYM23EOFF;  CHAR_SYM23FON;   CHAR_SYM23GON;   break;

        default: CHAR_SYM23AOFF; CHAR_SYM23BOFF; CHAR_SYM23COFF; CHAR_SYM23DOFF; CHAR_SYM23EOFF; CHAR_SYM23FOFF; CHAR_SYM23GOFF;
    }    
}

// end of file