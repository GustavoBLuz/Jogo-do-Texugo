/* corCHOCOLATE.h */


#ifndef FILECORCHOCOLATEW
#define FILECORCHOCOLATEH


/* A red rectangle! */


#define CORCHOCOLATEW 7
#define CORCHOCOLATEH 14


typedef struct
{
  int width;
  int height;
  int chars[CORCHOCOLATEW * CORCHOCOLATEH];
  int colors[CORCHOCOLATEW * CORCHOCOLATEH];
} _CORCHOCOLATE;


_CORCHOCOLATE CORCHOCOLATE = 
{
  CORCHOCOLATEW,
  CORCHOCOLATEH,
  {
   219, 219,  219, 219,  219, 219,  219,
   219, 219,  219, 219,  219, 219,  219, 
   219, 219,  219, 219,  219, 219,  219, 
   219, 219,  219, 219,  219, 219,  219, 
   219, 219,  219, 219,  219, 219,  219,
   219, 219,  219, 219,  219, 219,  219,
   219, 219,  219, 219,  219, 219,  219,
   219, 219,  219, 219,  219, 219,  219, 
   219, 219,  219, 219,  219, 219,  219, 
   219, 219,  219, 219,  219, 219,  219, 
   219, 219,  219, 219,  219, 219,  219, 
   219, 219,  219, 219,  219, 219,  219, 
   219, 219,  219, 219,  219, 219,  219,
   219, 219,  219, 219,  219, 219,  219, 
  },
  {
   000, 000,  000, 000,  000, 000,  000,
   000, 006,  006, 000,  006, 006,  000, 
   000, 006,  006, 000,  006, 006,  000, 
   000, 000,  000, 000,  000, 000,  000, 
   000, 006,  006, 000,  006, 006,  000,
   000, 000,  000, 000,  000, 000,  000,
   000,  14,   14,  14,   14,  14,  000,
   000, 000,  000, 000,  000, 000,  000, 
   000, 004,   14, 004,   14, 004,  000, 
   000, 004,   14, 004,   14, 004,  000, 
   000, 004,   14, 004,   14, 004,  000, 
   000, 004,   14,  14,   14, 004,  000, 
   000, 004,  004, 004,  004, 004,  000,
   000, 000,  000, 000,  000, 000,  000, 
  }


  
};


#endif /* FILEREDRECTANGLEH */
