/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Lucian Copeland for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "common-hal/pulseio/PulseOut.h"

#include "shared-bindings/pulseio/PWMOut.h"
#include "py/runtime.h"

// STATIC void turn_on(pulseio_pulseout_obj_t *pulseout) {
// }

// STATIC void turn_off(pulseio_pulseout_obj_t *pulseout) {
// }

// STATIC void start_timer(void) {
// }

// STATIC void pulseout_event_handler(void) {
// }

void pulseout_reset() {
}

void common_hal_pulseio_pulseout_construct(pulseio_pulseout_obj_t* self,
                                           const pulseio_pwmout_obj_t* carrier) {
    mp_raise_NotImplementedError(translate("PulseOut not supported on this chip"));
}

bool common_hal_pulseio_pulseout_deinited(pulseio_pulseout_obj_t* self) {
    return false;
}

void common_hal_pulseio_pulseout_deinit(pulseio_pulseout_obj_t* self) {
}

void common_hal_pulseio_pulseout_send(pulseio_pulseout_obj_t* self, uint16_t* pulses, uint16_t length) {
}
