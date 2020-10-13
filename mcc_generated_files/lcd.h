/**
  LCD Generated Driver API Header File
  
  @Company
    Microchip Technology Inc.

  @File Name
    lcd.h
	
  @Summary
    This is the generated header file for the LCD driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for LCD.
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

#ifndef LCD_H
#define LCD_H

/**
  Section: Included Files
*/

#include <xc.h>
#include <stdbool.h>
    
/**
    Section: Defines
*/ 
   
/**
    Defines: the segments pins
*/
#define SEG00      LCDSE0bits.SE00
#define SEG01      LCDSE0bits.SE01
#define SEG02      LCDSE0bits.SE02
#define SEG03      LCDSE0bits.SE03
#define SEG04      LCDSE0bits.SE04
#define SEG05      LCDSE0bits.SE05
#define SEG06      LCDSE0bits.SE06
#define SEG07      LCDSE0bits.SE07
#define SEG08      LCDSE1bits.SE08
#define SEG09      LCDSE1bits.SE09
#define SEG10      LCDSE1bits.SE10
#define SEG11      LCDSE1bits.SE11
#define SEG12      LCDSE1bits.SE12
#define SEG13      LCDSE1bits.SE13
#define SEG14      LCDSE1bits.SE14
#define SEG15      LCDSE1bits.SE15
#define SEG16      LCDSE2bits.SE16
#define SEG17      LCDSE2bits.SE17
#define SEG18      LCDSE2bits.SE18
#define SEG19      LCDSE2bits.SE19
#define SEG20      LCDSE2bits.SE20
#define SEG21      LCDSE2bits.SE21
#define SEG22      LCDSE2bits.SE22
#define SEG23      LCDSE2bits.SE23
#define SEG24      LCDSE3bits.SE24
#define SEG25      LCDSE3bits.SE25
#define SEG26      LCDSE3bits.SE26
#define SEG27      LCDSE3bits.SE27
#define SEG28      LCDSE3bits.SE28
#define SEG29      LCDSE3bits.SE29
#define SEG30      LCDSE3bits.SE30
#define SEG31      LCDSE3bits.SE31
#define SEG32      LCDSE4bits.SE32
#define SEG33      LCDSE4bits.SE33
#define SEG34      LCDSE4bits.SE34
#define SEG35      LCDSE4bits.SE35
#define SEG36      LCDSE4bits.SE36
#define SEG37      LCDSE4bits.SE37
#define SEG38      LCDSE4bits.SE38
#define SEG39      LCDSE4bits.SE39
#define SEG40      LCDSE5bits.SE40
#define SEG41      LCDSE5bits.SE41
#define SEG42      LCDSE5bits.SE42
#define SEG43      LCDSE5bits.SE43
#define SEG44      LCDSE5bits.SE44
#define SEG45      LCDSE5bits.SE45

#define DIG_SYM00A      LCDDATA9bits.S25C1
#define DIG_SYM00B      LCDDATA3bits.S25C0
#define DIG_SYM00C      LCDDATA9bits.S26C1
#define DIG_SYM00D      LCDDATA8bits.S19C1
#define DIG_SYM00E      LCDDATA2bits.S19C0
#define DIG_SYM00F      LCDDATA8bits.S20C1
#define DIG_SYM00G      LCDDATA2bits.S20C0
#define DIG_SYM01A      LCDDATA7bits.S11C1
#define DIG_SYM01B      LCDDATA1bits.S11C0
#define DIG_SYM01C      LCDDATA6bits.S07C1
#define DIG_SYM01D      LCDDATA6bits.S06C1
#define DIG_SYM01E      LCDDATA0bits.S06C0
#define DIG_SYM01F      LCDDATA9bits.S24C1
#define DIG_SYM01G      LCDDATA3bits.S24C0
#define DIG_SYM02A      LCDDATA9bits.S31C1
#define DIG_SYM02B      LCDDATA3bits.S31C0
#define DIG_SYM02C      LCDDATA10bits.S33C1
#define DIG_SYM02D      LCDDATA10bits.S34C1
#define DIG_SYM02E      LCDDATA4bits.S34C0
#define DIG_SYM02F      LCDDATA7bits.S10C1
#define DIG_SYM02G      LCDDATA1bits.S10C0
#define DIG_SYM03A      LCDDATA7bits.S09C1
#define DIG_SYM03B      LCDDATA1bits.S09C0
#define DIG_SYM03C      LCDDATA9bits.S27C1
#define DIG_SYM03D      LCDDATA10bits.S32C1
#define DIG_SYM03E      LCDDATA4bits.S32C0
#define DIG_SYM03F      LCDDATA7bits.S08C1
#define DIG_SYM03G      LCDDATA1bits.S08C0
#define DIG_SYM04A      LCDDATA9bits.S29C1
#define DIG_SYM04B      LCDDATA3bits.S29C0
#define DIG_SYM04C      LCDDATA6bits.S02C1
#define DIG_SYM04D      LCDDATA6bits.S03C1
#define DIG_SYM04E      LCDDATA0bits.S03C0
#define DIG_SYM04F      LCDDATA9bits.S30C1
#define DIG_SYM04G      LCDDATA3bits.S30C0
#define DIG_SYM05A      LCDDATA8bits.S23C1
#define DIG_SYM05B      LCDDATA2bits.S23C0
#define DIG_SYM05C      LCDDATA6bits.S00C1
#define DIG_SYM05D      LCDDATA6bits.S01C1
#define DIG_SYM05E      LCDDATA0bits.S01C0
#define DIG_SYM05F      LCDDATA9bits.S28C1
#define DIG_SYM05G      LCDDATA3bits.S28C0
#define COL_SYM06      LCDDATA15bits.S26C2
#define COL_SYM07      LCDDATA12bits.S07C2
#define COL_SYM08      LCDDATA16bits.S33C2
#define COL_SYM09      LCDDATA15bits.S27C2
#define BAR0_SYM10      LCDDATA18bits.S00C3
#define DOT_SYM11      LCDDATA21bits.S26C3
#define DOT_SYM12      LCDDATA18bits.S07C3
#define DOT_SYM13      LCDDATA22bits.S33C3
#define DOT_SYM14      LCDDATA21bits.S27C3
#define BAR1_SYM15      LCDDATA12bits.S00C2
#define BAR2_SYM16      LCDDATA18bits.S02C3
#define BAR3_SYM17      LCDDATA12bits.S02C2


/**
    Defines: To Turn on a pixel (a segment from a digit or a special character)
*/
#define DIG_SYM00AON     DIG_SYM00A = 1
#define DIG_SYM00BON     DIG_SYM00B = 1
#define DIG_SYM00CON     DIG_SYM00C = 1
#define DIG_SYM00DON     DIG_SYM00D = 1
#define DIG_SYM00EON     DIG_SYM00E = 1
#define DIG_SYM00FON     DIG_SYM00F = 1
#define DIG_SYM00GON     DIG_SYM00G = 1
#define DIG_SYM01AON     DIG_SYM01A = 1
#define DIG_SYM01BON     DIG_SYM01B = 1
#define DIG_SYM01CON     DIG_SYM01C = 1
#define DIG_SYM01DON     DIG_SYM01D = 1
#define DIG_SYM01EON     DIG_SYM01E = 1
#define DIG_SYM01FON     DIG_SYM01F = 1
#define DIG_SYM01GON     DIG_SYM01G = 1
#define DIG_SYM02AON     DIG_SYM02A = 1
#define DIG_SYM02BON     DIG_SYM02B = 1
#define DIG_SYM02CON     DIG_SYM02C = 1
#define DIG_SYM02DON     DIG_SYM02D = 1
#define DIG_SYM02EON     DIG_SYM02E = 1
#define DIG_SYM02FON     DIG_SYM02F = 1
#define DIG_SYM02GON     DIG_SYM02G = 1
#define DIG_SYM03AON     DIG_SYM03A = 1
#define DIG_SYM03BON     DIG_SYM03B = 1
#define DIG_SYM03CON     DIG_SYM03C = 1
#define DIG_SYM03DON     DIG_SYM03D = 1
#define DIG_SYM03EON     DIG_SYM03E = 1
#define DIG_SYM03FON     DIG_SYM03F = 1
#define DIG_SYM03GON     DIG_SYM03G = 1
#define DIG_SYM04AON     DIG_SYM04A = 1
#define DIG_SYM04BON     DIG_SYM04B = 1
#define DIG_SYM04CON     DIG_SYM04C = 1
#define DIG_SYM04DON     DIG_SYM04D = 1
#define DIG_SYM04EON     DIG_SYM04E = 1
#define DIG_SYM04FON     DIG_SYM04F = 1
#define DIG_SYM04GON     DIG_SYM04G = 1
#define DIG_SYM05AON     DIG_SYM05A = 1
#define DIG_SYM05BON     DIG_SYM05B = 1
#define DIG_SYM05CON     DIG_SYM05C = 1
#define DIG_SYM05DON     DIG_SYM05D = 1
#define DIG_SYM05EON     DIG_SYM05E = 1
#define DIG_SYM05FON     DIG_SYM05F = 1
#define DIG_SYM05GON     DIG_SYM05G = 1
#define COL_SYM06ON     COL_SYM06 = 1
#define COL_SYM07ON     COL_SYM07 = 1
#define COL_SYM08ON     COL_SYM08 = 1
#define COL_SYM09ON     COL_SYM09 = 1
#define BAR0_SYM10ON     BAR0_SYM10 = 1
#define DOT_SYM11ON     DOT_SYM11 = 1
#define DOT_SYM12ON     DOT_SYM12 = 1
#define DOT_SYM13ON     DOT_SYM13 = 1
#define DOT_SYM14ON     DOT_SYM14 = 1
#define BAR1_SYM15ON     BAR1_SYM15 = 1
#define BAR2_SYM16ON     BAR2_SYM16 = 1
#define BAR3_SYM17ON     BAR3_SYM17 = 1

/**
    Defines: To Turn off a pixel (a segment from a digit or a special character)
*/
#define DIG_SYM00AOFF    DIG_SYM00A = 0
#define DIG_SYM00BOFF    DIG_SYM00B = 0
#define DIG_SYM00COFF    DIG_SYM00C = 0
#define DIG_SYM00DOFF    DIG_SYM00D = 0
#define DIG_SYM00EOFF    DIG_SYM00E = 0
#define DIG_SYM00FOFF    DIG_SYM00F = 0
#define DIG_SYM00GOFF    DIG_SYM00G = 0
#define DIG_SYM01AOFF    DIG_SYM01A = 0
#define DIG_SYM01BOFF    DIG_SYM01B = 0
#define DIG_SYM01COFF    DIG_SYM01C = 0
#define DIG_SYM01DOFF    DIG_SYM01D = 0
#define DIG_SYM01EOFF    DIG_SYM01E = 0
#define DIG_SYM01FOFF    DIG_SYM01F = 0
#define DIG_SYM01GOFF    DIG_SYM01G = 0
#define DIG_SYM02AOFF    DIG_SYM02A = 0
#define DIG_SYM02BOFF    DIG_SYM02B = 0
#define DIG_SYM02COFF    DIG_SYM02C = 0
#define DIG_SYM02DOFF    DIG_SYM02D = 0
#define DIG_SYM02EOFF    DIG_SYM02E = 0
#define DIG_SYM02FOFF    DIG_SYM02F = 0
#define DIG_SYM02GOFF    DIG_SYM02G = 0
#define DIG_SYM03AOFF    DIG_SYM03A = 0
#define DIG_SYM03BOFF    DIG_SYM03B = 0
#define DIG_SYM03COFF    DIG_SYM03C = 0
#define DIG_SYM03DOFF    DIG_SYM03D = 0
#define DIG_SYM03EOFF    DIG_SYM03E = 0
#define DIG_SYM03FOFF    DIG_SYM03F = 0
#define DIG_SYM03GOFF    DIG_SYM03G = 0
#define DIG_SYM04AOFF    DIG_SYM04A = 0
#define DIG_SYM04BOFF    DIG_SYM04B = 0
#define DIG_SYM04COFF    DIG_SYM04C = 0
#define DIG_SYM04DOFF    DIG_SYM04D = 0
#define DIG_SYM04EOFF    DIG_SYM04E = 0
#define DIG_SYM04FOFF    DIG_SYM04F = 0
#define DIG_SYM04GOFF    DIG_SYM04G = 0
#define DIG_SYM05AOFF    DIG_SYM05A = 0
#define DIG_SYM05BOFF    DIG_SYM05B = 0
#define DIG_SYM05COFF    DIG_SYM05C = 0
#define DIG_SYM05DOFF    DIG_SYM05D = 0
#define DIG_SYM05EOFF    DIG_SYM05E = 0
#define DIG_SYM05FOFF    DIG_SYM05F = 0
#define DIG_SYM05GOFF    DIG_SYM05G = 0
#define COL_SYM06OFF    COL_SYM06 = 0
#define COL_SYM07OFF    COL_SYM07 = 0
#define COL_SYM08OFF    COL_SYM08 = 0
#define COL_SYM09OFF    COL_SYM09 = 0
#define BAR0_SYM10OFF    BAR0_SYM10 = 0
#define DOT_SYM11OFF    DOT_SYM11 = 0
#define DOT_SYM12OFF    DOT_SYM12 = 0
#define DOT_SYM13OFF    DOT_SYM13 = 0
#define DOT_SYM14OFF    DOT_SYM14 = 0
#define BAR1_SYM15OFF    BAR1_SYM15 = 0
#define BAR2_SYM16OFF    BAR2_SYM16 = 0
#define BAR3_SYM17OFF    BAR3_SYM17 = 0
/**
  Section: Interface Routines
*/

/**
  @Summary
    Initializes the LCD module

  @Description
    This routine should only be called once during system initialization.    

  @Preconditions
    None.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
    LCD_Initialize();
    </code>     
*/
void LCD_Initialize(void);

/**
    @Summary
        Enable LCD module
        
    @Description
        This routine enables LCD module.   
        
    @Preconditions
        None.

    @Param
        None.

    @Returns
        None.
      
    @Example
        <code>
        LCD_Enable();
        </code>     
*/
void LCD_Enable (void);

/**
    @Summary
        Disable LCD module
        
    @Description
        This routine disables LCD module.   
        
    @Preconditions
        None.

    @Param
        None.

    @Returns
        None.
      
    @Example
        <code>
        LCD_Disable();
        </code>     
*/
void LCD_Disable (void);

/**
    @Summary
        Enable sleep mode for LCD module
        
    @Description
        This routine enables the sleep mode for LCD module.
        
    @Preconditions
        None.

    @Param
        None.

    @Returns
        None.
      
    @Example
        <code>
        LCD_EnableSleepMode();
        </code>     
*/
void LCD_EnableSleepMode (void);

/**
    @Summary
        Disable sleep mode for LCD module
        
    @Description
        This routine disables the sleep mode for LCD module.
        
    @Preconditions
        None.

    @Param
        None.

    @Returns
        None.
      
    @Example
        <code>
        LCD_DisableSleepMode();
        </code>     
*/
void LCD_DisableSleepMode (void);

/**
    @Summary
        Set contrast for LCD module
        
    @Description
        This routine set the contrast value for LCD module.
        
    @Preconditions
       If The internal reference source bit is 0, then the internal LCDcontrast control is unconnected.

    @Param
        Pass the contrast bits value.
        This range for this value is specific for each device.

    @Returns
        None.
      
    @Example
        <code>
        LCD_SetContrast (value);
        </code>     
*/
void LCD_SetContrast (unsigned int value);

/**
    @Summary
        Set LCD module power mode for A interval.
        
    @Description
        This routine set the LCD module reference ladder A time
        power control.
        
    @Preconditions
        None.

    @Param
        Pass the power bits value.

    @Returns
        None.
      
    @Example
        <code>
        LCD_SetIntervalAPowerMode (value);
        </code>     
*/
void LCD_SetIntervalAPowerMode (unsigned int value);

/**
    @Summary
        Set LCD module power mode for B interval.
        
    @Description
        This routine set the LCD module reference ladder B time
        power control.
        
    @Preconditions
        None.

    @Param
        Pass the power bits value.

    @Returns
        None.
      
    @Example
        <code>
        LCD_SetIntervalBPowerMode (value);
        </code>     
*/
void LCD_SetIntervalBPowerMode (unsigned int value);

/**
    @Summary
        Set LCD module power distribution.
        
    @Description
        This routine set the LCD module power distribution during
        waveform intervals.
        
    @Preconditions
        None.

    @Param
        Pass the power bits value.

    @Returns
        None.
      
    @Example
        <code>
        LCD_SetPowerDistribution (value);
        </code>     
*/
void LCD_SetPowerDistribution (unsigned int value);

/**
    @Summary
        Returns true if the LCD module is active, otherwise false.
        
    @Description
        This routine is used to determine if the LCD module is active.
        
    @Preconditions
        None.

    @Param
        Node.

    @Returns
        true  - If module is active.
        false - If module is not active.
      
    @Example
        <code>
         LCD_Initialize();
         while(!LCD_IsActive()); // wait until the module is available
        </code>     
*/
bool LCD_IsActive (void);

/**
    @Summary
        Return true if the write is disabled. 
        
    @Description
        This method returns the status of WERR bit. This is set when the user attepts to write
        when the write is disabled.
        
    @Preconditions
        None.

    @Param
        Node.

    @Returns
        true  - If the write is disabled and the user attempts to write. 
        false - If everithing works properly. 
      
    @Example
        <code>
   
        </code>     
*/
bool LCD_HasWriteFailureOccurred (void);

/**
    @Summary
        
    @Description
        
    @Preconditions
        None.

    @Param
        Node.

    @Returns
        true  - 
        false - 
      
    @Example
        <code>
   
        </code>     
*/
bool LCD_IsWritingAllowed (void);


/**
  @Summary
    Displays on all the defined pixels for digit DIG_SYM00

  @Description
    This routine displays on all the defined pixels for digit DIG_SYM00

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG_SYM00Num();
        </code>
*/
void LCD_DisplayOn_DIG_SYM00Num();

/**
  @Summary
    Displays off all the defined pixels for digit DIG_SYM00

  @Description
    This routine displays off all the defined pixels for digit DIG_SYM00

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG_SYM00Num();
        </code>
*/
void LCD_DisplayOff_DIG_SYM00Num();    
/**
  @Summary
    Display a char for digit DIG_SYM00

  @Description
    This routine displays a specific char for lcd's digit DIG_SYM00

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG_SYM00Num ('5');
        </code>      
*/
void LCD_DIG_SYM00Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit DIG_SYM01

  @Description
    This routine displays on all the defined pixels for digit DIG_SYM01

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG_SYM01Num();
        </code>
*/
void LCD_DisplayOn_DIG_SYM01Num();

/**
  @Summary
    Displays off all the defined pixels for digit DIG_SYM01

  @Description
    This routine displays off all the defined pixels for digit DIG_SYM01

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG_SYM01Num();
        </code>
*/
void LCD_DisplayOff_DIG_SYM01Num();    
/**
  @Summary
    Display a char for digit DIG_SYM01

  @Description
    This routine displays a specific char for lcd's digit DIG_SYM01

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG_SYM01Num ('5');
        </code>      
*/
void LCD_DIG_SYM01Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit DIG_SYM02

  @Description
    This routine displays on all the defined pixels for digit DIG_SYM02

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG_SYM02Num();
        </code>
*/
void LCD_DisplayOn_DIG_SYM02Num();

/**
  @Summary
    Displays off all the defined pixels for digit DIG_SYM02

  @Description
    This routine displays off all the defined pixels for digit DIG_SYM02

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG_SYM02Num();
        </code>
*/
void LCD_DisplayOff_DIG_SYM02Num();    
/**
  @Summary
    Display a char for digit DIG_SYM02

  @Description
    This routine displays a specific char for lcd's digit DIG_SYM02

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG_SYM02Num ('5');
        </code>      
*/
void LCD_DIG_SYM02Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit DIG_SYM03

  @Description
    This routine displays on all the defined pixels for digit DIG_SYM03

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG_SYM03Num();
        </code>
*/
void LCD_DisplayOn_DIG_SYM03Num();

/**
  @Summary
    Displays off all the defined pixels for digit DIG_SYM03

  @Description
    This routine displays off all the defined pixels for digit DIG_SYM03

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG_SYM03Num();
        </code>
*/
void LCD_DisplayOff_DIG_SYM03Num();    
/**
  @Summary
    Display a char for digit DIG_SYM03

  @Description
    This routine displays a specific char for lcd's digit DIG_SYM03

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG_SYM03Num ('5');
        </code>      
*/
void LCD_DIG_SYM03Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit DIG_SYM04

  @Description
    This routine displays on all the defined pixels for digit DIG_SYM04

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG_SYM04Num();
        </code>
*/
void LCD_DisplayOn_DIG_SYM04Num();

/**
  @Summary
    Displays off all the defined pixels for digit DIG_SYM04

  @Description
    This routine displays off all the defined pixels for digit DIG_SYM04

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG_SYM04Num();
        </code>
*/
void LCD_DisplayOff_DIG_SYM04Num();    
/**
  @Summary
    Display a char for digit DIG_SYM04

  @Description
    This routine displays a specific char for lcd's digit DIG_SYM04

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG_SYM04Num ('5');
        </code>      
*/
void LCD_DIG_SYM04Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit DIG_SYM05

  @Description
    This routine displays on all the defined pixels for digit DIG_SYM05

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG_SYM05Num();
        </code>
*/
void LCD_DisplayOn_DIG_SYM05Num();

/**
  @Summary
    Displays off all the defined pixels for digit DIG_SYM05

  @Description
    This routine displays off all the defined pixels for digit DIG_SYM05

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG_SYM05Num();
        </code>
*/
void LCD_DisplayOff_DIG_SYM05Num();    
/**
  @Summary
    Display a char for digit DIG_SYM05

  @Description
    This routine displays a specific char for lcd's digit DIG_SYM05

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG_SYM05Num ('5');
        </code>      
*/
void LCD_DIG_SYM05Num (unsigned char num);
#endif /*_LCD_H*/