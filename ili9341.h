#ifndef _ILI9341_H
#define _ILI9341_H

#include <linux/types.h>
#include <linux/kthread.h>
#include <linux/spi/spi.h>
#include <linux/gpio/consumer.h>

struct device_data
{
    struct spi_device *client;
    struct task_struct *display_thread;
    struct gpio_desc *dc_gpio;
};

#endif /* _ILI9341_H */