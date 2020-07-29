/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
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

#include "common-hal/memoryio/ByteArray.h"

#include "supervisor/shared/stack.h"

#include <stdint.h>
#include <string.h>

uint32_t common_hal_memoryio_bytearray_get_length(memoryio_bytearray_obj_t *self) {
    return self->len;
}

bool common_hal_memoryio_bytearray_set_bytes(memoryio_bytearray_obj_t *self,
        uint32_t start_index, uint8_t* values, uint32_t len) {
    memcpy(self->start_address + start_index, values, len);
    assert_heap_ok();
    return true;
}

// memoryio memory is memory mapped so reading it is easy.
void common_hal_memoryio_bytearray_get_bytes(memoryio_bytearray_obj_t *self,
    uint32_t start_index, uint32_t len, uint8_t* values) {
    memcpy(values, self->start_address + start_index, len);
}
