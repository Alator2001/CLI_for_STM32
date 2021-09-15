#include <stdint.h>
#define UART_RX_BUFFER_SIZE 256

typedef struct Ring_type
{
  uint16_t head;
  uint16_t tail;
  unsigned char buf_arr[UART_RX_BUFFER_SIZE];
} Ring_type;

void ring_buffer_put (Ring_type *buffer, uint8_t *str);
void ring_buffer_pop (Ring_type *buffer, uint8_t *str);
uint16_t ring_buffer_size (Ring_type *buffer);
