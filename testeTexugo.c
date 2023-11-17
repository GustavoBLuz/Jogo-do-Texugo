
#include <Windows.h> /* for HANDLE type, and console functions */
#include <stdio.h> /* standard input/output */
#include <stdlib.h> /* included for rand */
#include <stdbool.h>
#include <math.h>
#include "cortexugo.h" /* our image file */
#include "corCachorro.h" /* our image file */

#define WIDTH 150
#define HEIGHT 66 

#define _AltuTexugo_ 15
#define _LargTexugo_ 17
#define _AltuChocolate_ 4
#define _LargChocolate_ 8
#define _AltuTiara_ 4
#define _LargTiara_ 8
#define _AltuEsteroide_ 4
#define _LargEsteroide_ 8
#define _AltuDetectorRifa_ 4
#define _LargDetectorRifa_ 8
#define _AltuCachorro_ 15
#define _LargCachorro_ 17
#define _AltuPanda_ 15
#define _LargPanda_ 17
#define _AltuVendedor_ 15
#define _LargVendedor_ 17

#define _CodTiro_ 15


HANDLE wHnd; /* write (output) handle */
HANDLE rHnd; /* read (input handle */ 

void writeImageToBuffer(CHAR_INFO buffer[], int chars[], int colors[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
  int x, y;

  
  for (y = 0; y < imageHeight; ++y)
  {
    for (x = 0; x < imageWidth; ++x)
    {
      buffer[(x + xoffset) + WIDTH * (y + yoffset)].Char.AsciiChar = chars[x + imageWidth * y];
      buffer[(x + xoffset) + WIDTH * (y + yoffset)].Attributes = colors[x + imageWidth * y];
    }
  }
}


/*void InscreveTexugo(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                   int PosX, int PosY, 
                   char Texugo[_AltuTexugo_][_LargTexugo_],
				   int Atributos)
{
	int x, y;
	
	for (y = 0; y < _AltuTexugo_; ++y)
    {
      for (x = 0; x < _LargTexugo_; ++x)
      {
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Char.AsciiChar = Texugo[y][x];
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Attributes = Atributos; 
      }
    
    }
}*/

void InscreveChocolate(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                   int PosX, int PosY, 
                   char Chocolate[_AltuChocolate_][_LargChocolate_],
				   int Atributos)
{
	int x, y;
	
	for (y = 0; y < _AltuChocolate_; ++y)
    {
      for (x = 0; x < _LargChocolate_; ++x)
      {
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Char.AsciiChar = Chocolate[y][x];
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Attributes = Atributos; 
      }
    
    }
}

void InscreveTiara(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                   int PosX, int PosY, 
                   char Tiara[_AltuTiara_][_LargTiara_],
				   int Atributos)
{
	int x, y;
	
	for (y = 0; y < _AltuTiara_; ++y)
    {
      for (x = 0; x < _LargTiara_; ++x)
      {
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Char.AsciiChar = Tiara[y][x];
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Attributes = Atributos; 
      }
    
    }
}

void InscreveEsteroide(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                   int PosX, int PosY, 
                   char Esteroide[_AltuEsteroide_][_LargEsteroide_],
				   int Atributos)
{
	int x, y;
	
	for (y = 0; y < _AltuEsteroide_; ++y)
    {
      for (x = 0; x < _LargEsteroide_; ++x)
      {
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Char.AsciiChar = Esteroide[y][x];
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Attributes = Atributos; 
      }
    
    }
}

void InscreveDetectorRifa(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                   int PosX, int PosY, 
                   char DetectorRifa[_AltuDetectorRifa_][_LargDetectorRifa_],
				   int Atributos)
{
	int x, y;
	
	for (y = 0; y < _AltuDetectorRifa_; ++y)
    {
      for (x = 0; x < _LargDetectorRifa_; ++x)
      {
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Char.AsciiChar = DetectorRifa[y][x];
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Attributes = Atributos; 
      }
    
    }
}

void InscreveCachorro(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                   int PosX, int PosY, 
                   char Cachorro[_AltuCachorro_][_LargCachorro_],
				   int Atributos)
{
	int x, y;
	
	for (y = 0; y < _AltuCachorro_; ++y)
    {
      for (x = 0; x < _LargCachorro_; ++x)
      {
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Char.AsciiChar = Cachorro[y][x];
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Attributes = Atributos; 
      }
    
    }
}

void InscrevePanda(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                   int PosX, int PosY, 
                   char Panda[_AltuPanda_][_LargPanda_],
				   int Atributos)
{
	int x, y;
	
	for (y = 0; y < _AltuPanda_; ++y)
    {
      for (x = 0; x < _LargPanda_; ++x)
      {
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Char.AsciiChar = Panda[y][x];
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Attributes = Atributos; 
      }
    
    }
}

void InscreveVendedor(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                   int PosX, int PosY, 
                   char Vendedor[_AltuVendedor_][_LargVendedor_],
				   int Atributos)
{
	int x, y;
	
	for (y = 0; y < _AltuVendedor_; ++y)
    {
      for (x = 0; x < _LargVendedor_; ++x)
      {
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Char.AsciiChar = Vendedor[y][x];
        consoleBuffer[(PosX+x) + WIDTH * (PosY+y)].Attributes = Atributos; 
      }
    
    }
}

void PintaTela(CHAR_INFO consoleBuffer[WIDTH * HEIGHT], 
               unsigned char CodigoCaracter,
			   unsigned char CodigoCor)
{
	int x, y;
	 int Pontos;
	 
	  
	  for (y = 0; y < HEIGHT; ++y)
	  {
	    for (x = 0; x < WIDTH; ++x)
	    {
	      consoleBuffer[x + WIDTH * y].Char.AsciiChar = CodigoCaracter;
	      consoleBuffer[x + WIDTH * y].Attributes = CodigoCor; 
	    }
	    
	  }

	  // Moldura
	  for (x = 0; x < WIDTH; ++x)
	  {
          // linha inferior
	      consoleBuffer[x + WIDTH * (HEIGHT-1)].Char.AsciiChar = '=';
	      consoleBuffer[x + WIDTH * (HEIGHT-1)].Attributes = 4; 
          // linha superior
	      consoleBuffer[x + WIDTH * (0)].Char.AsciiChar = '=';
	      consoleBuffer[x + WIDTH * (0)].Attributes = 4; 
	  }	
	  for (y = 0; y < HEIGHT; ++y)
	  {
          // linha esquerda
	      consoleBuffer[0 + WIDTH * (y)].Char.AsciiChar = '|';
	      consoleBuffer[0 + WIDTH * (y)].Attributes = 4; 

          // linha direita
	      consoleBuffer[(WIDTH-1) + WIDTH * (y)].Char.AsciiChar = '|';
	      consoleBuffer[(WIDTH-1) + WIDTH * (y)].Attributes = 4; 
	  	
	  }
	 /*
	** desenha os pontos na primeira linha
	*/
	char Linha[30];
	for(x=0;x<30;x++)Linha[x]=255; // limpa buffer
	sprintf(Linha, "PONTOS: %03d VIDAS: %c %c %c %c %c ", Pontos, 3,3,3,3,3);
	for(x=1; x<31; x++)
	{
	consoleBuffer[x + WIDTH * 1].Char.AsciiChar = Linha[x-1];
	consoleBuffer[x + WIDTH * 1].Attributes = 1;
 	}
}

void DesenhaTiro(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                 int PosY, int PosX)
{
	consoleBuffer[PosX + WIDTH * PosY].Char.AsciiChar = _CodTiro_;
	consoleBuffer[PosX + WIDTH * PosY].Attributes = 4+32;                	
}

void AtiraAcima(CHAR_INFO consoleBuffer[WIDTH * HEIGHT],
                int PosY, int PosX, 
				int Controle[10][8],
				int ultLinha)
{
	// desenha o tiro na posição inicial
	DesenhaTiro(consoleBuffer, PosY, PosX);
	
	// inclui o tiro na matriz de controle.
	ultLinha++;
	Controle[ultLinha][0] =  1;    // Tiro!
	Controle[ultLinha][1] =  PosX;
	Controle[ultLinha][2] =  PosY;
	Controle[ultLinha][3] =  1;    // vertical
	Controle[ultLinha][4] =  1;    // acima
	Controle[ultLinha][5] =  1;    // velocidade normal
	Controle[ultLinha][6] =  0;    // sprite 0
	Controle[ultLinha][7] = -1;    // status nao utilizado
}

int main(void)
{
int offsetx, offsety;
int offsetx2, offsety2;
    int Controle[10][8];
    // TIPO | PosX | PosY | Sentido | Direçao | Velocidade | Sprite | Status
    int ultLinha = -1;
    int x, y;
    for(x=0;x<10;x++)
       for(y=0;y<8;y++)
          Controle[x][y] = -1;

  /*	char Texugo[3][_AltuTexugo_][_LargTexugo_] = 
	{
		/* /Sprite 0 
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{196,186,255,193,255,186,196},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,186,255,186,255,255},
			{255,255,202,255,202,255,255}
		},
		
		/* Sprite 1 
		{
			{255,201,205,205,205,187,255},
			{ 92,186,227,255,227,186,255},
			{255,186,255,193,255,186, 92},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,202,255,186,255,255},
			{255,255,255,255,202,255,255}
		},		
		/* Sprite 2 
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{ 47,186,255,193,255,186, 47},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,186,255,202,255,255},
			{255,255,202,255,255,255,255}
		}
	};
	*/
  	char Chocolate[3][_AltuChocolate_][_LargChocolate_] = 
	{
		/* Sprite 0 */
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{196,186,255,193,255,186,196},
			{255,200,206,205,206,188,255},
		},
		
		/* Sprite 1 */
		{
			{255,201,205,205,205,187,255},
			{ 92,186,227,255,227,186,255},
			{255,186,255,193,255,186, 92},
			{255,200,206,205,206,188,255},
		},		
		/* Sprite 2 */
		{
			{255,201,205,205,205,187,255,255},
			{255,186,227,255,227,186,255,255},
			{ 47,186,255,193,255,186, 47,255},
			{255,200,206,205,206,188,255,255},
		}
	};
	
  	char Tiara[3][_AltuTiara_][_LargTiara_] = 
	{
		/* Sprite 0 */
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{196,186,255,193,255,186,196},
			{255,200,206,205,206,188,255},
		},
		
		/* Sprite 1 */
		{
			{255,201,205,205,205,187,255},
			{ 92,186,227,255,227,186,255},
			{255,186,255,193,255,186, 92},
			{255,200,206,205,206,188,255},
		},		
		/* Sprite 2 */
		{
			{255,201,205,205,205,187,255,255},
			{255,186,227,255,227,186,255,255},
			{ 47,186,255,193,255,186, 47,255},
			{255,200,206,205,206,188,255,255},
		}
	};
	
  	char Esteroide[3][_AltuEsteroide_][_LargEsteroide_] = 
	{
		/* Sprite 0 */
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{196,186,255,193,255,186,196},
			{255,200,206,205,206,188,255},
		},
		
		/* Sprite 1 */
		{
			{255,201,205,205,205,187,255},
			{ 92,186,227,255,227,186,255},
			{255,186,255,193,255,186, 92},
			{255,200,206,205,206,188,255},
		},		
		/* Sprite 2 */
		{
			{255,201,205,205,205,187,255,255},
			{255,186,227,255,227,186,255,255},
			{ 47,186,255,193,255,186, 47,255},
			{255,200,206,205,206,188,255,255},
		}
	};
	
  	char DetectorRifa[3][_AltuDetectorRifa_][_LargDetectorRifa_] = 
	{
		/* Sprite 0 */
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{196,186,255,193,255,186,196},
			{255,200,206,205,206,188,255},
		},
		
		/* Sprite 1 */
		{
			{255,201,205,205,205,187,255},
			{ 92,186,227,255,227,186,255},
			{255,186,255,193,255,186, 92},
			{255,200,206,205,206,188,255},
		},		
		/* Sprite 2 */
		{
			{255,201,205,205,205,187,255,255},
			{255,186,227,255,227,186,255,255},
			{ 47,186,255,193,255,186, 47,255},
			{255,200,206,205,206,188,255,255},
		}
	};	
	
  /*	char Cachorro[3][_AltuCachorro_][_LargCachorro_] = 
	{
		/* Sprite 0 
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{196,186,255,193,255,186,196},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,186,255,186,255,255},
			{255,255,202,255,202,255,255}
		},
		
		/* Sprite 1 
		{
			{255,201,205,205,205,187,255},
			{ 92,186,227,255,227,186,255},
			{255,186,255,193,255,186, 92},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,202,255,186,255,255},
			{255,255,255,255,202,255,255}
		},		
		/* Sprite 2 
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{ 47,186,255,193,255,186, 47},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,186,255,202,255,255},
			{255,255,202,255,255,255,255}
		}
	};*/
	
  	char Panda[3][_AltuPanda_][_LargPanda_] = 
	{
		/* Sprite 0 */
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{196,186,255,193,255,186,196},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,186,255,186,255,255},
			{255,255,202,255,202,255,255}
		},
		
		/* Sprite 1 */
		{
			{255,201,205,205,205,187,255},
			{ 92,186,227,255,227,186,255},
			{255,186,255,193,255,186, 92},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,202,255,186,255,255},
			{255,255,255,255,202,255,255}
		},		
		/* Sprite 2 */
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{ 47,186,255,193,255,186, 47},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,186,255,202,255,255},
			{255,255,202,255,255,255,255}
		}
	};
	
  	char Vendedor[3][_AltuVendedor_][_LargVendedor_] = 
	{
		/* Sprite 0 */
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{196,186,255,193,255,186,196},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,186,255,186,255,255},
			{255,255,202,255,202,255,255}
		},
		
		/* Sprite 1 */
		{
			{255,201,205,205,205,187,255},
			{ 92,186,227,255,227,186,255},
			{255,186,255,193,255,186, 92},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,202,255,186,255,255},
			{255,255,255,255,202,255,255}
		},		
		/* Sprite 2 */
		{
			{255,201,205,205,205,187,255},
			{255,186,227,255,227,186,255},
			{ 47,186,255,193,255,186, 47},
			{255,200,206,205,206,188,255},
			{255,255,186,255,186,255,255},
			{255,255,186,255,202,255,255},
			{255,255,202,255,255,255,255}
		}
	};			
  
  srand(time(0));
  
  /* Window size coordinates, be sure to start index at zero! */
  SMALL_RECT windowSize = {0, 0, WIDTH - 1, HEIGHT - 1};

  /* A COORD struct for specificying the console's screen buffer dimensions */
  COORD bufferSize = {WIDTH, HEIGHT};
  
  /* Setting up different variables for passing to WriteConsoleOutput */
  COORD characterBufferSize = {WIDTH, HEIGHT};
  COORD characterPosition = {0, 0};
  SMALL_RECT consoleWriteArea = {0, 0, WIDTH - 1, HEIGHT - 1};
  
  /* A CHAR_INFO structure containing data about a single character */
  CHAR_INFO consoleBuffer[WIDTH * HEIGHT];
 
  /* initialize handles */
  wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
  rHnd = GetStdHandle(STD_INPUT_HANDLE);
 
  /* Set the console's title */
  SetConsoleTitle("O Texugo Explorador de Piramides");
 
  /* Set the window size */
  SetConsoleWindowInfo(wHnd, TRUE, &windowSize);

  /* Set the screen's buffer size */
  SetConsoleScreenBufferSize(wHnd, bufferSize);
  
  int ColorCode = 0;
  char Tecla;
  
  // Inicializa matriz de controle
  // Linha 0: sempre controla o Texugo
  Controle[0][0] =  0; // Texugo
  Controle[0][1] = offsetx; // PosX
  Controle[0][2] = offsety; // PosY
  Controle[0][3] = -1; // Sentido (Texugo controlado pelo teclado)
  Controle[0][4] = -1; // Direção 
  Controle[0][5] =  1; // Velocidade 
  Controle[0][6] =  0; // Sprite 
  Controle[0][7] = -1; // Status 
  ultLinha = 0;
  
  // Linha 2: Chocolate
  Controle[2][0] =  2; // Chocolate
  Controle[2][1] = 50; // PosX
  Controle[2][2] = 20; // PosY
  Controle[2][3] = -1; // Sentido
  Controle[2][4] = -1; // Direção 
  Controle[2][5] = -1; // Velocidade 
  Controle[2][6] =  2; // Sprite 
  Controle[2][7] = -1; // Status 
  ultLinha = 2;
  
  // Linha 3: Tiara
  Controle[3][0] =  3; // Texugo
  Controle[3][1] = 10; // PosX
  Controle[3][2] = 30; // PosY
  Controle[3][3] = -1; // Sentido
  Controle[3][4] = -1; // Direção 
  Controle[3][5] = -1; // Velocidade 
  Controle[3][6] =  3; // Sprite 
  Controle[3][7] = -1; // Status 
  ultLinha = 3;
  
  // Linha 4: Esteroide
  Controle[4][0] =  4; // Chocolate
  Controle[4][1] = 10; // PosX
  Controle[4][2] = 10; // PosY
  Controle[4][3] = -1; // Sentido
  Controle[4][4] = -1; // Direção 
  Controle[4][5] = -1; // Velocidade 
  Controle[4][6] =  4; // Sprite 
  Controle[4][7] = -1; // Status 
  ultLinha = 4;
  
  // Linha 5: Detector de Rifa
  Controle[5][0] =  5; // Texugo
  Controle[5][1] = 30; // PosX
  Controle[5][2] = 10; // PosY
  Controle[5][3] = -1; // Sentido
  Controle[5][4] = -1; // Direção
  Controle[5][5] = -1; // Velocidade 
  Controle[5][6] =  5; // Sprite 
  Controle[5][7] = -1; // Status 
  ultLinha = 5; 
  
  // Linha 6: Cachorro
  Controle[6][0] =  6; // Texugo
  Controle[6][1] = 60; // PosX
  Controle[6][2] = 30; // PosY
  Controle[6][3] = -1; // Sentido (Texugo controlado pelo teclado)
  Controle[6][4] = -1; // Direção 
  Controle[6][5] =  1; // Velocidade 
  Controle[6][6] =  6; // Sprite 
  Controle[6][7] = -1; // Status 
  ultLinha = 6;
  
  // Linha 7: Panda
  Controle[7][0] =  7; // Texugo
  Controle[7][1] = 80; // PosX
  Controle[7][2] = 20; // PosY
  Controle[7][3] = -1; // Sentido (Texugo controlado pelo teclado)
  Controle[7][4] = -1; // Direção 
  Controle[7][5] =  1; // Velocidade 
  Controle[7][6] =  7; // Sprite 
  Controle[7][7] = -1; // Status 
  ultLinha = 7;
  
  // Linha 8: Vendedor
  Controle[8][0] =  8; // Texugo
  Controle[8][1] = 70; // PosX
  Controle[8][2] = 10; // PosY
  Controle[8][3] = -1; // Sentido (Texugo controlado pelo teclado)
  Controle[8][4] = -1; // Direção 
  Controle[8][5] =  1; // Velocidade 
  Controle[8][6] =  8; // Sprite 
  Controle[8][7] = -1; // Status 
  ultLinha = 8;      
  
  while(true)
  {
  	
        PintaTela(consoleBuffer, 219, 14/*Cor*/ );

		if(kbhit()) // alguma tecla foi pressionada?
		{
			Tecla = getch();
			switch( Tecla )
			{
			/*	case 32: // barra de espaço - tiro!
				        Beep(500,500);
				        AtiraAcima(consoleBuffer, 
						           (Controle[0][2])-1, 
								   (Controle[0][1]+_LargTexugo_/2),
								    Controle, ultLinha);
								    ultLinha++;
				        break;*/
				default: // para comandos com as setas
				   (Controle[0][6])++;
				   switch(getch())
				   {
					  case	 'w':
					  case	 'W': // a cima
				   	     offsety-=2;
				   	     if(offsety<2) offsety=2;
				   	     break;
					  case 's':
					  case 'S':	  // abaixo
				   	     offsety+=2;
				   	     if(offsety>(HEIGHT-_AltuTexugo_-1)) offsety = HEIGHT-_AltuTexugo_-1;
				   	     break;
						 case 'd':
					  case 'D': // direita
				   	     offsetx+=2;
				   	     if( offsetx >= (WIDTH-_LargTexugo_-1))  offsetx = (WIDTH-_LargTexugo_-1);
				   	     break;
						 case 'a':
					  case 'A': // esquerda
				   	     offsetx-=2;
				   	     if( offsetx < 2)  offsetx = 2;
				   	     break;
				   }
			}
		}

      // Desenha os objetos da matriz de controle.
      int cont=0;
      for(cont=0; cont<=ultLinha; cont++)
      {
      	  switch(Controle[cont][0])
      	  {
      	  	case 0: // Texugo
				      //InscreveTexugo(consoleBuffer, 
					    //            Controle[cont][1], /* PosX */
						//			Controle[cont][2], /* PosY */
						//			Texugo[Controle[cont][6]], /* Texugo[k] */
						//			7+22);
					
						 writeImageToBuffer(consoleBuffer,
						 					CORTEXUGO.chars,
						 					CORTEXUGO.colors,
						 					CORTEXUGO.width,
										    CORTEXUGO.height,
											offsetx +1,
							   				offsety );
					break;
		/*	case 1: // tiro!
			          (Controle[cont][2])--; // o tiro sobe!
			          if(Controle[cont][2] <= 0) // tiro atingiu o topo da tela?
			          {
			          	Controle[cont][7] = 6; // marca tiro para remoção.
					  }
					  else
					  {
					  	DesenhaTiro(consoleBuffer, Controle[cont][2], Controle[cont][1]);
					  }	*/
			case 2: // Chocolate
						InscreveChocolate(consoleBuffer,
										  Controle[cont][1],
										  Controle[cont][2],
										  Chocolate[Controle[cont][6]],
										  2);
										  break;
			case 3: // Tiara
						InscreveTiara(consoleBuffer,
										  Controle[cont][1],
										  Controle[cont][2],
										  Chocolate[Controle[cont][6]],
										  2);
										  break;
			case 4: // Esteroide
						InscreveEsteroide(consoleBuffer,
										  Controle[cont][1],
										  Controle[cont][2],
										  Chocolate[Controle[cont][6]],
										  2);
										  break;
			case 5: // Detector
						InscreveDetectorRifa(consoleBuffer,
										  Controle[cont][1],
										  Controle[cont][2],
										  Chocolate[Controle[cont][6]],
										  2);
										  break;
			case 6: // Cachorro
					//	offsetx2 = ;
            		//	offsety2 = 25;
						 writeImageToBuffer(consoleBuffer,
						 					CORCACHORRO.chars,
						 					CORCACHORRO.colors,
						 					CORCACHORRO.width,
										    CORCACHORRO.height,
											offsetx2 +2,
							   				offsety2 +2);
							   				break;
			case 7: // Panda
						InscrevePanda(consoleBuffer,
										  Controle[cont][1],
										  Controle[cont][2],
										  Chocolate[Controle[cont][6]],
										  2);
										  break;
			case 8: // Vendedor
						InscreveVendedor(consoleBuffer,
										  Controle[cont][1],
										  Controle[cont][2],
										  Chocolate[Controle[cont][6]],
										  2);
										  break;										  										  						  										  										  
		  }
	  }

	/*  // Remove da matriz os objetos marcados para remoção.
	  int i;
	  int contRemocao=0;
	  for(i=ultLinha; i>=0; i--)
	  {
	  	 if(Controle[i][7] == 6) // marcado para remocao?
	  	 {
	  	    for(cont=ultLinha; cont < (10-2); cont++)	
	  	    {
	  	    	Controle[cont][0] = Controle[cont+1][0];
	  	    	Controle[cont][1] = Controle[cont+1][1];
	  	    	Controle[cont][2] = Controle[cont+1][2];
	  	    	Controle[cont][3] = Controle[cont+1][3];
	  	    	Controle[cont][4] = Controle[cont+1][4];
	  	    	Controle[cont][5] = Controle[cont+1][5];
	  	    	Controle[cont][6] = Controle[cont+1][6];
	  	    	Controle[cont][7] = Controle[cont+1][7];
	  	    	ultLinha--;
			}
		 }
	  }*/
	  
	 /* // finalmente, apaga os objetos marcados para remoção.
	  for(i=0; i<ultLinha; i++)
	  {
	  	if(Controle[i][7] == 6)
	  	{
  	    	Controle[i][0] = -1;
  	    	Controle[i][1] = -1;
  	    	Controle[i][2] = -1;
  	    	Controle[i][3] = -1;
  	    	Controle[i][4] = -1;
  	    	Controle[i][5] = -1;
  	    	Controle[i][6] = -1;
  	    	Controle[i][7] = -1;
  	    }  	    	
	  }*/

      if(Controle[0][6]>=2) Controle[0][6]=0;

	  ColorCode++;
	  if(ColorCode>2) ColorCode=0;
	  
	  /* Write our character buffer (a single character currently) to the console buffer */
	  WriteConsoleOutputA(wHnd, 
	                      consoleBuffer, 
						  characterBufferSize, 
						  characterPosition, 
						  &consoleWriteArea);
  	 
  	 offsety2++;
  	if(offsety2 >= HEIGHT - _AltuCachorro_-1) 
  	{
  		offsety2 = 2;
	  }
  }
  getchar();
}






	
