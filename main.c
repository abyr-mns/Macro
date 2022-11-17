/**
  ******************************************************************************
  * @file    main.c
  * @author  Abir Mnasser
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
#define MUL
#define MAX
#define MIN
//#define INTEL
#define OTHERS

/* Private function prototypes -----------------------------------------------*/
  static int sum(int val1, int val2);
  static int mul(int val1, int val2);
  static int min(int val1, int val2);
  static int max(int val1, int val2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifdef SOM
  int ResultSum = sum(10,2);
#endif
#ifdef MUL
  int ResultMul = mul(10,2);
#endif
 #ifdef OTHERS
  int ResultMin = min(10,2);
  int ResultMax = max(10,2);
#endif
  while (1)
  {
   
  }
}
#ifdef SOM
  static int sum(int val1, int val2)
{ 
  return (val1+val2); /*Somme*/
}
#endif
#ifdef MUL
  static int mul(int val1, int val2)
{ 
  return (val1*val2); /*Multiplication*/
}
#endif
#ifdef MIN 

   static int min(int val1, int val2)
{ 
  int c;
  c = (val1<val2)? val1:val2;
  return c;  /*Valeur minimum*/
}
#endif

#ifdef MAX

   static int max(int val1, int val2)
{ 
  int m;
  m = (val1>val2)? val1:val2;
  return m; /*Valeur maximum*/
}

#endif
/**************************************END OF FILE**************************************/