/*
 *  felicagpio.h
 *
 */

#ifndef __FELICA_GPIO_H__
#define __FELICA_GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  INCLUDE FILES FOR MODULE
 */

#include <linux/list.h>
#include <linux/gpio.h>

#include "felica_common.h"
/*
 *  DEFINE
 */

/* common */
enum{
  GPIO_DIRECTION_IN = 0,
  GPIO_DIRECTION_OUT,
};

enum{
  GPIO_LOW_VALUE = 0,
  GPIO_HIGH_VALUE,
};

enum{
  GPIO_CONFIG_ENABLE = 0,
  GPIO_CONFIG_DISABLE,
};

/* felica_pon */
#define GPIO_FELICA_PON   74

/* felica_rfs */
#define GPIO_FELICA_RFS   102

/* felica_int */
#define GPIO_FELICA_INT   92

#define GPIO_FELICA_LOCKCONT   89

#define GPIO_NFC_HSEL   59

/*
 *  FUNCTION PROTOTYPE
 */
int felica_gpio_open(int gpionum, int direction, int value);
void felica_gpio_write(int gpionum, int value);
int felica_gpio_read(int gpionum);
int felica_get_rfs_gpio_num(void);
int felica_get_int_gpio_num(void);

#ifdef __cplusplus
}
#endif

#endif // __FELICA_RFS_H__
