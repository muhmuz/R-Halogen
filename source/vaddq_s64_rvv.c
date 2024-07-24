// Copyright 2024 10xEngineers

#include "../common/rhal_base.h"

/**
 * @brief Adds two 128-bit vectors of 64-bit signed integer element-wise.
 * 
 * This function performs an element-wise addition of two 64-bit signed integer vectors (`a` and `b`), 
 * each containing two element. It utilizes the RISC-V Vector Extension to carry out the operation, 
 * making it analogous to the ARM Neon function `vaddq_s64`. The result is a new vector where each element 
 * is the sum of the corresponding elements in the input vectors.
 * 
 * @param a The first input vector of type int64x2_t containing 64-bit signed integers.
 * @param b The second input vector of type int64x2_t containing 64-bit signed integers.
 * @return int64x2_t The result of the element-wise addition, returned as an 64-bit signed integer vector.
 */
int64x2_t vaddq_s64_rvv(int64x2_t a, int64x2_t b) {
    return __riscv_vadd_vv_i64m1(a, b, 2);
}
