#define LCD_SPI_CLOCK           (32 * 1000000)      // max rate 15MHz in write mode per DS, 32MHz seen in the wild

#define LCD_SPI_PIN_MOSI        19
#define LCD_SPI_PIN_SCK         18
#define LCD_SPI_PIN_NSS         17

#define LCD_PIN_RESET           20
#define LCD_PIN_DC              21

#define ST7789_TYPE_320x240		0
#define ST7789_TYPE_240x240		1
#define ST7789_TYPE_240x135		2



extern const uint8_t cmd_init_240x135[];



void st7789_init(const uint16_t width, const uint16_t height, const uint8_t rotation);