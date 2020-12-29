/*!
 *******************************************************************************
 * @file    .h
 * @author  
 * @version V1.0.0.0
 * @date    20.01.2018
 * @brief   
 * @details 
 *******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT </center></h2>
 *******************************************************************************  
 */

#ifndef __I2C_DRIVER_H
#define __I2C_DRIVER_H

#include "driver/gpio.h"
#include "driver/i2c.h"
#include "esp_log.h"

#define PIN_SDA 21
#define PIN_CLK 22

#ifdef __cplusplus
extern "C"
{
#endif

    void i2c_idf_init(void);

#ifdef __cplusplus
}
#endif

#endif //__I2C_DRIVER_H