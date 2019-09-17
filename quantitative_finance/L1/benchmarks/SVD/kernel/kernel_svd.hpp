/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef KERNEL_SVDKERNEL_H
#define KERNEL_SVDKERNEL_H
#include "xf_fintech/jacobi_svd.hpp"
#define MA 4
#define NA 4

extern "C" void kernel_svd_0(
    double dataA[NA * NA], double sigma[NA], double dataU[NA * NA], double dataV[NA * NA], int diagSize1);

#endif