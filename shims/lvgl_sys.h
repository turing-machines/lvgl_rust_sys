#ifndef LVGL_API_H
#define LVGL_API_H

#ifdef __cplusplus
extern "C" {
#endif

#include "../lvgl/lvgl.h"

lv_color_t _LV_COLOR_MAKE(uint8_t r, uint8_t g, uint8_t b);
uint32_t _LV_COLOR_GET_R(lv_color32_t color);
uint32_t _LV_COLOR_GET_G(lv_color32_t color);
uint32_t _LV_COLOR_GET_B(lv_color32_t color);
uint32_t _LV_COLOR_GET_A(lv_color32_t color);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LVGL_API*/
