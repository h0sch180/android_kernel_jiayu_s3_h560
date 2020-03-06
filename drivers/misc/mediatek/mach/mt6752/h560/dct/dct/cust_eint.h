/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6752. Copyright MediaTek Inc. (C) 2013.
 * Sun Jul 24 17:08:45 2016
 * Do Not Modify the File.
 */

#ifndef __CUST_EINTH
#define __CUST_EINTH
#ifdef __cplusplus
extern "C" {
#endif
#define CUST_EINTF_TRIGGER_RISING     			1    //High Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_FALLING    			2    //Low Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_HIGH      				4    //High Polarity and Level Sensitive
#define CUST_EINTF_TRIGGER_LOW       				8    //Low Polarity and Level Sensitive
#define CUST_EINT_DEBOUNCE_DISABLE          0
#define CUST_EINT_DEBOUNCE_ENABLE           1
//////////////////////////////////////////////////////////////////////////////


#define CUST_EINT_GYRO_NUM              2
#define CUST_EINT_GYRO_DEBOUNCE_CN      0
#define CUST_EINT_GYRO_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_GYRO_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_ACCDET_NUM              3
#define CUST_EINT_ACCDET_DEBOUNCE_CN      256
#define CUST_EINT_ACCDET_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_ACCDET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_TOUCH_PANEL_NUM              10
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_CN      0
#define CUST_EINT_TOUCH_PANEL_TYPE							CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_ALS_NUM              11
#define CUST_EINT_ALS_DEBOUNCE_CN      0
#define CUST_EINT_ALS_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_ALS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_IRQ_NFC_NUM              13
#define CUST_EINT_IRQ_NFC_DEBOUNCE_CN      0
#define CUST_EINT_IRQ_NFC_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_IRQ_NFC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_EXT_BUCK_OC_NUM              14
#define CUST_EINT_EXT_BUCK_OC_DEBOUNCE_CN      0
#define CUST_EINT_EXT_BUCK_OC_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_EXT_BUCK_OC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MSE_NUM              48
#define CUST_EINT_MSE_DEBOUNCE_CN      0
#define CUST_EINT_MSE_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_MSE_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_HALL_NUM              49
#define CUST_EINT_HALL_DEBOUNCE_CN      0
#define CUST_EINT_HALL_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_HALL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_WIFI_NUM              50
#define CUST_EINT_WIFI_DEBOUNCE_CN      0
#define CUST_EINT_WIFI_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_WIFI_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_CHR_STAT_NUM              52
#define CUST_EINT_CHR_STAT_DEBOUNCE_CN      0
#define CUST_EINT_CHR_STAT_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_CHR_STAT_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE



//////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
#endif //_CUST_EINT_H


