#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_KEY_GENERATE_IMAGE
#define LV_ATTRIBUTE_IMG_KEY_GENERATE_IMAGE
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_KEY_GENERATE_IMAGE
uint8_t img_key_generate_image_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0x41,0x08,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x45,0x29,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xba,0xd6,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x7d,0xef,0x5d,0xef,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xba,0xd6,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xdf,0xff,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdf,0xff,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0x59,0xce,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x59,0xce,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xff,0xff,0xff,0xff,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0x00,0x00,
    0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xb6,0xb5,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x96,0xb5,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x75,0xad,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x55,0xad,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9a,0xd6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x9a,0xd6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x3b,0x3b,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x05,0x2c,0x75,0xc5,0xf6,0xf6,0xc5,0x75,0x2c,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0x5a,0xac,0xeb,0xfd,0xda,0x93,0x93,0xda,0xfd,0xec,0xac,0x5a,0x12,0x00,0x00,0x00,
    0x00,0x00,0x19,0xb3,0xfd,0xec,0xac,0x5b,0x1b,0x00,0x00,0x1b,0x5b,0xac,0xec,0xfd,0xb4,0x19,0x00,0x00,0x00,0x00,0x64,0xfe,0x96,0x2b,0x05,0x00,0x00,0x02,0x02,0x00,0x00,0x05,0x2b,0x96,0xfe,0x65,0x00,0x00,
    0x00,0x00,0x80,0xf7,0x39,0x00,0x00,0x01,0x48,0xa7,0xa7,0x48,0x01,0x00,0x00,0x39,0xf7,0x80,0x00,0x00,0x00,0x00,0x80,0xf6,0x39,0x00,0x00,0x38,0xe7,0xf0,0xf0,0xe7,0x38,0x00,0x00,0x39,0xf6,0x80,0x00,0x00,
    0x00,0x00,0x80,0xf6,0x39,0x00,0x00,0x77,0xfe,0x5a,0x5a,0xfd,0x78,0x00,0x00,0x39,0xf6,0x80,0x00,0x00,0x00,0x00,0x80,0xf6,0x39,0x00,0x00,0x60,0xfd,0xa5,0xa5,0xfd,0x60,0x00,0x00,0x39,0xf6,0x81,0x00,0x00,
    0x00,0x00,0x78,0xfa,0x43,0x00,0x00,0x13,0xa5,0xfd,0xfd,0xa5,0x13,0x00,0x00,0x43,0xfa,0x78,0x00,0x00,0x00,0x00,0x50,0xfc,0x7d,0x00,0x00,0x00,0x16,0xd1,0xd1,0x16,0x00,0x00,0x00,0x7c,0xfc,0x50,0x00,0x00,
    0x00,0x00,0x17,0xd0,0xdd,0x29,0x00,0x00,0x0b,0xcb,0xcb,0x0b,0x00,0x00,0x29,0xdd,0xd0,0x17,0x00,0x00,0x00,0x00,0x00,0x5d,0xfa,0xb5,0x18,0x00,0x03,0x75,0x75,0x03,0x00,0x18,0xb5,0xfa,0x5d,0x00,0x00,0x00,
    0x00,0x00,0x00,0x05,0x88,0xfe,0xb6,0x27,0x00,0x00,0x00,0x00,0x27,0xb6,0xfe,0x88,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x87,0xfa,0xd6,0x56,0x06,0x06,0x56,0xd6,0xfa,0x87,0x0a,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x05,0x63,0xe1,0xf9,0xab,0xab,0xf9,0xe2,0x63,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2d,0xa0,0xf1,0xf1,0xa0,0x2d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x33,0x33,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t img_key_generate_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 20,
  .header.h = 20,
  .header.stride = 40,
  .data_size = sizeof(img_key_generate_image_map),
  .data = img_key_generate_image_map,
};

