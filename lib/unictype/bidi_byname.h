/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -m 10 ./unictype/bidi_byname.gperf  */
/* Computed positions: -k'1,9,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 2 "./unictype/bidi_byname.gperf"
struct named_bidi_class { int name; int bidi_class; };

#define TOTAL_KEYWORDS 57
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 23
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 72
/* maximum key range = 70, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRCMP
#define GPERF_CASE_STRCMP 1
static int
gperf_case_strcmp (register const char *s1, register const char *s2)
{
  for (;;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
bidi_class_hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 15, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 32, 27, 26, 73,  1,
      26,  1, 14, 73, 73, 20,  4,  4,  8,  3,
      23, 73,  1, 15,  1,  7, 73, 24, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 32, 27, 26,
      73,  1, 26,  1, 14, 73, 73, 20,  4,  4,
       8,  3, 23, 73,  1, 15,  1,  7, 73, 24,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
      73, 73, 73, 73, 73, 73
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct bidi_class_stringpool_t
  {
    char bidi_class_stringpool_str3[sizeof("R")];
    char bidi_class_stringpool_str4[sizeof("ET")];
    char bidi_class_stringpool_str5[sizeof("RLE")];
    char bidi_class_stringpool_str7[sizeof("RLO")];
    char bidi_class_stringpool_str8[sizeof("LRE")];
    char bidi_class_stringpool_str9[sizeof("L")];
    char bidi_class_stringpool_str10[sizeof("LRO")];
    char bidi_class_stringpool_str11[sizeof("EN")];
    char bidi_class_stringpool_str13[sizeof("ON")];
    char bidi_class_stringpool_str14[sizeof("RightToLeft")];
    char bidi_class_stringpool_str15[sizeof("NSM")];
    char bidi_class_stringpool_str17[sizeof("LeftToRight")];
    char bidi_class_stringpool_str18[sizeof("ES")];
    char bidi_class_stringpool_str19[sizeof("Left To Right")];
    char bidi_class_stringpool_str20[sizeof("OtherNeutral")];
    char bidi_class_stringpool_str21[sizeof("EuropeanTerminator")];
    char bidi_class_stringpool_str22[sizeof("RightToLeftOverride")];
    char bidi_class_stringpool_str23[sizeof("RightToLeftEmbedding")];
    char bidi_class_stringpool_str24[sizeof("EuropeanNumber")];
    char bidi_class_stringpool_str25[sizeof("LeftToRightOverride")];
    char bidi_class_stringpool_str26[sizeof("LeftToRightEmbedding")];
    char bidi_class_stringpool_str27[sizeof("Other Neutral")];
    char bidi_class_stringpool_str28[sizeof("Left To Right Override")];
    char bidi_class_stringpool_str29[sizeof("Left To Right Embedding")];
    char bidi_class_stringpool_str30[sizeof("Right To Left")];
    char bidi_class_stringpool_str31[sizeof("S")];
    char bidi_class_stringpool_str32[sizeof("European Number")];
    char bidi_class_stringpool_str33[sizeof("SegmentSeparator")];
    char bidi_class_stringpool_str34[sizeof("EuropeanSeparator")];
    char bidi_class_stringpool_str35[sizeof("European Separator")];
    char bidi_class_stringpool_str36[sizeof("European Terminator")];
    char bidi_class_stringpool_str37[sizeof("BN")];
    char bidi_class_stringpool_str38[sizeof("AL")];
    char bidi_class_stringpool_str39[sizeof("Right To Left Override")];
    char bidi_class_stringpool_str40[sizeof("Right To Left Embedding")];
    char bidi_class_stringpool_str41[sizeof("WS")];
    char bidi_class_stringpool_str42[sizeof("AN")];
    char bidi_class_stringpool_str43[sizeof("CS")];
    char bidi_class_stringpool_str44[sizeof("Common Separator")];
    char bidi_class_stringpool_str45[sizeof("PopDirectionalFormat")];
    char bidi_class_stringpool_str46[sizeof("ArabicLetter")];
    char bidi_class_stringpool_str47[sizeof("Arabic Letter")];
    char bidi_class_stringpool_str48[sizeof("Segment Separator")];
    char bidi_class_stringpool_str49[sizeof("ArabicNumber")];
    char bidi_class_stringpool_str50[sizeof("NonspacingMark")];
    char bidi_class_stringpool_str51[sizeof("Nonspacing Mark")];
    char bidi_class_stringpool_str52[sizeof("PDF")];
    char bidi_class_stringpool_str53[sizeof("Arabic Number")];
    char bidi_class_stringpool_str54[sizeof("BoundaryNeutral")];
    char bidi_class_stringpool_str55[sizeof("B")];
    char bidi_class_stringpool_str56[sizeof("ParagraphSeparator")];
    char bidi_class_stringpool_str57[sizeof("Paragraph Separator")];
    char bidi_class_stringpool_str61[sizeof("WhiteSpace")];
    char bidi_class_stringpool_str62[sizeof("Boundary Neutral")];
    char bidi_class_stringpool_str65[sizeof("CommonSeparator")];
    char bidi_class_stringpool_str68[sizeof("White Space")];
    char bidi_class_stringpool_str72[sizeof("Pop Directional Format")];
  };
static const struct bidi_class_stringpool_t bidi_class_stringpool_contents =
  {
    "R",
    "ET",
    "RLE",
    "RLO",
    "LRE",
    "L",
    "LRO",
    "EN",
    "ON",
    "RightToLeft",
    "NSM",
    "LeftToRight",
    "ES",
    "Left To Right",
    "OtherNeutral",
    "EuropeanTerminator",
    "RightToLeftOverride",
    "RightToLeftEmbedding",
    "EuropeanNumber",
    "LeftToRightOverride",
    "LeftToRightEmbedding",
    "Other Neutral",
    "Left To Right Override",
    "Left To Right Embedding",
    "Right To Left",
    "S",
    "European Number",
    "SegmentSeparator",
    "EuropeanSeparator",
    "European Separator",
    "European Terminator",
    "BN",
    "AL",
    "Right To Left Override",
    "Right To Left Embedding",
    "WS",
    "AN",
    "CS",
    "Common Separator",
    "PopDirectionalFormat",
    "ArabicLetter",
    "Arabic Letter",
    "Segment Separator",
    "ArabicNumber",
    "NonspacingMark",
    "Nonspacing Mark",
    "PDF",
    "Arabic Number",
    "BoundaryNeutral",
    "B",
    "ParagraphSeparator",
    "Paragraph Separator",
    "WhiteSpace",
    "Boundary Neutral",
    "CommonSeparator",
    "White Space",
    "Pop Directional Format"
  };
#define bidi_class_stringpool ((const char *) &bidi_class_stringpool_contents)

static const struct named_bidi_class bidi_class_names[] =
  {
    {-1}, {-1}, {-1},
#line 28 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str3, UC_BIDI_R},
#line 21 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str4, UC_BIDI_ET},
#line 29 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str5, UC_BIDI_RLE},
    {-1},
#line 30 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str7, UC_BIDI_RLO},
#line 23 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str8, UC_BIDI_LRE},
#line 22 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str9, UC_BIDI_L},
#line 24 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str10, UC_BIDI_LRO},
#line 19 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str11, UC_BIDI_EN},
    {-1},
#line 26 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str13, UC_BIDI_ON},
#line 62 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str14, UC_BIDI_R},
#line 25 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str15, UC_BIDI_NSM},
    {-1},
#line 50 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str17, UC_BIDI_L},
#line 20 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str18, UC_BIDI_ES},
#line 49 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str19, UC_BIDI_L},
#line 58 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str20, UC_BIDI_ON},
#line 48 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str21, UC_BIDI_ET},
#line 66 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str22, UC_BIDI_RLO},
#line 64 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str23, UC_BIDI_RLE},
#line 44 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str24, UC_BIDI_EN},
#line 54 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str25, UC_BIDI_LRO},
#line 52 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str26, UC_BIDI_LRE},
#line 57 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str27, UC_BIDI_ON},
#line 53 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str28, UC_BIDI_LRO},
#line 51 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str29, UC_BIDI_LRE},
#line 61 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str30, UC_BIDI_R},
#line 31 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str31, UC_BIDI_S},
#line 43 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str32, UC_BIDI_EN},
#line 68 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str33, UC_BIDI_S},
#line 46 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str34, UC_BIDI_ES},
#line 45 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str35, UC_BIDI_ES},
#line 47 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str36, UC_BIDI_ET},
#line 17 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str37, UC_BIDI_BN},
#line 14 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str38, UC_BIDI_AL},
#line 65 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str39, UC_BIDI_RLO},
#line 63 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str40, UC_BIDI_RLE},
#line 32 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str41, UC_BIDI_WS},
#line 15 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str42, UC_BIDI_AN},
#line 18 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str43, UC_BIDI_CS},
#line 41 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str44, UC_BIDI_CS},
#line 60 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str45, UC_BIDI_PDF},
#line 34 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str46, UC_BIDI_AL},
#line 33 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str47, UC_BIDI_AL},
#line 67 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str48, UC_BIDI_S},
#line 36 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str49, UC_BIDI_AN},
#line 56 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str50, UC_BIDI_NSM},
#line 55 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str51, UC_BIDI_NSM},
#line 27 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str52, UC_BIDI_PDF},
#line 35 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str53, UC_BIDI_AN},
#line 40 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str54, UC_BIDI_BN},
#line 16 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str55, UC_BIDI_B},
#line 38 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str56, UC_BIDI_B},
#line 37 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str57, UC_BIDI_B},
    {-1}, {-1}, {-1},
#line 70 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str61, UC_BIDI_WS},
#line 39 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str62, UC_BIDI_BN},
    {-1}, {-1},
#line 42 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str65, UC_BIDI_CS},
    {-1}, {-1},
#line 69 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str68, UC_BIDI_WS},
    {-1}, {-1}, {-1},
#line 59 "./unictype/bidi_byname.gperf"
    {(int)(long)&((struct bidi_class_stringpool_t *)0)->bidi_class_stringpool_str72, UC_BIDI_PDF}
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct named_bidi_class *
uc_bidi_class_lookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = bidi_class_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int o = bidi_class_names[key].name;
          if (o >= 0)
            {
              register const char *s = o + bidi_class_stringpool;

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
                return &bidi_class_names[key];
            }
        }
    }
  return 0;
}
