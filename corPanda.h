/* cortexugo.h */


#ifndef FILECORPANDAW
#define FILECORPANDAH


/* A red rectangle! */


#define CORPANDAW 17
#define CORPANDAH 17


typedef struct
{
  int width;
  int height;
  int chars[CORPANDAW * CORPANDAH];
  int colors[CORPANDAW * CORPANDAH];
} _CORPANDA;


_CORPANDA CORPANDA = 
{
  CORPANDAW,
  CORPANDAH,
  {
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219, 
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219,
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219, 
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219, 
   219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219,  219, 219, 219, 
  },
  {
    14,  14,   14,  14,   14,  14,   14,  14,  000, 000,   14,  14,   14,  14,   14,  14,  14, 
    14, 000,  000,  14,   14,  14,   14, 000,  000, 000,  000,  14,   14,  14,   14,  14,  14,
   000, 000,  000, 000,  255, 255,  255, 000,  000, 000,  000,  14,   14,  14,   14,  14,  14,
   000, 000,  255, 255,  255, 255,  255, 255,  255, 255,  000, 255,  255, 255,  000,  14,  14,
    14, 255,  255, 255,  255, 255,  255, 255,  255, 255,  255, 000,  255, 255,  255, 000,  14,
   255, 255,  255, 000,  000, 255,  255, 000,  000, 255,  255, 255,  000, 255,  255, 255, 000,
   000, 255,  000, 004,  000, 255,  255, 000,  004, 000,  255, 255,  000, 255,  255, 255, 000,
   000, 255,  000, 000,  255, 255,  255, 255,  000, 000,  255, 255,  000, 255,  255, 255, 000,
   000, 255,  255, 255,  255, 255,  255, 255,  255, 255,  255, 000,  000, 255,  255, 000, 000,
   000, 000,  255, 255,  255, 000,  000, 000,  255, 255,  000, 000,  000, 255,  255, 000, 000,
   000, 000,  000, 255,  255, 255,  000, 255,  255, 000,  000, 000,  000, 255,  000, 000,  14,
   000, 000,  000, 000,  000, 255,  255, 255,  000, 000,  000, 000,  000, 000,  000, 000,  14,
   000, 000,  000, 000,  000, 000,  000, 000,  000, 000,  000, 000,  000, 000,  000, 000,  14,
    14, 000,  000, 000,   14,  14,   14, 000,  000, 000,  000,  14,  000, 000,  000,  14,  14,
    14, 000,  000, 000,  000,  14,   14, 000,  000, 000,  000,  14,  000, 000,   14,  14,  14,
    14,  14,  000, 000,  000,  14,  000, 000,  000, 000,   14,  14,   14,  14,   14,  14,  14,
    14,  14,   14,  14,   14,  14,  000, 000,  000,  14,   14,  14,   14,  14,   14,  14,  14, 
  }


  
};


#endif /* FILEREDRECTANGLEH */