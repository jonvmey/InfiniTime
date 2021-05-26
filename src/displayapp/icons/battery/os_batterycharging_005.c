#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CK_OS_BATTERYCHARGING_005
#define LV_ATTRIBUTE_IMG_CK_OS_BATTERYCHARGING_005
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_CK_OS_BATTERYCHARGING_005 uint8_t ck_os_batterycharging_005_map[] = {
  0x6c, 0xfe, 0x6c, 0xff, 	/*Color of index 0*/
  0xe4, 0xe6, 0xe4, 0xff, 	/*Color of index 1*/

  0x03, 0xff, 0xc0, 0x00,
  0x07, 0xff, 0xe0, 0x00,
  0x0f, 0xff, 0xf0, 0x00,
  0x0f, 0xff, 0xf0, 0x00,
  0xff, 0x00, 0xff, 0x00,
  0xff, 0x00, 0xff, 0x00,
  0xff, 0x00, 0xff, 0x00,
  0xff, 0x00, 0xff, 0x00,
  0xf0, 0x00, 0x0f, 0x00,
  0xf0, 0x00, 0x0f, 0x00,
  0xf0, 0x00, 0x0f, 0x00,
  0xf0, 0x00, 0x0f, 0x00,
  0xf0, 0x00, 0x0f, 0x00,
  0xf0, 0x00, 0x0f, 0x00,
  0xf0, 0x00, 0x00, 0x00,
  0xf0, 0x00, 0x00, 0x00,
  0xf0, 0x00, 0x07, 0x00,
  0xf0, 0x00, 0x0f, 0x00,
  0xf0, 0x00, 0x1f, 0x00,
  0xf0, 0x00, 0x3e, 0x00,
  0xf0, 0x00, 0x7e, 0x00,
  0xf0, 0x00, 0xfc, 0x00,
  0xf0, 0x01, 0xff, 0xf0,
  0xf0, 0x03, 0xff, 0xf0,
  0xf0, 0x03, 0xff, 0xf0,
  0xf0, 0x03, 0xff, 0xe0,
  0xf0, 0x00, 0x0f, 0xc0,
  0xf0, 0x00, 0x1f, 0x80,
  0xff, 0xff, 0x3f, 0x00,
  0xff, 0xff, 0x3e, 0x00,
  0xff, 0xff, 0x3c, 0x00,
  0xff, 0xff, 0x38, 0x00,
};

const lv_img_dsc_t ck_os_batterycharging_005 = {
  .header.always_zero = 0,
  .header.w = 28,
  .header.h = 32,
  .data_size = 136,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = ck_os_batterycharging_005_map,
};
