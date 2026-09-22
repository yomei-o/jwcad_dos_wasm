/* 入出力 ⑥ＤＸＦ —— the drawing as a DXF file, and back.
 *
 * Everything here was read out of the files the original writes.  The road
 * that makes one is
 *
 *     sh tools/origstr.sh "30 296 left" "110 8 left" "460 8 left" \
 *         "100 8 left" "460 8 left" "key enter" "220 8 left"
 *
 * (入出力 → ①ﾌｧｲﾙ → ⑥ＤＸＦ → ① 保存 → ③ 新規 保存 → [Enter] → ① 実 行),
 * and what it leaves is `tmp/ostr/root/<name>.dxf`.  **A big drawing needs a
 * long WAIT** -- SAMPLE1 came out cut off in the middle of an entity until
 * the wait between presses was raised to 600,000,000 instructions.
 *
 * What the files say:
 *
 *   * group codes are written `%3d`, whole numbers `%5d` and every other
 *     number `%.8g`; the lines end CRLF
 *   * the HEADER holds `$EXTMIN` 0,0 and `$EXTMAX` the paper, in real
 *     millimetres -- 297,210 at 1/1 and 29700,21000 at 1/100
 *   * the TABLES section is `orig/DXF_HDR.DAT` almost verbatim (the LTYPE
 *     and STYLE tables), with the codes re-aligned -- the file has one `49`
 *     where the output has ` 49` -- and then a LAYER table of its own
 *   * the layers are named `<group>-<layer>` and `ADD_LINE` is always last
 *   * the entities go **layer by layer**, and within a layer the lines, then
 *     the arcs, then the texts, then the points: SAMPLE1 comes out 762 LINE,
 *     8 ARC, 70 LINE, 6 ARC, 4 TEXT
 *   * `62` is the colour the pen draws in (jw_view_pen_colour) and `6` is the
 *     line type's name out of the LTYPE table
 */
#ifndef JW_DXF_H
#define JW_DXF_H

#include "jwc.h"

/* Write the drawing as a DXF.  `hdr` is `orig/DXF_HDR.DAT`. */
int jwc_dxf_write(const Jwc *d, const char *path, const char *hdr);

/* Read one back.  The drawing keeps the paper and the scale it is given, so
 * this takes the one in hand and adds to it. */
int jwc_dxf_read(Jwc *d, const char *path, const char **why);

#endif
