/* The dates jwcv222h.lzh carries, for the port to show in
 * the file list.  Written by tools/lzhdates.py --c.
 *
 * A drawing has no date of its own inside it, and the copies
 * baked into the .wasm carry the time the build ran -- so the
 * distribution is the only place the real ones are. */
static const struct {
    const char *name;
    const char *when;    /* as the list shows it */
    unsigned long stamp; /* DOS date<<16 | time, for the order */
} JW_FILE_DATE[] = {
    { "SAMPLE0.JWC", "95/08/31 02:01", 0x1F1F1022ul },
    { "SAMPLE1.JWC", "95/08/31 02:01", 0x1F1F1020ul },
    { "SAMPLE2.JWC", "93/10/31 01:56", 0x1B5F0F0Ful },
    { "SAMPLE3.JWC", "93/10/31 01:56", 0x1B5F0F0Aul },
    { "SAMPLE4.JWC", "93/10/31 01:56", 0x1B5F0F05ul },
    { "SAMPLE5.JWC", "93/10/31 01:56", 0x1B5F0F00ul },
    { "TEST1.JWC", "93/09/12 01:56", 0x1B2C0F19ul },
    { "TEST2.JWC", "93/09/12 01:56", 0x1B2C0F14ul },
    { "TEST3.JWC", "93/09/12 01:56", 0x1B2C0F0Ful },
    { "TEST4.JWC", "93/09/12 01:56", 0x1B2C0F0Aul },
    { "TEST5.JWC", "93/09/12 01:56", 0x1B2C0F05ul },
    { "TEST6.JWC", "93/09/12 01:56", 0x1B2C0F02ul },
    { "JW_SAMPL.BAT", "98/10/17 02:22", 0x255112DCul },
    { "SAMPLE6.JWC", "97/09/18 02:21", 0x233212A0ul },
    { "TEST7.JWC", "98/10/17 02:22", 0x255112DCul },
    { 0, 0, 0 },
};
