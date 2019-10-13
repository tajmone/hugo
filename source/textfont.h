/*
 * textfont.h
 *
 * Non-proportional 8x8 font definition, in the event that no
 * other font map is available.
 *
 */

#define FONT_WIDTH      8
#define FONT_HEIGHT     8

#define FONT_COUNT        224

static unsigned char text_font[FONT_COUNT][FONT_HEIGHT] =
{
   { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   /* ' ' */
   { 0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00 },   /* '!' */
   { 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00 },   /* '"' */
   { 0x6C, 0x6C, 0xFE, 0x6C, 0xFE, 0x6C, 0x6C, 0x00 },   /* '#' */
   { 0x18, 0x7E, 0xC0, 0x7C, 0x06, 0xFC, 0x18, 0x00 },   /* '$' */
   { 0x00, 0xC6, 0xCC, 0x18, 0x30, 0x66, 0xC6, 0x00 },   /* '%' */
   { 0x38, 0x6C, 0x38, 0x76, 0xDC, 0xCC, 0x76, 0x00 },   /* '&' */
   { 0x30, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00 },   /* ''' */
   { 0x18, 0x30, 0x60, 0x60, 0x60, 0x30, 0x18, 0x00 },   /* '(' */
   { 0x60, 0x30, 0x18, 0x18, 0x18, 0x30, 0x60, 0x00 },   /* ')' */
   { 0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00 },   /* '*' */
   { 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00 },   /* '+' */
   { 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30 },   /* ',' */
   { 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00 },   /* '-' */
   { 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00 },   /* '.' */
   { 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00 },   /* '/' */
   { 0x7C, 0xCE, 0xDE, 0xF6, 0xE6, 0xC6, 0x7C, 0x00 },   /* '0' */
   { 0x30, 0x70, 0x30, 0x30, 0x30, 0x30, 0xFC, 0x00 },   /* '1' */
   { 0x78, 0xCC, 0x0C, 0x38, 0x60, 0xCC, 0xFC, 0x00 },   /* '2' */
   { 0x78, 0xCC, 0x0C, 0x38, 0x0C, 0xCC, 0x78, 0x00 },   /* '3' */
   { 0x1C, 0x3C, 0x6C, 0xCC, 0xFE, 0x0C, 0x1E, 0x00 },   /* '4' */
   { 0xFC, 0xC0, 0xF8, 0x0C, 0x0C, 0xCC, 0x78, 0x00 },   /* '5' */
   { 0x38, 0x60, 0xC0, 0xF8, 0xCC, 0xCC, 0x78, 0x00 },   /* '6' */
   { 0xFC, 0xCC, 0x0C, 0x18, 0x30, 0x30, 0x30, 0x00 },   /* '7' */
   { 0x78, 0xCC, 0xCC, 0x78, 0xCC, 0xCC, 0x78, 0x00 },   /* '8' */
   { 0x78, 0xCC, 0xCC, 0x7C, 0x0C, 0x18, 0x70, 0x00 },   /* '9' */
   { 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00 },   /* ':' */
   { 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30 },   /* ';' */
   { 0x18, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x18, 0x00 },   /* '<' */
   { 0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x00, 0x00 },   /* '=' */
   { 0x60, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x60, 0x00 },   /* '>' */
   { 0x3C, 0x66, 0x0C, 0x18, 0x18, 0x00, 0x18, 0x00 },   /* '?' */
   { 0x7C, 0xC6, 0xDE, 0xDE, 0xDC, 0xC0, 0x7C, 0x00 },   /* '@' */
   { 0x30, 0x78, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0x00 },   /* 'A' */
   { 0xFC, 0x66, 0x66, 0x7C, 0x66, 0x66, 0xFC, 0x00 },   /* 'B' */
   { 0x3C, 0x66, 0xC0, 0xC0, 0xC0, 0x66, 0x3C, 0x00 },   /* 'C' */
   { 0xF8, 0x6C, 0x66, 0x66, 0x66, 0x6C, 0xF8, 0x00 },   /* 'D' */
   { 0xFE, 0x62, 0x68, 0x78, 0x68, 0x62, 0xFE, 0x00 },   /* 'E' */
   { 0xFE, 0x62, 0x68, 0x78, 0x68, 0x60, 0xF0, 0x00 },   /* 'F' */
   { 0x3C, 0x66, 0xC0, 0xC0, 0xCE, 0x66, 0x3A, 0x00 },   /* 'G' */
   { 0xCC, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0xCC, 0x00 },   /* 'H' */
   { 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 },   /* 'I' */
   { 0x1E, 0x0C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78, 0x00 },   /* 'J' */
   { 0xE6, 0x66, 0x6C, 0x78, 0x6C, 0x66, 0xE6, 0x00 },   /* 'K' */
   { 0xF0, 0x60, 0x60, 0x60, 0x62, 0x66, 0xFE, 0x00 },   /* 'L' */
   { 0xC6, 0xEE, 0xFE, 0xFE, 0xD6, 0xC6, 0xC6, 0x00 },   /* 'M' */
   { 0xC6, 0xE6, 0xF6, 0xDE, 0xCE, 0xC6, 0xC6, 0x00 },   /* 'N' */
   { 0x38, 0x6C, 0xC6, 0xC6, 0xC6, 0x6C, 0x38, 0x00 },   /* 'O' */
   { 0xFC, 0x66, 0x66, 0x7C, 0x60, 0x60, 0xF0, 0x00 },   /* 'P' */
   { 0x7C, 0xC6, 0xC6, 0xC6, 0xD6, 0x7C, 0x0E, 0x00 },   /* 'Q' */
   { 0xFC, 0x66, 0x66, 0x7C, 0x6C, 0x66, 0xE6, 0x00 },   /* 'R' */
   { 0x7C, 0xC6, 0xE0, 0x78, 0x0E, 0xC6, 0x7C, 0x00 },   /* 'S' */
   { 0xFC, 0xB4, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 },   /* 'T' */
   { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xFC, 0x00 },   /* 'U' */
   { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00 },   /* 'V' */
   { 0xC6, 0xC6, 0xC6, 0xC6, 0xD6, 0xFE, 0x6C, 0x00 },   /* 'W' */
   { 0xC6, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0xC6, 0x00 },   /* 'X' */
   { 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x30, 0x78, 0x00 },   /* 'Y' */
   { 0xFE, 0xC6, 0x8C, 0x18, 0x32, 0x66, 0xFE, 0x00 },   /* 'Z' */
   { 0x78, 0x60, 0x60, 0x60, 0x60, 0x60, 0x78, 0x00 },   /* '[' */
   { 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x02, 0x00 },   /* '\' */
   { 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00 },   /* ']' */
   { 0x10, 0x38, 0x6C, 0xC6, 0x00, 0x00, 0x00, 0x00 },   /* '^' */
   { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF },   /* '_' */
   { 0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 },   /* '`' */
   { 0x00, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00 },   /* 'a' */
   { 0xE0, 0x60, 0x60, 0x7C, 0x66, 0x66, 0xDC, 0x00 },   /* 'b' */
   { 0x00, 0x00, 0x78, 0xCC, 0xC0, 0xCC, 0x78, 0x00 },   /* 'c' */
   { 0x1C, 0x0C, 0x0C, 0x7C, 0xCC, 0xCC, 0x76, 0x00 },   /* 'd' */
   { 0x00, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 },   /* 'e' */
   { 0x38, 0x6C, 0x64, 0xF0, 0x60, 0x60, 0xF0, 0x00 },   /* 'f' */
   { 0x00, 0x00, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 },   /* 'g' */
   { 0xE0, 0x60, 0x6C, 0x76, 0x66, 0x66, 0xE6, 0x00 },   /* 'h' */
   { 0x30, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 },   /* 'i' */
   { 0x0C, 0x00, 0x1C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78 },   /* 'j' */
   { 0xE0, 0x60, 0x66, 0x6C, 0x78, 0x6C, 0xE6, 0x00 },   /* 'k' */
   { 0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 },   /* 'l' */
   { 0x00, 0x00, 0xCC, 0xFE, 0xFE, 0xD6, 0xD6, 0x00 },   /* 'm' */
   { 0x00, 0x00, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0x00 },   /* 'n' */
   { 0x00, 0x00, 0x78, 0xCC, 0xCC, 0xCC, 0x78, 0x00 },   /* 'o' */
   { 0x00, 0x00, 0xDC, 0x66, 0x66, 0x7C, 0x60, 0xF0 },   /* 'p' */
   { 0x00, 0x00, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0x1E },   /* 'q' */
   { 0x00, 0x00, 0xDC, 0x76, 0x62, 0x60, 0xF0, 0x00 },   /* 'r' */
   { 0x00, 0x00, 0x7C, 0xC0, 0x70, 0x1C, 0xF8, 0x00 },   /* 's' */
   { 0x10, 0x30, 0xFC, 0x30, 0x30, 0x34, 0x18, 0x00 },   /* 't' */
   { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x76, 0x00 },   /* 'u' */
   { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00 },   /* 'v' */
   { 0x00, 0x00, 0xC6, 0xC6, 0xD6, 0xFE, 0x6C, 0x00 },   /* 'w' */
   { 0x00, 0x00, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0x00 },   /* 'x' */
   { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 },   /* 'y' */
   { 0x00, 0x00, 0xFC, 0x98, 0x30, 0x64, 0xFC, 0x00 },   /* 'z' */
   { 0x1C, 0x30, 0x30, 0xE0, 0x30, 0x30, 0x1C, 0x00 },   /* '{' */
   { 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00 },   /* '|' */
   { 0xE0, 0x30, 0x30, 0x1C, 0x30, 0x30, 0xE0, 0x00 },   /* '}' */
   { 0x76, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   /* '~' */
   { 0x00, 0x10, 0x38, 0x6C, 0xC6, 0xC6, 0xFE, 0x00 },   /* '' */
   { 0x78, 0xCC, 0xC0, 0xCC, 0x78, 0x18, 0x0C, 0x78 },   /* '€' */
   { 0x00, 0xCC, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 },   /* '' */
   { 0x1C, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 },   /* '‚' */
   { 0x7E, 0xC3, 0x3C, 0x06, 0x3E, 0x66, 0x3F, 0x00 },   /* 'ƒ' */
   { 0xCC, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 },   /* '„' */
   { 0xE0, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 },   /* '…' */
   { 0x30, 0x30, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 },   /* '†' */
   { 0x00, 0x00, 0x78, 0xC0, 0xC0, 0x78, 0x0C, 0x38 },   /* '‡' */
   { 0x7E, 0xC3, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00 },   /* 'ˆ' */
   { 0xCC, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 },   /* '‰' */
   { 0xE0, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 },   /* 'Š' */
   { 0xCC, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 },   /* '‹' */
   { 0x7C, 0xC6, 0x38, 0x18, 0x18, 0x18, 0x3C, 0x00 },   /* 'Œ' */
   { 0xE0, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 },   /* '' */
   { 0xC6, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0xC6, 0x00 },   /* 'Ž' */
   { 0x30, 0x30, 0x00, 0x78, 0xCC, 0xFC, 0xCC, 0x00 },   /* '' */
   { 0x1C, 0x00, 0xFC, 0x60, 0x78, 0x60, 0xFC, 0x00 },   /* '' */
   { 0x00, 0x00, 0x7F, 0x0C, 0x7F, 0xCC, 0x7F, 0x00 },   /* '‘' */
   { 0x3E, 0x6C, 0xCC, 0xFE, 0xCC, 0xCC, 0xCE, 0x00 },   /* '’' */
   { 0x78, 0xCC, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 },   /* '“' */
   { 0x00, 0xCC, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 },   /* '”' */
   { 0x00, 0xE0, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 },   /* '•' */
   { 0x78, 0xCC, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 },   /* '–' */
   { 0x00, 0xE0, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 },   /* '—' */
   { 0x00, 0xCC, 0x00, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 },   /* '˜' */
   { 0xC3, 0x18, 0x3C, 0x66, 0x66, 0x3C, 0x18, 0x00 },   /* '™' */
   { 0xCC, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00 },   /* 'š' */
   { 0x18, 0x18, 0x7E, 0xC0, 0xC0, 0x7E, 0x18, 0x18 },   /* '›' */
   { 0x38, 0x6C, 0x64, 0xF0, 0x60, 0xE6, 0xFC, 0x00 },   /* 'œ' */
   { 0xCC, 0xCC, 0x78, 0xFC, 0x30, 0xFC, 0x30, 0x30 },   /* '' */
   { 0xF8, 0xCC, 0xCC, 0xFA, 0xC6, 0xCF, 0xC6, 0xC7 },   /* 'ž' */
   { 0x0E, 0x1B, 0x18, 0x3C, 0x18, 0x18, 0xD8, 0x70 },   /* 'Ÿ' */
   { 0x1C, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 },   /* ' ' */
   { 0x38, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 },   /* '¡' */
   { 0x00, 0x1C, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 },   /* '¢' */
   { 0x00, 0x1C, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 },   /* '£' */
   { 0x00, 0xF8, 0x00, 0xF8, 0xCC, 0xCC, 0xCC, 0x00 },   /* '¤' */
   { 0xFC, 0x00, 0xCC, 0xEC, 0xFC, 0xDC, 0xCC, 0x00 },   /* '¥' */
   { 0x3C, 0x6C, 0x6C, 0x3E, 0x00, 0x7E, 0x00, 0x00 },   /* '¦' */
   { 0x38, 0x6C, 0x6C, 0x38, 0x00, 0x7C, 0x00, 0x00 },   /* '§' */
   { 0x30, 0x00, 0x30, 0x60, 0xC0, 0xCC, 0x78, 0x00 },   /* '¨' */
   { 0x00, 0x00, 0x00, 0xFC, 0xC0, 0xC0, 0x00, 0x00 },   /* '©' */
   { 0x00, 0x00, 0x00, 0xFC, 0x0C, 0x0C, 0x00, 0x00 },   /* 'ª' */
   { 0xC3, 0xC6, 0xCC, 0xDE, 0x33, 0x66, 0xCC, 0x0F },   /* '«' */
   { 0xC3, 0xC6, 0xCC, 0xDB, 0x37, 0x6F, 0xCF, 0x03 },   /* '¬' */
   { 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00 },   /* '­' */
   { 0x00, 0x33, 0x66, 0xCC, 0x66, 0x33, 0x00, 0x00 },   /* '®' */
   { 0x00, 0xCC, 0x66, 0x33, 0x66, 0xCC, 0x00, 0x00 },   /* '¯' */
   { 0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88 },   /* '°' */
   { 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA },   /* '±' */
   { 0xDB, 0x77, 0xDB, 0xEE, 0xDB, 0x77, 0xDB, 0xEE },   /* '²' */
   { 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },   /* '³' */
   { 0x18, 0x18, 0x18, 0x18, 0xF8, 0x18, 0x18, 0x18 },   /* '´' */
   { 0x18, 0x18, 0xF8, 0x18, 0xF8, 0x18, 0x18, 0x18 },   /* 'µ' */
   { 0x36, 0x36, 0x36, 0x36, 0xF6, 0x36, 0x36, 0x36 },   /* '¶' */
   { 0x00, 0x00, 0x00, 0x00, 0xFE, 0x36, 0x36, 0x36 },   /* '·' */
   { 0x00, 0x00, 0xF8, 0x18, 0xF8, 0x18, 0x18, 0x18 },   /* '¸' */
   { 0x36, 0x36, 0xF6, 0x06, 0xF6, 0x36, 0x36, 0x36 },   /* '¹' */
   { 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },   /* 'º' */
   { 0x00, 0x00, 0xFE, 0x06, 0xF6, 0x36, 0x36, 0x36 },   /* '»' */
   { 0x36, 0x36, 0xF6, 0x06, 0xFE, 0x00, 0x00, 0x00 },   /* '¼' */
   { 0x36, 0x36, 0x36, 0x36, 0xFE, 0x00, 0x00, 0x00 },   /* '½' */
   { 0x18, 0x18, 0xF8, 0x18, 0xF8, 0x00, 0x00, 0x00 },   /* '¾' */
   { 0x00, 0x00, 0x00, 0x00, 0xF8, 0x18, 0x18, 0x18 },   /* '¿' */
   { 0x18, 0x18, 0x18, 0x18, 0x1F, 0x00, 0x00, 0x00 },   /* 'À' */
   { 0x18, 0x18, 0x18, 0x18, 0xFF, 0x00, 0x00, 0x00 },   /* 'Á' */
   { 0x00, 0x00, 0x00, 0x00, 0xFF, 0x18, 0x18, 0x18 },   /* 'Â' */
   { 0x18, 0x18, 0x18, 0x18, 0x1F, 0x18, 0x18, 0x18 },   /* 'Ã' */
   { 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00 },   /* 'Ä' */
   { 0x18, 0x18, 0x18, 0x18, 0xFF, 0x18, 0x18, 0x18 },   /* 'Å' */
   { 0x18, 0x18, 0x1F, 0x18, 0x1F, 0x18, 0x18, 0x18 },   /* 'Æ' */
   { 0x36, 0x36, 0x36, 0x36, 0x37, 0x36, 0x36, 0x36 },   /* 'Ç' */
   { 0x36, 0x36, 0x37, 0x30, 0x3F, 0x00, 0x00, 0x00 },   /* 'È' */
   { 0x00, 0x00, 0x3F, 0x30, 0x37, 0x36, 0x36, 0x36 },   /* 'É' */
   { 0x36, 0x36, 0xF7, 0x00, 0xFF, 0x00, 0x00, 0x00 },   /* 'Ê' */
   { 0x00, 0x00, 0xFF, 0x00, 0xF7, 0x36, 0x36, 0x36 },   /* 'Ë' */
   { 0x36, 0x36, 0x37, 0x30, 0x37, 0x36, 0x36, 0x36 },   /* 'Ì' */
   { 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00 },   /* 'Í' */
   { 0x36, 0x36, 0xF7, 0x00, 0xF7, 0x36, 0x36, 0x36 },   /* 'Î' */
   { 0x18, 0x18, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00 },   /* 'Ï' */
   { 0x36, 0x36, 0x36, 0x36, 0xFF, 0x00, 0x00, 0x00 },   /* 'Ð' */
   { 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x18, 0x18, 0x18 },   /* 'Ñ' */
   { 0x00, 0x00, 0x00, 0x00, 0xFF, 0x36, 0x36, 0x36 },   /* 'Ò' */
   { 0x36, 0x36, 0x36, 0x36, 0x3F, 0x00, 0x00, 0x00 },   /* 'Ó' */
   { 0x18, 0x18, 0x1F, 0x18, 0x1F, 0x00, 0x00, 0x00 },   /* 'Ô' */
   { 0x00, 0x00, 0x1F, 0x18, 0x1F, 0x18, 0x18, 0x18 },   /* 'Õ' */
   { 0x00, 0x00, 0x00, 0x00, 0x3F, 0x36, 0x36, 0x36 },   /* 'Ö' */
   { 0x36, 0x36, 0x36, 0x36, 0xFF, 0x36, 0x36, 0x36 },   /* '×' */
   { 0x18, 0x18, 0xFF, 0x18, 0xFF, 0x18, 0x18, 0x18 },   /* 'Ø' */
   { 0x18, 0x18, 0x18, 0x18, 0xF8, 0x00, 0x00, 0x00 },   /* 'Ù' */
   { 0x00, 0x00, 0x00, 0x00, 0x1F, 0x18, 0x18, 0x18 },   /* 'Ú' */
   { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF },   /* 'Û' */
   { 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF },   /* 'Ü' */
   { 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0 },   /* 'Ý' */
   { 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F },   /* 'Þ' */
   { 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00 },   /* 'ß' */
   { 0x00, 0x00, 0x76, 0xDC, 0xC8, 0xDC, 0x76, 0x00 },   /* 'à' */
   { 0x00, 0x78, 0xCC, 0xF8, 0xCC, 0xF8, 0xC0, 0xC0 },   /* 'á' */
   { 0x00, 0xFC, 0xCC, 0xC0, 0xC0, 0xC0, 0xC0, 0x00 },   /* 'â' */
   { 0x00, 0xFE, 0x6C, 0x6C, 0x6C, 0x6C, 0x6C, 0x00 },   /* 'ã' */
   { 0xFC, 0xCC, 0x60, 0x30, 0x60, 0xCC, 0xFC, 0x00 },   /* 'ä' */
   { 0x00, 0x00, 0x7E, 0xD8, 0xD8, 0xD8, 0x70, 0x00 },   /* 'å' */
   { 0x00, 0x66, 0x66, 0x66, 0x66, 0x7C, 0x60, 0xC0 },   /* 'æ' */
   { 0x00, 0x76, 0xDC, 0x18, 0x18, 0x18, 0x18, 0x00 },   /* 'ç' */
   { 0xFC, 0x30, 0x78, 0xCC, 0xCC, 0x78, 0x30, 0xFC },   /* 'è' */
   { 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x6C, 0x38, 0x00 },   /* 'é' */
   { 0x38, 0x6C, 0xC6, 0xC6, 0x6C, 0x6C, 0xEE, 0x00 },   /* 'ê' */
   { 0x1C, 0x30, 0x18, 0x7C, 0xCC, 0xCC, 0x78, 0x00 },   /* 'ë' */
   { 0x00, 0x00, 0x7E, 0xDB, 0xDB, 0x7E, 0x00, 0x00 },   /* 'ì' */
   { 0x06, 0x0C, 0x7E, 0xDB, 0xDB, 0x7E, 0x60, 0xC0 },   /* 'í' */
   { 0x38, 0x60, 0xC0, 0xF8, 0xC0, 0x60, 0x38, 0x00 },   /* 'î' */
   { 0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00 },   /* 'ï' */
   { 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x00 },   /* 'ð' */
   { 0x30, 0x30, 0xFC, 0x30, 0x30, 0x00, 0xFC, 0x00 },   /* 'ñ' */
   { 0x60, 0x30, 0x18, 0x30, 0x60, 0x00, 0xFC, 0x00 },   /* 'ò' */
   { 0x18, 0x30, 0x60, 0x30, 0x18, 0x00, 0xFC, 0x00 },   /* 'ó' */
   { 0x0E, 0x1B, 0x1B, 0x18, 0x18, 0x18, 0x18, 0x18 },   /* 'ô' */
   { 0x18, 0x18, 0x18, 0x18, 0x18, 0xD8, 0xD8, 0x70 },   /* 'õ' */
   { 0x30, 0x30, 0x00, 0xFC, 0x00, 0x30, 0x30, 0x00 },   /* 'ö' */
   { 0x00, 0x76, 0xDC, 0x00, 0x76, 0xDC, 0x00, 0x00 },   /* '÷' */
   { 0x38, 0x6C, 0x6C, 0x38, 0x00, 0x00, 0x00, 0x00 },   /* 'ø' */
   { 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00 },   /* 'ù' */
   { 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00 },   /* 'ú' */
   { 0x0F, 0x0C, 0x0C, 0x0C, 0xEC, 0x6C, 0x3C, 0x1C },   /* 'û' */
   { 0x78, 0x6C, 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00 },   /* 'ü' */
   { 0x70, 0x18, 0x30, 0x60, 0x78, 0x00, 0x00, 0x00 },   /* 'ý' */
   { 0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00 },   /* 'þ' */
   { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   /* 'ÿ' */
};
