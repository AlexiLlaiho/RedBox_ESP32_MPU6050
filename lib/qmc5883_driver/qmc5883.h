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

#ifndef __QMC5885_H
#define __QMC5885_H

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
// #include "driver/gpio.h"
// #include <driver/i2c.h>
#include "i2c_driver.h"
#include <esp_log.h>
#include <math.h>

#ifdef __cplusplus
extern "C"
{
#endif
    void gpio_conf();
    void i2c_setup(void);
    void hmc5883l_init(void);
    void qmc5883_test(void);
    void qmc5883_data(int16_t *q_x, int16_t *q_y, int16_t *q_z);

    void task_qmc5883l(void *ignore);

#ifdef __cplusplus
}
#endif

#endif