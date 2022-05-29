#ifndef __ZZ_DEBUG_H__
#define __ZZ_DEBUG_H__

/********************************************************/
/*header includes                                       */
/********************************************************/
#include <stdio.h>
#include "usart.h"

/*!需设置。printf重定向到串口。 0：关闭 1：重定向*/
#define  PRINTF_REDIRECT2UART 1
  
  #if PRINTF_REDIRECT2UART

  /*!需设置。printf重定向到串口端口指定。如串口1：&huart1*/
  #define DEG_UARTPORT &huart2

  /*!需设置。DBG_PRINTF宏。0：关闭 1：开启*/
  #define  DEBUG   1
    #if DEBUG
      #define DBG_PRINTF(fmt, args...)  \
      do{\
        printf("<<File:%s  Line:%d  Function:%s>> ", __FILE__, __LINE__, __FUNCTION__);\
        printf(fmt, ##args);\
      }while(0)
    #else
      #define DBG_PRINTF(fmt, args...)
    #endif
  #endif
#endif
