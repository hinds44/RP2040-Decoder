#pragma once
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')
#define SIZE_BYTE_ARRAY 5
#define SIZE_ACTIVE_FUNCTIONS 69
#define DCC_INPUT_PIN 11
#define MOTOR_PWM_FORWARD 12
#define MOTOR_PWM_REVERSE 13
#define V_EMF_ADC_PIN_FORWARD 27
#define V_EMF_ADC_PIN_REVERSE 26
#define PACKAGE_3_BYTES 0b11111111110000000000000000000000000001
#define PACKAGE_MASK_3_BYTES 0b11111111111000000001000000001000000001
#define PACKAGE_4_BYTES 0b11111111110000000000000000000000000000000000001
#define PACKAGE_MASK_4_BYTES 0b11111111111000000001000000001000000001000000001
#define PACKAGE_5_BYTES 0b11111111110000000000000000000000000000000000000000000001
#define PACKAGE_MASK_5_BYTES 0b11111111111000000001000000001000000001000000001000000001
//#define FLASH_TARGET_OFFSET (PICO_FLASH_SIZE_BYTES*2-FLASH_SECTOR_SIZE) // <=> PICO_FLASH_SIZE_BYTES*2 = 2MB*2 = 4MB
#define FLASH_TARGET_OFFSET (512 * 1024) // <=> PICO_FLASH_SIZE_BYTES*2 = 2MB*2 = 4MB
void core1_entry();
void init_speed_helper();
void adjust_pwm_level(uint16_t level);
void gpio_callback_rise(unsigned int gpio, long unsigned int events);