#include "zz_debug.h"
/*!
 * @brief printf输出重定向到串口
 */
int fputc(int ch, FILE *f) {
    uint8_t temp[1] = {ch};
    HAL_UART_Transmit(DEG_UARTPORT, temp, 1, 2);
    return ch;
}
