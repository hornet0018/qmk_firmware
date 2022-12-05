// Copyright 2022 Yoichiro Tanaka (@yoichiro)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT_ortho_2x4( \
    k01, k02, k03, k04, \
    k05, k06, k07, k08  \
  ) { \
    { k01, k02, k03, k04 }, \
    { k05, k06, k07, k08 } \
}
