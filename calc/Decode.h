//
// Created by wongc on 8/2/2021.
//

#ifndef FX_991EX_SIM_DECODE_H
#define FX_991EX_SIM_DECODE_H


#include "calculator.h"

class Decode {
public:
    static void num(const char& inst, Calculator* calc);
    static void add(const char& inst, Calculator* calc);
};


#endif //FX_991EX_SIM_DECODE_H
