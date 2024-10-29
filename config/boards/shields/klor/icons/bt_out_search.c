#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_BT_OUT_SEARCH
#define LV_ATTRIBUTE_IMG_BT_OUT_SEARCH
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BT_OUT_SEARCH uint8_t bt_out_search_map[] = {
  0xff, 0xff, 0xff, 0xff,   /*Color of index 0*/
  0x00, 0x00, 0x00, 0xff,   /*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x01, 0xff, 0xff, 0x0f, 0xe0, 0x00, 
  0x00, 0xff, 0xff, 0x0f, 0xe0, 0x00, 
  0x00, 0x7f, 0xff, 0x0f, 0xe0, 0x00, 
  0x00, 0x3e, 0x0f, 0x0f, 0xe0, 0x00, 
  0x00, 0x1f, 0x0f, 0x0f, 0xe0, 0x00, 
  0x00, 0x0f, 0x8f, 0x0f, 0xe0, 0x00, 
  0x00, 0x07, 0xcf, 0x0f, 0xe0, 0x00, 
  0x00, 0x03, 0xef, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x0f, 0xe0, 0xf0, 0x00, 
  0x00, 0x00, 0x0f, 0xf0, 0xf0, 0x00, 
  0x00, 0x00, 0x0f, 0xf8, 0xf0, 0x00, 
  0x00, 0x00, 0x0f, 0x7c, 0xf0, 0x00, 
  0x00, 0x7f, 0x0f, 0x3e, 0xf0, 0x00, 
  0x00, 0x7f, 0x0f, 0x1f, 0xf0, 0x00, 
  0x00, 0x7f, 0x0f, 0x0f, 0xf0, 0x00, 
  0x00, 0x7f, 0x0f, 0x07, 0xf0, 0x00, 
  0x00, 0x7f, 0x0f, 0x03, 0xf0, 0x00, 
  0x00, 0x7f, 0x0f, 0x01, 0xf0, 0x00, 
  0x00, 0x7f, 0x0f, 0x00, 0xf0, 0x00, 
  0x00, 0x00, 0x0f, 0x00, 0x70, 0x00, 
  0x00, 0x00, 0x0f, 0x00, 0x20, 0x00, 
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t bt_out_search = {
  .header.always_zero = 0,
  .header.w = 42,
  .header.h = 38,
  .data_size = 237,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = bt_out_search_map,
};
