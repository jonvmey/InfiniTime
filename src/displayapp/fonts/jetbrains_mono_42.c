/*******************************************************************************
 * Size: 42 px
 * Bpp: 1
 * Opts:
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef JETBRAINS_MONO_42
#define JETBRAINS_MONO_42 1
#endif

#if JETBRAINS_MONO_42

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0025 "%" */
    0x1f, 0x80, 0x7, 0x3f, 0xc0, 0xe, 0x7f, 0xe0,
    0x1c, 0xf0, 0xf0, 0x1c, 0xe0, 0x70, 0x38, 0xe0,
    0x70, 0x70, 0xe0, 0x70, 0x70, 0xe0, 0x70, 0xe0,
    0xe0, 0x71, 0xc0, 0xe0, 0x71, 0xc0, 0xf0, 0xf3,
    0x80, 0x7f, 0xe7, 0x0, 0x3f, 0xc7, 0x0, 0x1f,
    0x8e, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x3c, 0x0,
    0x0, 0x38, 0x0, 0x0, 0x71, 0xf8, 0x0, 0xe3,
    0xfc, 0x0, 0xe7, 0xfe, 0x1, 0xcf, 0xf, 0x3,
    0x8e, 0x7, 0x3, 0x8e, 0x7, 0x7, 0xe, 0x7,
    0xe, 0xe, 0x7, 0xe, 0xe, 0x7, 0x1c, 0xe,
    0x7, 0x38, 0xf, 0xf, 0x38, 0x7, 0xfe, 0x70,
    0x3, 0xfc, 0xe0, 0x1, 0xf8,

    /* U+0030 "0" */
    0x3, 0xf8, 0x1, 0xff, 0xc0, 0xff, 0xfe, 0x1f,
    0x7, 0xc7, 0xc0, 0x7c, 0xf0, 0x7, 0xbc, 0x0,
    0x7f, 0x80, 0xf, 0xf0, 0x1, 0xfe, 0x0, 0x3f,
    0xc0, 0x7, 0xf8, 0x0, 0xff, 0xe, 0x1f, 0xe3,
    0xe3, 0xfc, 0x7c, 0x7f, 0x8f, 0x8f, 0xf0, 0xe1,
    0xfe, 0x0, 0x3f, 0xc0, 0x7, 0xf8, 0x0, 0xff,
    0x0, 0x1f, 0xe0, 0x3, 0xfc, 0x0, 0x7f, 0x80,
    0xf, 0xf0, 0x1, 0xef, 0x0, 0x79, 0xf0, 0x1f,
    0x1f, 0x7, 0xc3, 0xff, 0xf8, 0x1f, 0xfc, 0x0,
    0xfe, 0x0,

    /* U+0031 "1" */
    0x3, 0xf0, 0x0, 0xfe, 0x0, 0x3f, 0xc0, 0x1f,
    0xf8, 0x7, 0xcf, 0x1, 0xf1, 0xe0, 0x3c, 0x3c,
    0x7, 0x7, 0x80, 0x80, 0xf0, 0x0, 0x1e, 0x0,
    0x3, 0xc0, 0x0, 0x78, 0x0, 0xf, 0x0, 0x1,
    0xe0, 0x0, 0x3c, 0x0, 0x7, 0x80, 0x0, 0xf0,
    0x0, 0x1e, 0x0, 0x3, 0xc0, 0x0, 0x78, 0x0,
    0xf, 0x0, 0x1, 0xe0, 0x0, 0x3c, 0x0, 0x7,
    0x80, 0x0, 0xf0, 0x0, 0x1e, 0x0, 0x3, 0xc0,
    0x0, 0x78, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf8,

    /* U+0032 "2" */
    0x3, 0xf8, 0x1, 0xff, 0xc0, 0x7f, 0xfe, 0x1f,
    0x7, 0xc7, 0xc0, 0x3c, 0xf0, 0x7, 0xbc, 0x0,
    0x7f, 0x80, 0xf, 0xf0, 0x1, 0xe0, 0x0, 0x3c,
    0x0, 0x7, 0x80, 0x1, 0xf0, 0x0, 0x3c, 0x0,
    0xf, 0x80, 0x1, 0xe0, 0x0, 0x7c, 0x0, 0x1f,
    0x0, 0x7, 0xc0, 0x1, 0xf0, 0x0, 0x7e, 0x0,
    0xf, 0x80, 0x3, 0xe0, 0x0, 0xf8, 0x0, 0x3e,
    0x0, 0xf, 0x80, 0x3, 0xe0, 0x0, 0xf8, 0x0,
    0x3e, 0x0, 0x7, 0xff, 0xfe, 0xff, 0xff, 0xdf,
    0xff, 0xf8,

    /* U+0033 "3" */
    0x7f, 0xff, 0x8f, 0xff, 0xf1, 0xff, 0xfe, 0x0,
    0x3, 0xc0, 0x0, 0xf0, 0x0, 0x3c, 0x0, 0xf,
    0x0, 0x3, 0xc0, 0x0, 0xf0, 0x0, 0x3e, 0x0,
    0x7, 0x80, 0x1, 0xfe, 0x0, 0x3f, 0xf0, 0x7,
    0xff, 0x0, 0x3, 0xf0, 0x0, 0x1e, 0x0, 0x3,
    0xc0, 0x0, 0x3c, 0x0, 0x7, 0x80, 0x0, 0xf0,
    0x0, 0x1e, 0x0, 0x3, 0xfc, 0x0, 0x7f, 0x80,
    0xf, 0xf0, 0x1, 0xef, 0x0, 0x79, 0xf0, 0x1f,
    0x1f, 0x7, 0xc3, 0xff, 0xf0, 0x1f, 0xfc, 0x0,
    0xfe, 0x0,

    /* U+0034 "4" */
    0x0, 0x1e, 0x0, 0xf, 0x80, 0x3, 0xc0, 0x1,
    0xe0, 0x0, 0x78, 0x0, 0x3c, 0x0, 0x1f, 0x0,
    0x7, 0x80, 0x3, 0xc0, 0x1, 0xf0, 0x0, 0x78,
    0x0, 0x3e, 0x0, 0xf, 0x0, 0x7, 0x80, 0xf3,
    0xe0, 0x3c, 0xf0, 0xf, 0x7c, 0x3, 0xde, 0x0,
    0xff, 0x0, 0x3f, 0xc0, 0xf, 0xf0, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x3,
    0xc0, 0x0, 0xf0, 0x0, 0x3c, 0x0, 0xf, 0x0,
    0x3, 0xc0, 0x0, 0xf0, 0x0, 0x3c,

    /* U+0035 "5" */
    0x7f, 0xff, 0x9f, 0xff, 0xe7, 0xff, 0xf9, 0xe0,
    0x0, 0x78, 0x0, 0x1e, 0x0, 0x7, 0x80, 0x1,
    0xe0, 0x0, 0x78, 0x0, 0x1e, 0x0, 0x7, 0x8f,
    0x81, 0xef, 0xf8, 0x7f, 0xff, 0x1f, 0x87, 0xe7,
    0xc0, 0x79, 0xe0, 0x1f, 0x0, 0x3, 0xc0, 0x0,
    0xf0, 0x0, 0x3c, 0x0, 0xf, 0x0, 0x3, 0xc0,
    0x0, 0xf0, 0x0, 0x3c, 0x0, 0xf, 0xf0, 0x3,
    0xde, 0x1, 0xe7, 0x80, 0x78, 0xf8, 0x7e, 0x3f,
    0xff, 0x3, 0xff, 0x80, 0x3f, 0x0,

    /* U+0036 "6" */
    0x0, 0x3c, 0x0, 0x7, 0x80, 0x0, 0x78, 0x0,
    0xf, 0x0, 0x1, 0xe0, 0x0, 0x1e, 0x0, 0x3,
    0xc0, 0x0, 0x3c, 0x0, 0x7, 0x80, 0x0, 0x70,
    0x0, 0xf, 0x0, 0x1, 0xe7, 0xc0, 0x1f, 0xff,
    0x3, 0xff, 0xfc, 0x3f, 0xf, 0xc7, 0xc0, 0x3e,
    0x78, 0x1, 0xe7, 0x80, 0x1f, 0xf0, 0x0, 0xff,
    0x0, 0xf, 0xf0, 0x0, 0xff, 0x0, 0xf, 0xf0,
    0x0, 0xff, 0x0, 0xf, 0xf8, 0x1, 0xe7, 0x80,
    0x1e, 0x7c, 0x3, 0xe3, 0xf0, 0xfc, 0x1f, 0xff,
    0x80, 0xff, 0xf0, 0x1, 0xf8, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x1e, 0xf0, 0x1, 0xef, 0x0, 0x1e, 0xf0,
    0x3, 0xcf, 0x0, 0x3c, 0x0, 0x3, 0x80, 0x0,
    0x78, 0x0, 0x7, 0x80, 0x0, 0xf0, 0x0, 0xf,
    0x0, 0x0, 0xf0, 0x0, 0x1e, 0x0, 0x1, 0xe0,
    0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0,
    0x7, 0x80, 0x0, 0x78, 0x0, 0x7, 0x80, 0x0,
    0xf0, 0x0, 0xf, 0x0, 0x1, 0xe0, 0x0, 0x1e,
    0x0, 0x1, 0xe0, 0x0, 0x3c, 0x0, 0x3, 0xc0,
    0x0, 0x7c, 0x0, 0x7, 0x80, 0x0,

    /* U+0038 "8" */
    0x1, 0xf8, 0x0, 0xff, 0xf0, 0x1f, 0xff, 0x83,
    0xf0, 0xfc, 0x3c, 0x3, 0xc7, 0xc0, 0x3e, 0x78,
    0x1, 0xe7, 0x80, 0x1e, 0x78, 0x1, 0xe7, 0x80,
    0x1e, 0x3c, 0x3, 0xc3, 0xe0, 0x7c, 0x1f, 0xf,
    0x80, 0xff, 0xf0, 0x3, 0xfc, 0x0, 0x7f, 0xe0,
    0xf, 0xff, 0x3, 0xe0, 0x7c, 0x3c, 0x3, 0xc7,
    0x80, 0x1e, 0xf0, 0x0, 0xff, 0x0, 0xf, 0xf0,
    0x0, 0xff, 0x0, 0xf, 0xf0, 0x0, 0xff, 0x80,
    0x1f, 0x7c, 0x3, 0xe7, 0xe0, 0x7e, 0x3f, 0xff,
    0xc0, 0xff, 0xf0, 0x3, 0xfc, 0x0,

    /* U+0039 "9" */
    0x3, 0xf8, 0x0, 0xff, 0xf0, 0x1f, 0xff, 0x83,
    0xe0, 0xfc, 0x7c, 0x3, 0xe7, 0x80, 0x1e, 0xf8,
    0x1, 0xff, 0x0, 0xf, 0xf0, 0x0, 0xff, 0x0,
    0xf, 0xf0, 0x0, 0xff, 0x0, 0xf, 0xf8, 0x1,
    0xf7, 0x80, 0x1e, 0x7c, 0x3, 0xe3, 0xe0, 0x7e,
    0x3f, 0xff, 0xc1, 0xff, 0xfc, 0x7, 0xe7, 0x80,
    0x0, 0xf8, 0x0, 0xf, 0x0, 0x1, 0xe0, 0x0,
    0x1e, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x7,
    0x80, 0x0, 0xf8, 0x0, 0xf, 0x0, 0x1, 0xe0,
    0x0, 0x1e, 0x0, 0x3, 0xc0, 0x0,

    /* U+003A ":" */
    0x7d, 0xff, 0xff, 0xff, 0xef, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xf7, 0xff, 0xff, 0xff, 0xbe
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 403, .box_w = 24, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 403, .box_w = 19, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 403, .box_w = 19, .box_h = 31, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 403, .box_w = 19, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 403, .box_w = 19, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 403, .box_w = 18, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 403, .box_w = 18, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 403, .box_w = 20, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 403, .box_w = 20, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 685, .adv_w = 403, .box_w = 20, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 403, .box_w = 20, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 403, .box_w = 7, .box_h = 24, .ofs_x = 9, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 37, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 2,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t jetbrains_mono_42 = {
#else
lv_font_t jetbrains_mono_42 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 31,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -7,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if JETBRAINS_MONO_42*/

