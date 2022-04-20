//
//  types.h
//  ObjcEncodingParser
//
//  Created by Cyandev on 2022/4/20.
//

#ifndef __OBJC_TYPE
#define __OBJC_TYPE(name, value, rep, size, simple)
#endif

//          name                         val  rep  size simple
__OBJC_TYPE(OBJC_TYPE_CHAR,               1,  'c',  1,  1)
__OBJC_TYPE(OBJC_TYPE_INT,                2,  'i',  4,  1)
__OBJC_TYPE(OBJC_TYPE_SHORT,              3,  's',  2,  1)
__OBJC_TYPE(OBJC_TYPE_LONG,               4,  'l',  4,  1)
__OBJC_TYPE(OBJC_TYPE_LONG_LONG,          5,  'q',  8,  1)
__OBJC_TYPE(OBJC_TYPE_UNSIGNED_CHAR,      6,  'C',  1,  1)
__OBJC_TYPE(OBJC_TYPE_UNSIGNED_INT,       7,  'I',  4,  1)
__OBJC_TYPE(OBJC_TYPE_UNSIGNED_SHORT,     8,  'S',  2,  1)
__OBJC_TYPE(OBJC_TYPE_UNSIGNED_LONG,      9,  'L',  4,  1)
__OBJC_TYPE(OBJC_TYPE_UNSIGNED_LONG_LONG, 10, 'Q',  8,  1)
__OBJC_TYPE(OBJC_TYPE_FLOAT,              11, 'f',  4,  1)
__OBJC_TYPE(OBJC_TYPE_DOUBLE,             12, 'd',  8,  1)
__OBJC_TYPE(OBJC_TYPE_BOOL,               13, 'B',  1,  1)
__OBJC_TYPE(OBJC_TYPE_VOID,               14, 'v',  0,  1)
__OBJC_TYPE(OBJC_TYPE_STRING,             15, '*',  8,  1)
__OBJC_TYPE(OBJC_TYPE_OBJECT,             16, '@',  8,  1)
__OBJC_TYPE(OBJC_TYPE_CLASS,              17, '#',  8,  1)
__OBJC_TYPE(OBJC_TYPE_SEL,                18, ':',  8,  1)
#ifndef __NO_COMPLEX_OBJC_TYPES
__OBJC_TYPE(OBJC_TYPE_ARRAY,              19, '[',  8,  0)
__OBJC_TYPE(OBJC_TYPE_STRUCT,             20, '{',  0,  0)
__OBJC_TYPE(OBJC_TYPE_UNION,              21, '(',  0,  0)
__OBJC_TYPE(OBJC_TYPE_BIT_FIELD,          22, 'b',  0,  0)
__OBJC_TYPE(OBJC_TYPE_POINTER,            23, '^',  8,  0)
#endif
__OBJC_TYPE(OBJC_TYPE_UNKNOWN,            64, '?',  0,  1)