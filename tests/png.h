/* A minimal indexed-PNG writer for the test harnesses (tests/png.c). */
#ifndef JW_PNG_H
#define JW_PNG_H

void png_indexed(const char *path, int w, int h, const unsigned char *px,
                 const unsigned char pal[256][3]);

#endif
