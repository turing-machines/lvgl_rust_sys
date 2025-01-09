#include "lvgl_sys.h"

lv_color_t _LV_COLOR_MAKE(uint8_t r, uint8_t g, uint8_t b) {
  return lv_color_make(r, g, b);
}

uint32_t _LV_COLOR_GET_R(lv_color32_t color) { return color.red; }

uint32_t _LV_COLOR_GET_G(lv_color32_t color) { return color.green; }

uint32_t _LV_COLOR_GET_B(lv_color32_t color) { return color.blue; }

uint32_t _LV_COLOR_GET_A(lv_color32_t color) { return color.alpha; }
