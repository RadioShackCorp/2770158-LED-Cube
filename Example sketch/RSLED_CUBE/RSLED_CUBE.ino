/****************************************
 * File Name          : LED_CUBE
 * Author             : 
 * Version            : V1.0
 * Date               : 22/02/2013
 * Description        : Main program body
 ********************************************************************************
 * THE PRESENT SOFTWARE WHICH IS FOR LED CUBE CONTROL
 *******************************************************************************/
// ***********************************************************************************************************
// * These objects define the patterns for your LED CUBE. 
// * In the table[][]= {element_1,element_2,element_3,element_4},
// *
// * The element_1(HEX Value) controls the bottom layer of LED Cube
// * The element_2(HEX Value) controls the middle layer of LED Cube
// * The element_3(HEX Value) controls the top layer of LED Cube
// * The element_4(HEX Value) controls the speed and brightness. 
// *      Example:0x02ff, 
// *             02 controls the speed (delay time)
// *             ff is LED brightness; you can modify the value range 0~255. 
// *
// * Common Hex values for Rows:
// * 
// *    0x007 = Lights LED Row 1-2-3
// *    0x038 = Lights LED Row 4-5-6
// *    0x1c0 = Lights LED Row 7-8-9
// *    0x049 = Lights LED Row 1-4-7
// *    0x092 = Lights LED Row 2-5-8
// *    0x124 = Lights LED Row 3-6-9
// *    0x111 = Lights Diagonal LED Row 1-5-9
// *    0x054 = Lights Diagonal LED Row 3-5-7
// *
// *    0x1ff = Lights the entire level
// ***********************************************************************************************************

// * The #define page parameter determines how many lines are included in the table. It is currently set to 48, which includes
// * the first 48 lines, omitting one grayed out section. To include an additional pattern, disable this line and enable the desired value.

// #define page 16       // Repeats one pattern       
 #define page 32      // Repeats two patterns         
// #define page 48      // Repeats three patterns        
// #define page 64         // Repeats four patterns

const unsigned int table[][4]={

//         Merry-go-round

                               {0x038,0x038,0x038,0x01ff}, // Lights 4-5-6 on all three levels
                               {0x111,0x111,0x111,0x01ff}, // Lights 1-5-9 on all three levels
                               {0x092,0x092,0x092,0x01ff}, // Lights 2-5-8 on all three levels                            
                               {0x054,0x054,0x054,0x01ff}, // Lights 3-5-7 on all three levels
                               {0x038,0x038,0x038,0x01ff},
                               {0x111,0x111,0x111,0x01ff},
                               {0x092,0x092,0x092,0x01ff},                             
                               {0x054,0x054,0x054,0x01ff},                               
                               {0x038,0x038,0x038,0x01ff},
                               {0x111,0x111,0x111,0x01ff},
                               {0x092,0x092,0x092,0x01ff},                             
                               {0x054,0x054,0x054,0x01ff},
                               {0x038,0x038,0x038,0x01ff},
                               {0x111,0x111,0x111,0x01ff},
                               {0x092,0x092,0x092,0x01ff},                             
                               {0x054,0x054,0x054,0x01ff}, 
 
//         Merry-go-round 2

//                               {0x000,0x000,0x038,0x02ff}, // Lights 4-5-6 on all three levels
//                               {0x000,0x000,0x111,0x02ff}, // Lights 1-5-9 on all three levels
//                               {0x000,0x038,0x092,0x02ff}, // Lights 2-5-8 on all three levels                            
//                               {0x000,0x111,0x054,0x02ff}, // Lights 3-5-7 on all three levels
//                               {0x000,0x092,0x038,0x02ff},
//                               {0x038,0x054,0x111,0x02ff},
//                               {0x111,0x038,0x092,0x02ff},                             
//                               {0x092,0x111,0x054,0x02ff},                               
//                               {0x054,0x092,0x038,0x02ff},
//                               {0x038,0x054,0x111,0x02ff},
//                               {0x111,0x038,0x092,0x02ff},                             
//                               {0x092,0x111,0x054,0x02ff},
//                               {0x054,0x092,0x038,0x02ff},
//                               {0x038,0x054,0x000,0x02ff},
//                               {0x111,0x038,0x000,0x02ff},                             
//                               {0x092,0x000,0x000,0x02ff},  
 
 
//         Ferris Wheel 1
                               {0x000,0x1ff,0x000,0x02ff}, // Lights all LEDs on middle level
                               {0x007,0x038,0x1c0,0x02ff}, // Lights 1-2-3 on base level, LEDs 4-5-6 on middle level, and LEDs 7-8-9 on top level
                               {0x038,0x038,0x038,0x02ff}, // Lights 4-5-6 on all three levels
                               {0x1c0,0x038,0x007,0x02ff}, // Lights 7-8-9 on base level, LEDs 4-5-6 on middle level, and LEDs 1-2-3 on top level
                               {0x000,0x1ff,0x000,0x02ff},
                               {0x007,0x038,0x1c0,0x02ff}, 
                               {0x038,0x038,0x038,0x02ff},
                               {0x1c0,0x038,0x007,0x02ff},
                               {0x000,0x1ff,0x000,0x02ff},
                               {0x007,0x038,0x1c0,0x02ff}, 
                               {0x038,0x038,0x038,0x02ff},
                               {0x1c0,0x038,0x007,0x02ff},
                               {0x000,0x1ff,0x000,0x02ff},
                               {0x007,0x038,0x1c0,0x02ff}, 
                               {0x038,0x038,0x038,0x02ff},
                               {0x1c0,0x038,0x007,0x02ff}, 
                               
//         Ferris Wheel 2

//                               {0x092,0x092,0x092,0x02ff}, // Lights 2-5-8 on all three levels
//                               {0x124,0x092,0x049,0x02ff}, // Lights 3-6-9 on base level, LEDs 2-5-8 on middle level, and LEDs 1-4-7 on top level
//                               {0x000,0x1ff,0x000,0x02ff}, // Lights all LEDs on middle level
//                               {0x049,0x092,0x124,0x02ff}, // Lights 1-4-7 on base level, LEDs 2-5-8 on middle level, and LEDs 3-6-9 on top level
//                               {0x092,0x092,0x092,0x02ff}, 
//                               {0x124,0x092,0x049,0x02ff},                                
//                               {0x000,0x1ff,0x000,0x02ff},                               
//                               {0x049,0x092,0x124,0x02ff}, 
//                               {0x092,0x092,0x092,0x02ff}, 
//                               {0x124,0x092,0x049,0x02ff},                                
//                               {0x000,0x1ff,0x000,0x02ff},                               
//                               {0x049,0x092,0x124,0x02ff}, 
//                               {0x092,0x092,0x092,0x02ff}, 
//                               {0x124,0x092,0x049,0x02ff},                                
//                               {0x000,0x1ff,0x000,0x02ff},                               
//                               {0x049,0x092,0x124,0x02ff},       
                              
//         Elevator

//                               {0x1ff,0x000,0x000,0x06ff}, // Lights all LEDs on base level
//                               {0x000,0x1ff,0x000,0x06ff}, // Lights all LEDs on middle level                               
//                               {0x000,0x000,0x1ff,0x06ff}, // Lights all LEDs on top level                              
//                               {0x000,0x000,0x1ff,0x06ff}, 
//                               {0x000,0x000,0x1ff,0x06ff},                                
//                               {0x000,0x000,0x1ff,0x06ff},                               
//                               {0x000,0x000,0x1ff,0x06ff}, 
//                               {0x000,0x000,0x1ff,0x06ff},                                
//                               {0x000,0x000,0x1ff,0x06ff},                               
//                               {0x000,0x1ff,0x000,0x06ff}, 
//                               {0x000,0x000,0x1ff,0x06ff},                                
//                               {0x000,0x1ff,0x000,0x06ff},                               
//                               {0x1ff,0x000,0x000,0x06ff}, 
//                               {0x000,0x1ff,0x000,0x06ff},                                
//                               {0x000,0x000,0x1ff,0x06ff},                               
//                               {0x000,0x1ff,0x000,0x06ff},                                


//         Spiral
//                               {0x007,0x007,0x007,0x06ff}, // Lights 1-2-3 on all three levels
//                               {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels
//                               {0x049,0x049,0x049,0x06ff}, // Lights 1-4-7 on all three levels                              
//                               {0x054,0x054,0x054,0x02ff}, // Lights 3-5-7 on all three levels
//                               {0x1c0,0x1c0,0x1c0,0x06ff}, // Lights 7-8-9 on all three levels
//                               {0x111,0x111,0x111,0x02ff},
//                               {0x124,0x124,0x124,0x06ff}, // Lights 3-6-9 on all three levels                               
//                               {0x054,0x054,0x054,0x02ff}, 
 
//                               {0x007,0x007,0x007,0x06ff}, 
//                               {0x111,0x111,0x111,0x02ff},
//                               {0x049,0x049,0x049,0x06ff},                               
//                               {0x054,0x054,0x054,0x02ff},
//                               {0x1c0,0x1c0,0x1c0,0x06ff},
//                               {0x111,0x111,0x111,0x02ff},
//                               {0x124,0x124,0x124,0x06ff},                                
//                               {0x054,0x054,0x054,0x02ff},                     

//         Sweeper
//                               {0x007,0x007,0x007,0x06ff}, // Lights 1-2-3 on all three levels
//                               {0x038,0x038,0x038,0x06ff}, // Lights 4-5-6 on all three levels
//                               {0x1c0,0x1c0,0x1c0,0x06ff}, // Lights 7-8-9 on all three levels
//                               {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels
//                               {0x124,0x124,0x124,0x06ff}, // Lights 3-6-9 on all three levels                               
//                               {0x092,0x092,0x092,0x06ff}, // Lights 2-5-8 on all three levels
//                               {0x049,0x049,0x049,0x06ff}, // Lights 1-4-7 on all three levels                              
//                               {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels
//                              {0x007,0x007,0x007,0x06ff}, // Lights 1-2-3 on all three levels
//                               {0x038,0x038,0x038,0x06ff}, // Lights 4-5-6 on all three levels
//                               {0x1c0,0x1c0,0x1c0,0x06ff}, // Lights 7-8-9 on all three levels
//                              {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels
//                               {0x124,0x124,0x124,0x06ff}, // Lights 3-6-9 on all three levels                               
//                               {0x092,0x092,0x092,0x06ff}, // Lights 2-5-8 on all three levels
//                               {0x049,0x049,0x049,0x06ff}, // Lights 1-4-7 on all three levels                              
//                               {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels

//         Raindrops
// 0x000 = none
// 0x001 = LED 1
// 0x201 = LED 1
// 0x004 = LED 3
// 0x010 = LED 5
// 0x020 = LED 6
// 0x100 = LED 9
// 0x281 = LEDs 1-8
// 0x101 = LEDs 1-9
// 0x301 = LEDs 1-9
// 0x221 = LEDs 1-6
// 0x211 = LEDs 1-5
// 0x411 = LEDs 1-5
// 0x009 = LEDs 1-4
// 0x006 = LEDs 2-3
// 0x030 = LEDs 5-6
// 0x050 = LEDs 5-7
// 0x814 = LEDs 3-5

// 0x034 = LEDs 3-5-6
// 0x514 = LEDs 3-5-9
// 0x381 = LEDs 1-8-9
// 0x121 = LEDs 1-6-9
// 0x385 = LEDs 1-3-8-9
// 0x712 = LEDs 2-5-9

//                               {0x000,0x000,0x001,0x02ff}, 
//                               {0x000,0x001,0x010,0x02ff}, 
//                               {0x001,0x010,0x100,0x02ff}, 
//                               {0x010,0x100,0x010,0x02ff}, 
//                               {0x100,0x010,0x020,0x02ff}, 
//                               {0x010,0x020,0x001,0x02ff}, 
//                               {0x020,0x001,0x010,0x02ff}, 
//                               {0x001,0x010,0x004,0x02ff}, 
 
//                               {0x010,0x004,0x001,0x02ff}, 
//                               {0x004,0x001,0x010,0x02ff}, 
//                               {0x001,0x010,0x000,0x02ff}, 
//                               {0x010,0x000,0x100,0x02ff}, 
//                               {0x000,0x100,0x050,0x02ff}, 
//                               {0x100,0x050,0x001,0x02ff}, 
//                               {0x050,0x001,0x000,0x02ff}, 
//                               {0x001,0x000,0x000,0x02ff}, 
                               
                              };
int scannow=0,scandir=0;
// ***********************************************************************************************************
// *
// *                            Initialize the digital pin as an output
// *
// *
// ***********************************************************************************************************
void setup() {                
  for(int a=2;a<=13;a++)
    pinMode(a, OUTPUT); 
}
// ***********************************************************************************************************
// *
// *                            Main loop
// *                  Run the Scan funtion repeatedly
// ***********************************************************************************************************

void loop() {
  while(1)
    Scan(page); 
}


/*******************************************************************************
 * Function Name  : Scan
 * Description    : Set up the LED ON sequence you want, and catche the abobe page    
 *                  element to display
 * Input          : None
 *                  
 * Output         : None
 * Return         : None
 *******************************************************************************/

void Scan(int totalpage)
{
  for(int a=0;a<totalpage;a++)  
  {
    for(int b=0;b<(table[a][3]>>8);b++)
    {
      for(int c=0;c<33;c++)// This loop repeated the cycle of pins output; you can modify the c to change the brightness 
      {
        digitalWrite(2,(table[a][c%3]&0x1));
        digitalWrite(4,(table[a][c%3]&0x2));   
        digitalWrite(7,(table[a][c%3]&0x4));
        digitalWrite(8,(table[a][c%3]&0x8));
        digitalWrite(9,(table[a][c%3]&0x10));   
        digitalWrite(10,(table[a][c%3]&0x20)); 
        digitalWrite(11,(table[a][c%3]&0x40));
        digitalWrite(12,(table[a][c%3]&0x80));   
        digitalWrite(13,((table[a][c%3]&0x100)>>1));
        if(c%3==0)
          analogWrite(3,(0xff-(table[a][3]&0xff)));  
        else if(c%3==1)
          analogWrite(5,(0xff-(table[a][3]&0xff)));        
        else if(c%3==2)
          analogWrite(6,(0xff-(table[a][3]&0xff)));        
        delay(2); 
        digitalWrite(3,1); 
        digitalWrite(5,1);
        digitalWrite(6,1);         
      }
      delay(1);        
    }  
  }
}
