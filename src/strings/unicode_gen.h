

struct MVMUnicodeNamedValue {
    const char *name;
    MVMint32 value;
};
#define num_unicode_property_keypairs 3552

#define MVM_NUM_UNICODE_EXTENTS 105

MVMint32 MVM_unicode_is_in_block(MVMThreadContext *tc, MVMString *str, MVMint64 pos, MVMString *block_name);

#define MVM_CODEPOINT_NAMES_COUNT 52915
#define MVM_NUM_PROPERTY_CODES 107

#define num_unicode_seq_keypairs 2032
#define num_unicode_namealias_keypairs 464
struct MVMUnicodeNamedAlias {
    char *name;
    MVMGrapheme32 codepoint;
    MVMint16 strlen;
};
typedef struct MVMUnicodeNamedAlias MVMUnicodeNamedAlias;


/* MVM_UNICODE_PROPERTY_GENERAL_CATEGORY */
#define MVM_UNICODE_PVALUE_GC_CC 15
#define MVM_UNICODE_PVALUE_GC_CF 16
#define MVM_UNICODE_PVALUE_GC_CN 0
#define MVM_UNICODE_PVALUE_GC_CO 17
#define MVM_UNICODE_PVALUE_GC_CS 18
#define MVM_UNICODE_PVALUE_GC_LL 2
#define MVM_UNICODE_PVALUE_GC_LM 4
#define MVM_UNICODE_PVALUE_GC_LO 5
#define MVM_UNICODE_PVALUE_GC_LT 3
#define MVM_UNICODE_PVALUE_GC_LU 1
#define MVM_UNICODE_PVALUE_GC_MC 8
#define MVM_UNICODE_PVALUE_GC_ME 7
#define MVM_UNICODE_PVALUE_GC_MN 6
#define MVM_UNICODE_PVALUE_GC_ND 9
#define MVM_UNICODE_PVALUE_GC_NL 10
#define MVM_UNICODE_PVALUE_GC_NO 11
#define MVM_UNICODE_PVALUE_GC_PC 22
#define MVM_UNICODE_PVALUE_GC_PD 19
#define MVM_UNICODE_PVALUE_GC_PE 21
#define MVM_UNICODE_PVALUE_GC_PF 29
#define MVM_UNICODE_PVALUE_GC_PI 28
#define MVM_UNICODE_PVALUE_GC_PO 23
#define MVM_UNICODE_PVALUE_GC_PS 20
#define MVM_UNICODE_PVALUE_GC_SC 25
#define MVM_UNICODE_PVALUE_GC_SK 26
#define MVM_UNICODE_PVALUE_GC_SM 24
#define MVM_UNICODE_PVALUE_GC_SO 27
#define MVM_UNICODE_PVALUE_GC_ZL 13
#define MVM_UNICODE_PVALUE_GC_ZP 14
#define MVM_UNICODE_PVALUE_GC_ZS 12


/* MVM_UNICODE_PROPERTY_GRAPHEME_CLUSTER_BREAK */
#define MVM_UNICODE_PVALUE_GCB_CR 2
#define MVM_UNICODE_PVALUE_GCB_CONTROL 4
#define MVM_UNICODE_PVALUE_GCB_E_BASE 13
#define MVM_UNICODE_PVALUE_GCB_E_BASE_GAZ 17
#define MVM_UNICODE_PVALUE_GCB_E_MODIFIER 14
#define MVM_UNICODE_PVALUE_GCB_EXTEND 5
#define MVM_UNICODE_PVALUE_GCB_GLUE_AFTER_ZWJ 16
#define MVM_UNICODE_PVALUE_GCB_L 8
#define MVM_UNICODE_PVALUE_GCB_LF 3
#define MVM_UNICODE_PVALUE_GCB_LV 11
#define MVM_UNICODE_PVALUE_GCB_LVT 12
#define MVM_UNICODE_PVALUE_GCB_OTHER 0
#define MVM_UNICODE_PVALUE_GCB_PREPEND 1
#define MVM_UNICODE_PVALUE_GCB_REGIONAL_INDICATOR 6
#define MVM_UNICODE_PVALUE_GCB_SPACINGMARK 7
#define MVM_UNICODE_PVALUE_GCB_T 10
#define MVM_UNICODE_PVALUE_GCB_V 9
#define MVM_UNICODE_PVALUE_GCB_ZWJ 15


/* MVM_UNICODE_PROPERTY_DECOMPOSITION_TYPE */
#define MVM_UNICODE_PVALUE_DT_CANONICAL 1
#define MVM_UNICODE_PVALUE_DT_CIRCLE 9
#define MVM_UNICODE_PVALUE_DT_COMPAT 2
#define MVM_UNICODE_PVALUE_DT_FINAL 7
#define MVM_UNICODE_PVALUE_DT_FONT 3
#define MVM_UNICODE_PVALUE_DT_FRACTION 17
#define MVM_UNICODE_PVALUE_DT_INITIAL 5
#define MVM_UNICODE_PVALUE_DT_ISOLATED 8
#define MVM_UNICODE_PVALUE_DT_MEDIAL 6
#define MVM_UNICODE_PVALUE_DT_NARROW 14
#define MVM_UNICODE_PVALUE_DT_NOBREAK 4
#define MVM_UNICODE_PVALUE_DT_NONE 0
#define MVM_UNICODE_PVALUE_DT_SMALL 15
#define MVM_UNICODE_PVALUE_DT_SQUARE 16
#define MVM_UNICODE_PVALUE_DT_SUB 11
#define MVM_UNICODE_PVALUE_DT_SUPER 10
#define MVM_UNICODE_PVALUE_DT_VERTICAL 12
#define MVM_UNICODE_PVALUE_DT_WIDE 13


/* MVM_UNICODE_PROPERTY_CANONICAL_COMBINING_CLASS */
#define MVM_UNICODE_PVALUE_CCC_0 1
#define MVM_UNICODE_PVALUE_CCC_1 2
#define MVM_UNICODE_PVALUE_CCC_10 6
#define MVM_UNICODE_PVALUE_CCC_103 35
#define MVM_UNICODE_PVALUE_CCC_107 36
#define MVM_UNICODE_PVALUE_CCC_11 7
#define MVM_UNICODE_PVALUE_CCC_118 37
#define MVM_UNICODE_PVALUE_CCC_12 8
#define MVM_UNICODE_PVALUE_CCC_122 38
#define MVM_UNICODE_PVALUE_CCC_129 39
#define MVM_UNICODE_PVALUE_CCC_13 9
#define MVM_UNICODE_PVALUE_CCC_130 40
#define MVM_UNICODE_PVALUE_CCC_132 41
#define MVM_UNICODE_PVALUE_CCC_14 10
#define MVM_UNICODE_PVALUE_CCC_15 11
#define MVM_UNICODE_PVALUE_CCC_16 12
#define MVM_UNICODE_PVALUE_CCC_17 13
#define MVM_UNICODE_PVALUE_CCC_18 14
#define MVM_UNICODE_PVALUE_CCC_19 15
#define MVM_UNICODE_PVALUE_CCC_20 16
#define MVM_UNICODE_PVALUE_CCC_202 42
#define MVM_UNICODE_PVALUE_CCC_21 17
#define MVM_UNICODE_PVALUE_CCC_214 43
#define MVM_UNICODE_PVALUE_CCC_216 44
#define MVM_UNICODE_PVALUE_CCC_218 45
#define MVM_UNICODE_PVALUE_CCC_22 18
#define MVM_UNICODE_PVALUE_CCC_220 46
#define MVM_UNICODE_PVALUE_CCC_222 47
#define MVM_UNICODE_PVALUE_CCC_224 48
#define MVM_UNICODE_PVALUE_CCC_226 49
#define MVM_UNICODE_PVALUE_CCC_228 50
#define MVM_UNICODE_PVALUE_CCC_23 19
#define MVM_UNICODE_PVALUE_CCC_230 51
#define MVM_UNICODE_PVALUE_CCC_232 52
#define MVM_UNICODE_PVALUE_CCC_233 53
#define MVM_UNICODE_PVALUE_CCC_234 54
#define MVM_UNICODE_PVALUE_CCC_24 20
#define MVM_UNICODE_PVALUE_CCC_240 55
#define MVM_UNICODE_PVALUE_CCC_25 21
#define MVM_UNICODE_PVALUE_CCC_26 22
#define MVM_UNICODE_PVALUE_CCC_27 23
#define MVM_UNICODE_PVALUE_CCC_28 24
#define MVM_UNICODE_PVALUE_CCC_29 25
#define MVM_UNICODE_PVALUE_CCC_30 26
#define MVM_UNICODE_PVALUE_CCC_31 27
#define MVM_UNICODE_PVALUE_CCC_32 28
#define MVM_UNICODE_PVALUE_CCC_33 29
#define MVM_UNICODE_PVALUE_CCC_34 30
#define MVM_UNICODE_PVALUE_CCC_35 31
#define MVM_UNICODE_PVALUE_CCC_36 32
#define MVM_UNICODE_PVALUE_CCC_7 3
#define MVM_UNICODE_PVALUE_CCC_8 4
#define MVM_UNICODE_PVALUE_CCC_84 33
#define MVM_UNICODE_PVALUE_CCC_9 5
#define MVM_UNICODE_PVALUE_CCC_91 34
#define MVM_UNICODE_PVALUE_CCC_NOT_REORDERED 0


/* MVM_UNICODE_PROPERTY_NUMERIC_TYPE */
#define MVM_UNICODE_PVALUE_Numeric_Type_DECIMAL 3
#define MVM_UNICODE_PVALUE_Numeric_Type_DIGIT 2
#define MVM_UNICODE_PVALUE_Numeric_Type_NONE 0
#define MVM_UNICODE_PVALUE_Numeric_Type_NUMERIC 1

#define num_unicode_property_value_keypairs 4250

typedef enum {
    MVM_UNICODE_PROPERTY_DECOMP_SPEC = 1,
    MVM_UNICODE_PROPERTY_CASE_CHANGE_INDEX = 2,
    MVM_UNICODE_PROPERTY_JOINING_GROUP = 3,
    MVM_UNICODE_PROPERTY_CASE_FOLDING = 4,
    MVM_UNICODE_PROPERTY_BIDI_MIRRORING_GLYPH = 5,
    MVM_UNICODE_PROPERTY_BLOCK = 6,
    MVM_UNICODE_PROPERTY_EAST_ASIAN_WIDTH = 7,
    MVM_UNICODE_PROPERTY_NUMERIC_VALUE = 8,
    MVM_UNICODE_PROPERTY_SCRIPT = 9,
    MVM_UNICODE_PROPERTY_NUMERIC_VALUE_NUMERATOR = 10,
    MVM_UNICODE_PROPERTY_SPECIAL_CASING = 11,
    MVM_UNICODE_PROPERTY_NFC_QC = 12,
    MVM_UNICODE_PROPERTY_CANONICAL_COMBINING_CLASS = 13,
    MVM_UNICODE_PROPERTY_LINE_BREAK = 14,
    MVM_UNICODE_PROPERTY_AGE = 15,
    MVM_UNICODE_PROPERTY_BIDI_CLASS = 16,
    MVM_UNICODE_PROPERTY_DECOMPOSITION_TYPE = 17,
    MVM_UNICODE_PROPERTY_GENERAL_CATEGORY = 18,
    MVM_UNICODE_PROPERTY_GRAPHEME_CLUSTER_BREAK = 19,
    MVM_UNICODE_PROPERTY_NUMERIC_VALUE_DENOMINATOR = 20,
    MVM_UNICODE_PROPERTY_WORD_BREAK = 21,
    MVM_UNICODE_PROPERTY_SENTENCE_BREAK = 22,
    MVM_UNICODE_PROPERTY_HANGUL_SYLLABLE_TYPE = 23,
    MVM_UNICODE_PROPERTY_JOINING_TYPE = 24,
    MVM_UNICODE_PROPERTY_NFG_QC = 25,
    MVM_UNICODE_PROPERTY_NFKC_QC = 26,
    MVM_UNICODE_PROPERTY_NUMERIC_TYPE = 27,
    MVM_UNICODE_PROPERTY_ASCII_HEX_DIGIT = 28,
    MVM_UNICODE_PROPERTY_ALPHABETIC = 29,
    MVM_UNICODE_PROPERTY_ANY = 30,
    MVM_UNICODE_PROPERTY_ASSIGNED = 31,
    MVM_UNICODE_PROPERTY_BIDI_CONTROL = 32,
    MVM_UNICODE_PROPERTY_BIDI_MIRRORED = 33,
    MVM_UNICODE_PROPERTY_C = 34,
    MVM_UNICODE_PROPERTY_CASE_FOLDING_SIMPLE = 35,
    MVM_UNICODE_PROPERTY_CASE_IGNORABLE = 36,
    MVM_UNICODE_PROPERTY_CASED = 37,
    MVM_UNICODE_PROPERTY_CHANGES_WHEN_CASEFOLDED = 38,
    MVM_UNICODE_PROPERTY_CHANGES_WHEN_CASEMAPPED = 39,
    MVM_UNICODE_PROPERTY_CHANGES_WHEN_LOWERCASED = 40,
    MVM_UNICODE_PROPERTY_CHANGES_WHEN_NFKC_CASEFOLDED = 41,
    MVM_UNICODE_PROPERTY_CHANGES_WHEN_TITLECASED = 42,
    MVM_UNICODE_PROPERTY_CHANGES_WHEN_UPPERCASED = 43,
    MVM_UNICODE_PROPERTY_DASH = 44,
    MVM_UNICODE_PROPERTY_DEFAULT_IGNORABLE_CODE_POINT = 45,
    MVM_UNICODE_PROPERTY_DEPRECATED = 46,
    MVM_UNICODE_PROPERTY_DIACRITIC = 47,
    MVM_UNICODE_PROPERTY_EMOJI = 48,
    MVM_UNICODE_PROPERTY_EMOJI_COMPONENT = 49,
    MVM_UNICODE_PROPERTY_EMOJI_MODIFIER = 50,
    MVM_UNICODE_PROPERTY_EMOJI_MODIFIER_BASE = 51,
    MVM_UNICODE_PROPERTY_EMOJI_PRESENTATION = 52,
    MVM_UNICODE_PROPERTY_EXTENDED_PICTOGRAPHIC = 53,
    MVM_UNICODE_PROPERTY_EXTENDER = 54,
    MVM_UNICODE_PROPERTY_FULL_COMPOSITION_EXCLUSION = 55,
    MVM_UNICODE_PROPERTY_GRAPHEME_BASE = 56,
    MVM_UNICODE_PROPERTY_GRAPHEME_EXTEND = 57,
    MVM_UNICODE_PROPERTY_GRAPHEME_LINK = 58,
    MVM_UNICODE_PROPERTY_HEX_DIGIT = 59,
    MVM_UNICODE_PROPERTY_HYPHEN = 60,
    MVM_UNICODE_PROPERTY_IDS_BINARY_OPERATOR = 61,
    MVM_UNICODE_PROPERTY_IDS_TRINARY_OPERATOR = 62,
    MVM_UNICODE_PROPERTY_ID_CONTINUE = 63,
    MVM_UNICODE_PROPERTY_ID_START = 64,
    MVM_UNICODE_PROPERTY_IDEOGRAPHIC = 65,
    MVM_UNICODE_PROPERTY_JOIN_CONTROL = 66,
    MVM_UNICODE_PROPERTY_L = 67,
    MVM_UNICODE_PROPERTY_LC = 68,
    MVM_UNICODE_PROPERTY_LOGICAL_ORDER_EXCEPTION = 69,
    MVM_UNICODE_PROPERTY_LOWERCASE = 70,
    MVM_UNICODE_PROPERTY_M = 71,
    MVM_UNICODE_PROPERTY_MVM_COLLATION_PRIMARY = 72,
    MVM_UNICODE_PROPERTY_MVM_COLLATION_QC = 73,
    MVM_UNICODE_PROPERTY_MATH = 74,
    MVM_UNICODE_PROPERTY_MVM_COLLATION_SECONDARY = 75,
    MVM_UNICODE_PROPERTY_MVM_COLLATION_TERTIARY = 76,
    MVM_UNICODE_PROPERTY_N = 77,
    MVM_UNICODE_PROPERTY_NFD_QC = 78,
    MVM_UNICODE_PROPERTY_NFKD_QC = 79,
    MVM_UNICODE_PROPERTY_NONCHARACTER_CODE_POINT = 80,
    MVM_UNICODE_PROPERTY_OTHER_ALPHABETIC = 81,
    MVM_UNICODE_PROPERTY_OTHER_DEFAULT_IGNORABLE_CODE_POINT = 82,
    MVM_UNICODE_PROPERTY_OTHER_GRAPHEME_EXTEND = 83,
    MVM_UNICODE_PROPERTY_OTHER_ID_CONTINUE = 84,
    MVM_UNICODE_PROPERTY_OTHER_ID_START = 85,
    MVM_UNICODE_PROPERTY_OTHER_LOWERCASE = 86,
    MVM_UNICODE_PROPERTY_OTHER_MATH = 87,
    MVM_UNICODE_PROPERTY_OTHER_UPPERCASE = 88,
    MVM_UNICODE_PROPERTY_P = 89,
    MVM_UNICODE_PROPERTY_PATTERN_SYNTAX = 90,
    MVM_UNICODE_PROPERTY_PATTERN_WHITE_SPACE = 91,
    MVM_UNICODE_PROPERTY_PREPENDED_CONCATENATION_MARK = 92,
    MVM_UNICODE_PROPERTY_QUOTATION_MARK = 93,
    MVM_UNICODE_PROPERTY_RADICAL = 94,
    MVM_UNICODE_PROPERTY_REGIONAL_INDICATOR = 95,
    MVM_UNICODE_PROPERTY_S = 96,
    MVM_UNICODE_PROPERTY_SENTENCE_TERMINAL = 97,
    MVM_UNICODE_PROPERTY_SOFT_DOTTED = 98,
    MVM_UNICODE_PROPERTY_TERMINAL_PUNCTUATION = 99,
    MVM_UNICODE_PROPERTY_UNIFIED_IDEOGRAPH = 100,
    MVM_UNICODE_PROPERTY_UPPERCASE = 101,
    MVM_UNICODE_PROPERTY_VARIATION_SELECTOR = 102,
    MVM_UNICODE_PROPERTY_WHITE_SPACE = 103,
    MVM_UNICODE_PROPERTY_XID_CONTINUE = 104,
    MVM_UNICODE_PROPERTY_XID_START = 105,
    MVM_UNICODE_PROPERTY_Z = 106,
} MVM_unicode_property_codes;