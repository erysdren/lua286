
#ifndef lua286_h
#define lua286_h

#include <stdint.h>

#undef LUA_INTEGER
#define LUA_INTEGER int16_t

#undef LUAI_UACINT
#define LUAI_UACINT int16_t

#undef LUA_UNSIGNED
#define LUA_UNSIGNED uint16_t

#undef LUA_NUMBER
#define LUA_NUMBER float

#undef LUAI_UACNUMBER
#define LUAI_UACNUMBER float

#undef LUA_MAXINTEGER
#define LUA_MAXINTEGER INT16_MAX

#undef LUA_MININTEGER
#define LUA_MININTEGER INT16_MIN

#undef LUA_MAXUNSIGNED
#define LUA_MAXUNSIGNED UINT16_MAX

#undef LUA_INTEGER_FRMLEN
#define LUA_INTEGER_FRMLEN ""

#undef LUA_INTEGER_FMT
#define LUA_INTEGER_FMT "%ld"

#undef LUA_NUMBER_FRMLEN
#define LUA_NUMBER_FRMLEN ""

#undef LUA_NUMBER_FMT
#define LUA_NUMBER_FMT "%.7g"

#undef l_mathop
#define l_mathop(op) (lua_Number)op

#undef lua_str2number
#define lua_str2number(s, p) strtof((s), (p))

#undef l_floatatt
#define l_floatatt(n) (FLT_##n)

#undef LUAI_MAXSTACK
#define LUAI_MAXSTACK 15000

#endif
