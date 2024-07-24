// Copyright 2024 10xEngineers

#include "../common/rhal_base.h"

/**
 * @brief Adds two 128-bit vectors of 16-bit signed integers element-wise.
 * 
 * This function performs an element-wise addition of two 16-bit signed integer vectors (`a` and `b`), 
 * each containing eight elements. It utilizes the RISC-V Vector Extension to carry out the operation, 
 * making it analogous to the ARM Neon function `vaddq_s16`. The result is a new vector where each element 
 * is the sum of the corresponding elements in the input vectors.
 * 
 * @param a The first input vector of type int16x8_t containing 16-bit signed integers.
 * @param b The second input vector of type int16x8_t containing 16-bit signed integers.
 * @return int16x8_t The result of the element-wise addition, returned as an 16-bit signed integer vector.
 */
int16x8_t vaddq_s16_rvv(int16x8_t a, int16x8_t b) {
    return __riscv_vadd_vv_i16m1(a, b, 8);
}
