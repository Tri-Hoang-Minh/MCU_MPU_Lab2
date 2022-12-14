/*
 * display7SEG.c
 *
 *  Created on: Oct 28, 2022
 *      Author: Hoang Tri
 */

#include "display7SEG.h"

void  display7SEG_1(int num)     // LED 7 doan kiem soat den giao thong o line 1 va 3
   {

 	 if(num==0)
 	 {
 	 	 // Number 0
 	           HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);          //a
 	  	       HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);      //b
 	  	       HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);     //c
 	  	       HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);     //d
 	  	       HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);     //e
 	  	       HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);     //f
 	  	       HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);    //g
 	 }
 	 if(num==1)
 	 {
 		 // Number 1

 		          HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);          //a
 		 	  	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);      //b
 		 	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);     //c
 		 	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);     //d
 		 	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);     //e
 		 	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);     //f
 		 	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);    //g
 	 }
 	 if(num==2)
 	 {
 		 // Number 2

 		          HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);          //a
 		 	  	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);      //b
 		 	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 1);     //c
 		 	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);     //d
 		 	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);     //e
 		 	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);     //f
 		 	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);    //g
 	 }
 	 if(num==3)
 	 {
 		          HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);          //a
 		 	  	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);      //b
 		 	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);     //c
 		 	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);     //d
 		 	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);     //e
 		 	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);     //f
 		 	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);    //g
 	 }
 	 if(num==4)
 	 {
 		 // Number 4
 		          HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);          //a
 		 	  	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);      //b
 		 	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);     //c
 		 	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);     //d
 		 	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);     //e
 		 	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);     //f
 		 	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);    //g
 	 }
 	 if(num==5)
 	 {
 		 //Number= 5
 		          HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);          //a
 		 	  	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);      //b
 		 	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);     //c
 		 	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);     //d
 		 	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);     //e
 		 	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);     //f
 		 	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);    //g
 	 }
 	 if(num==6)
 	 {
 		 // Number 6
 		          HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);          //a
 		 	  	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);      //b
 		 	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);     //c
 		 	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);     //d
 		 	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);     //e
 		 	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);     //f
 		 	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);    //g
 	 }
 	 if(num==7)
 	 {
 		 // Number 7
 		          HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);          //a
 		 	  	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);      //b
 		 	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);     //c
 		 	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);     //d
 		 	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);     //e
 		 	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);     //f
 		 	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);    //g
 	 }
 	 if(num==8)
 	 {
 		  // Number 8
 		          HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);          //a
 		 	  	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);      //b
 		 	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);     //c
 		 	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);     //d
 		 	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);     //e
 		 	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);     //f
 		 	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);    //g
 	 }
 	 if(num==9)
 	 {
 		 // Number 9
 		          HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);          //a
 		 	  	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);      //b
 		 	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);     //c
 		 	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);     //d
 		 	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);     //e
 		 	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);     //f
 		 	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);    //g
 	 }
   }

void clearAllLED()
{
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
}

