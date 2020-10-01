#!/usr/bin/env bash

sed -i 's/Vector84,/RgbIsr,/g' lib/chibios/os/common/startup/ARMCMx/compilers/GCC/vectors.S
