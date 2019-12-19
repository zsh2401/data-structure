/*
Version 0.5-Lee
*/
#ifndef ___x_FX_H
#define ___x_FX_H
#include "iostream"
#include <stdlib.h>
#include <stdio.h>
namespace fx
{
typedef int ExecStatus;
typedef void *data_t;
const ExecStatus RETCODE_ERR = -1;
const ExecStatus RETCODE_EMPTY = 1;
const ExecStatus RETCODE_SUCCESS = 0;
const ExecStatus RETCODE_OVERFLOW = 2;
} // namespace fx
#endif