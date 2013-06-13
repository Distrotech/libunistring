/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -m 10 ./unictype/joininggroup_byname.gperf  */
/* Computed positions: -k'1-3' */

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

#line 2 "./unictype/joininggroup_byname.gperf"
struct named_joining_group { int name; int joining_group; };

#define TOTAL_KEYWORDS 72
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 21
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 93
/* maximum key range = 92, duplicates = 0 */

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
joining_group_hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 14, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94,  7, 35, 94,  6,  1,
      26, 15,  1, 24, 15, 32,  9, 28, 14, 17,
      38, 23, 22,  1,  2, 15, 24, 37, 94, 11,
      43, 94, 94, 94, 94, 94, 94,  7, 35, 94,
       6,  1, 26, 15,  1, 24, 15, 32,  9, 28,
      14, 17, 38, 23, 22,  1,  2, 15, 24, 37,
      94, 11, 43, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

struct joining_group_stringpool_t
  {
    char joining_group_stringpool_str2[sizeof("E")];
    char joining_group_stringpool_str4[sizeof("He")];
    char joining_group_stringpool_str6[sizeof("Heh")];
    char joining_group_stringpool_str7[sizeof("Seen")];
    char joining_group_stringpool_str8[sizeof("Heth")];
    char joining_group_stringpool_str9[sizeof("Teth")];
    char joining_group_stringpool_str10[sizeof("HehGoal")];
    char joining_group_stringpool_str11[sizeof("Heh Goal")];
    char joining_group_stringpool_str12[sizeof("Hah")];
    char joining_group_stringpool_str13[sizeof("Tah")];
    char joining_group_stringpool_str14[sizeof("TehMarbuta")];
    char joining_group_stringpool_str15[sizeof("Teh Marbuta")];
    char joining_group_stringpool_str16[sizeof("Yeh")];
    char joining_group_stringpool_str17[sizeof("Sad")];
    char joining_group_stringpool_str18[sizeof("TehMarbutaGoal")];
    char joining_group_stringpool_str19[sizeof("Sadhe")];
    char joining_group_stringpool_str20[sizeof("Teh Marbuta Goal")];
    char joining_group_stringpool_str21[sizeof("Alef")];
    char joining_group_stringpool_str22[sizeof("YehBarree")];
    char joining_group_stringpool_str23[sizeof("Yeh Barree")];
    char joining_group_stringpool_str24[sizeof("YehWithTail")];
    char joining_group_stringpool_str25[sizeof("Dal")];
    char joining_group_stringpool_str26[sizeof("Yeh with tail")];
    char joining_group_stringpool_str27[sizeof("Reh")];
    char joining_group_stringpool_str28[sizeof("Alaph")];
    char joining_group_stringpool_str29[sizeof("Fe")];
    char joining_group_stringpool_str30[sizeof("Shin")];
    char joining_group_stringpool_str31[sizeof("Feh")];
    char joining_group_stringpool_str32[sizeof("DalathRish")];
    char joining_group_stringpool_str33[sizeof("Dalath Rish")];
    char joining_group_stringpool_str34[sizeof("Meem")];
    char joining_group_stringpool_str35[sizeof("Nya")];
    char joining_group_stringpool_str36[sizeof("Yudh")];
    char joining_group_stringpool_str37[sizeof("Semkath")];
    char joining_group_stringpool_str38[sizeof("YudhHe")];
    char joining_group_stringpool_str39[sizeof("Yudh He")];
    char joining_group_stringpool_str40[sizeof("Beh")];
    char joining_group_stringpool_str41[sizeof("Pe")];
    char joining_group_stringpool_str42[sizeof("Beth")];
    char joining_group_stringpool_str43[sizeof("SyriacWaw")];
    char joining_group_stringpool_str44[sizeof("Syriac Waw")];
    char joining_group_stringpool_str45[sizeof("Khaph")];
    char joining_group_stringpool_str46[sizeof("Nun")];
    char joining_group_stringpool_str47[sizeof("Lam")];
    char joining_group_stringpool_str48[sizeof("Ain")];
    char joining_group_stringpool_str49[sizeof("Taw")];
    char joining_group_stringpool_str50[sizeof("Lamadh")];
    char joining_group_stringpool_str51[sizeof("Gaf")];
    char joining_group_stringpool_str52[sizeof("Noon")];
    char joining_group_stringpool_str53[sizeof("SwashKaf")];
    char joining_group_stringpool_str54[sizeof("Swash Kaf")];
    char joining_group_stringpool_str55[sizeof("Gamal")];
    char joining_group_stringpool_str56[sizeof("Zhain")];
    char joining_group_stringpool_str57[sizeof("ReversedPe")];
    char joining_group_stringpool_str58[sizeof("Reversed Pe")];
    char joining_group_stringpool_str59[sizeof("Qaf")];
    char joining_group_stringpool_str60[sizeof("NoJoiningGroup")];
    char joining_group_stringpool_str61[sizeof("No Joining Group")];
    char joining_group_stringpool_str63[sizeof("FarsiYeh")];
    char joining_group_stringpool_str64[sizeof("Farsi Yeh")];
    char joining_group_stringpool_str68[sizeof("Kaf")];
    char joining_group_stringpool_str72[sizeof("Qaph")];
    char joining_group_stringpool_str73[sizeof("KnottedHeh")];
    char joining_group_stringpool_str74[sizeof("Knotted Heh")];
    char joining_group_stringpool_str76[sizeof("FinalSemkath")];
    char joining_group_stringpool_str77[sizeof("Final Semkath")];
    char joining_group_stringpool_str78[sizeof("Zain")];
    char joining_group_stringpool_str81[sizeof("Kaph")];
    char joining_group_stringpool_str83[sizeof("Mim")];
    char joining_group_stringpool_str84[sizeof("Waw")];
    char joining_group_stringpool_str91[sizeof("BurushaskiYehBarree")];
    char joining_group_stringpool_str93[sizeof("Burushaski Yeh Barree")];
  };
static const struct joining_group_stringpool_t joining_group_stringpool_contents =
  {
    "E",
    "He",
    "Heh",
    "Seen",
    "Heth",
    "Teth",
    "HehGoal",
    "Heh Goal",
    "Hah",
    "Tah",
    "TehMarbuta",
    "Teh Marbuta",
    "Yeh",
    "Sad",
    "TehMarbutaGoal",
    "Sadhe",
    "Teh Marbuta Goal",
    "Alef",
    "YehBarree",
    "Yeh Barree",
    "YehWithTail",
    "Dal",
    "Yeh with tail",
    "Reh",
    "Alaph",
    "Fe",
    "Shin",
    "Feh",
    "DalathRish",
    "Dalath Rish",
    "Meem",
    "Nya",
    "Yudh",
    "Semkath",
    "YudhHe",
    "Yudh He",
    "Beh",
    "Pe",
    "Beth",
    "SyriacWaw",
    "Syriac Waw",
    "Khaph",
    "Nun",
    "Lam",
    "Ain",
    "Taw",
    "Lamadh",
    "Gaf",
    "Noon",
    "SwashKaf",
    "Swash Kaf",
    "Gamal",
    "Zhain",
    "ReversedPe",
    "Reversed Pe",
    "Qaf",
    "NoJoiningGroup",
    "No Joining Group",
    "FarsiYeh",
    "Farsi Yeh",
    "Kaf",
    "Qaph",
    "KnottedHeh",
    "Knotted Heh",
    "FinalSemkath",
    "Final Semkath",
    "Zain",
    "Kaph",
    "Mim",
    "Waw",
    "BurushaskiYehBarree",
    "Burushaski Yeh Barree"
  };
#define joining_group_stringpool ((const char *) &joining_group_stringpool_contents)

static const struct named_joining_group joining_group_names[] =
  {
    {-1}, {-1},
#line 26 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str2, UC_JOINING_GROUP_E},
    {-1},
#line 36 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str4, UC_JOINING_GROUP_HE},
    {-1},
#line 37 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str6, UC_JOINING_GROUP_HEH},
#line 61 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str7, UC_JOINING_GROUP_SEEN},
#line 40 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str8, UC_JOINING_GROUP_HETH},
#line 74 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str9, UC_JOINING_GROUP_TETH},
#line 39 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str10, UC_JOINING_GROUP_HEH_GOAL},
#line 38 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str11, UC_JOINING_GROUP_HEH_GOAL},
#line 35 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str12, UC_JOINING_GROUP_HAH},
#line 68 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str13, UC_JOINING_GROUP_TAH},
#line 71 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str14, UC_JOINING_GROUP_TEH_MARBUTA},
#line 70 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str15, UC_JOINING_GROUP_TEH_MARBUTA},
#line 76 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str16, UC_JOINING_GROUP_YEH},
#line 59 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str17, UC_JOINING_GROUP_SAD},
#line 73 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str18, UC_JOINING_GROUP_TEH_MARBUTA_GOAL},
#line 60 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str19, UC_JOINING_GROUP_SADHE},
#line 72 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str20, UC_JOINING_GROUP_TEH_MARBUTA_GOAL},
#line 18 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str21, UC_JOINING_GROUP_ALEF},
#line 78 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str22, UC_JOINING_GROUP_YEH_BARREE},
#line 77 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str23, UC_JOINING_GROUP_YEH_BARREE},
#line 80 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str24, UC_JOINING_GROUP_YEH_WITH_TAIL},
#line 23 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str25, UC_JOINING_GROUP_DAL},
#line 79 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str26, UC_JOINING_GROUP_YEH_WITH_TAIL},
#line 56 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str27, UC_JOINING_GROUP_REH},
#line 17 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str28, UC_JOINING_GROUP_ALAPH},
#line 29 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str29, UC_JOINING_GROUP_FE},
#line 63 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str30, UC_JOINING_GROUP_SHIN},
#line 30 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str31, UC_JOINING_GROUP_FEH},
#line 25 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str32, UC_JOINING_GROUP_DALATH_RISH},
#line 24 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str33, UC_JOINING_GROUP_DALATH_RISH},
#line 48 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str34, UC_JOINING_GROUP_MEEM},
#line 52 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str35, UC_JOINING_GROUP_NYA},
#line 81 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str36, UC_JOINING_GROUP_YUDH},
#line 62 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str37, UC_JOINING_GROUP_SEMKATH},
#line 83 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str38, UC_JOINING_GROUP_YUDH_HE},
#line 82 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str39, UC_JOINING_GROUP_YUDH_HE},
#line 19 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str40, UC_JOINING_GROUP_BEH},
#line 53 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str41, UC_JOINING_GROUP_PE},
#line 20 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str42, UC_JOINING_GROUP_BETH},
#line 67 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str43, UC_JOINING_GROUP_SYRIAC_WAW},
#line 66 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str44, UC_JOINING_GROUP_SYRIAC_WAW},
#line 43 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str45, UC_JOINING_GROUP_KHAPH},
#line 51 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str46, UC_JOINING_GROUP_NUN},
#line 46 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str47, UC_JOINING_GROUP_LAM},
#line 16 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str48, UC_JOINING_GROUP_AIN},
#line 69 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str49, UC_JOINING_GROUP_TAW},
#line 47 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str50, UC_JOINING_GROUP_LAMADH},
#line 33 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str51, UC_JOINING_GROUP_GAF},
#line 50 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str52, UC_JOINING_GROUP_NOON},
#line 65 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str53, UC_JOINING_GROUP_SWASH_KAF},
#line 64 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str54, UC_JOINING_GROUP_SWASH_KAF},
#line 34 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str55, UC_JOINING_GROUP_GAMAL},
#line 85 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str56, UC_JOINING_GROUP_ZHAIN},
#line 58 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str57, UC_JOINING_GROUP_REVERSED_PE},
#line 57 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str58, UC_JOINING_GROUP_REVERSED_PE},
#line 54 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str59, UC_JOINING_GROUP_QAF},
#line 15 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str60, UC_JOINING_GROUP_NONE},
#line 14 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str61, UC_JOINING_GROUP_NONE},
    {-1},
#line 28 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str63, UC_JOINING_GROUP_FARSI_YEH},
#line 27 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str64, UC_JOINING_GROUP_FARSI_YEH},
    {-1}, {-1}, {-1},
#line 41 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str68, UC_JOINING_GROUP_KAF},
    {-1}, {-1}, {-1},
#line 55 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str72, UC_JOINING_GROUP_QAPH},
#line 45 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str73, UC_JOINING_GROUP_KNOTTED_HEH},
#line 44 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str74, UC_JOINING_GROUP_KNOTTED_HEH},
    {-1},
#line 32 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str76, UC_JOINING_GROUP_FINAL_SEMKATH},
#line 31 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str77, UC_JOINING_GROUP_FINAL_SEMKATH},
#line 84 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str78, UC_JOINING_GROUP_ZAIN},
    {-1}, {-1},
#line 42 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str81, UC_JOINING_GROUP_KAPH},
    {-1},
#line 49 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str83, UC_JOINING_GROUP_MIM},
#line 75 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str84, UC_JOINING_GROUP_WAW},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 22 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str91, UC_JOINING_GROUP_BURUSHASKI_YEH_BARREE},
    {-1},
#line 21 "./unictype/joininggroup_byname.gperf"
    {(int)(long)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str93, UC_JOINING_GROUP_BURUSHASKI_YEH_BARREE}
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct named_joining_group *
uc_joining_group_lookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = joining_group_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int o = joining_group_names[key].name;
          if (o >= 0)
            {
              register const char *s = o + joining_group_stringpool;

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
                return &joining_group_names[key];
            }
        }
    }
  return 0;
}
