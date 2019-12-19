#ifndef ___FX
#define ___FX
#include "iostream"
#include <stdlib.h>
#include <stdio.h>
namespace fx
{
#define X a
typedef int ExecStatus;
typedef void *data_t;
const ExecStatus RETCODE_ERR = -1;
const ExecStatus RETCODE_EMPTY = 1;
const ExecStatus RETCODE_SUCCESS = 0;
const ExecStatus RETCODE_OVERFLOW = 2;
} // namespace fx
const char *FX_VERSION = "0.5-lee";
#endif