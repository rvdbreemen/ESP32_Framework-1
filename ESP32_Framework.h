/* 
***************************************************************************  
**  Program  : mainProgram.h
**
**  Copyright (c) 2020 Willem Aandewiel
**
**  TERMS OF USE: MIT License. See bottom of file.                                                            
***************************************************************************      
*/


#define _MAXDINGEN  10
#define _FLD1       20
#define _FLD2        5  
#define _FLD3       13
#define _FLD4       15
#define _FLD5       20
#define _FLD6       30
#define _FLD7       10
#define _FLD8        5

typedef struct _ding {
  char fld1[_FLD1];
  char fld2[_FLD2];
  char fld3[_FLD3];
  char fld4[_FLD4];
  char fld5[_FLD5];
  char fld6[_FLD6];
  char status[2];
} ding_s;

ding_s    dingen[_MAXDINGEN];
uint32_t  blinkyTimer, lastStatusTimer;



/***************************************************************************
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the
* "Software"), to deal in the Software without restriction, including
* without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Software, and to permit
* persons to whom the Software is furnished to do so, subject to the
* following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
* OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
* THE USE OR OTHER DEALINGS IN THE SOFTWARE.
* 
****************************************************************************
*/
