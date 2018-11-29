/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by cantools version 29.6.0 Thu Nov 29 23:08:12 2018.
 */

#ifndef MULTIPLEX_2_H
#define MULTIPLEX_2_H

#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>

#ifndef EINVAL
#    define EINVAL -22
#endif

#define MULTIPLEX_2_SHARED_FRAME_ID (0xc02fefeu)
#define MULTIPLEX_2_NORMAL_FRAME_ID (0xc01fefeu)
#define MULTIPLEX_2_EXTENDED_FRAME_ID (0xc00fefeu)
#define MULTIPLEX_2_EXTENDED_TYPES_FRAME_ID (0xc03fefeu)



/**
 * Signals in message Shared.
 *
 * @param s0 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s1 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s2 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 */
struct multiplex_2_shared_t {
    int8_t s0;
    int8_t s1;
    int8_t s2;
};

/**
 * Signals in message Normal.
 *
 * @param s0 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s1 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s2 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 */
struct multiplex_2_normal_t {
    int8_t s0;
    int8_t s1;
    int8_t s2;
};

/**
 * Signals in message Extended.
 *
 * @param s0 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s5 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s1 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s4 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s2 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s3 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s6 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s8 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s7 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 */
struct multiplex_2_extended_t {
    int8_t s0;
    int32_t s5;
    int8_t s1;
    int32_t s4;
    int8_t s2;
    int16_t s3;
    int8_t s6;
    int8_t s8;
    int32_t s7;
};

/**
 * Signals in message ExtendedTypes.
 *
 * @param s11 Value as on the CAN bus.
 *            Range: 2..6 (2..6 -)
 *            Scale: 1
 *            Offset: 0
 * @param s0 Value as on the CAN bus.
 *            Range: -
 *            Scale: 1
 *            Offset: 0
 * @param s10 Value as on the CAN bus.
 *            Range: -340000000000000000000000000000000000000..340000000000000000000000000000000000000 (-3.4E+38..3.4E+38 -)
 *            Scale: 1
 *            Offset: 0
 * @param s9 Value as on the CAN bus.
 *            Range: -1.34..1235 (-1.34..1235 -)
 *            Scale: 1
 *            Offset: 0
 */
struct multiplex_2_extended_types_t {
    uint8_t s11;
    int8_t s0;
    float s10;
    float s9;
};

/**
 * Encode message Shared.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t multiplex_2_shared_encode(
    uint8_t *dst_p,
    const struct multiplex_2_shared_t *src_p,
    size_t size);

/**
 * Decode message Shared.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int multiplex_2_shared_decode(
    struct multiplex_2_shared_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_shared_s0_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_shared_s1_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_shared_s2_is_in_range(int8_t value);

/**
 * Encode message Normal.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t multiplex_2_normal_encode(
    uint8_t *dst_p,
    const struct multiplex_2_normal_t *src_p,
    size_t size);

/**
 * Decode message Normal.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int multiplex_2_normal_decode(
    struct multiplex_2_normal_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_normal_s0_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_normal_s1_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_normal_s2_is_in_range(int8_t value);

/**
 * Encode message Extended.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t multiplex_2_extended_encode(
    uint8_t *dst_p,
    const struct multiplex_2_extended_t *src_p,
    size_t size);

/**
 * Decode message Extended.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int multiplex_2_extended_decode(
    struct multiplex_2_extended_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_s0_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_s5_is_in_range(int32_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_s1_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_s4_is_in_range(int32_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_s2_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_s3_is_in_range(int16_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_s6_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_s8_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_s7_is_in_range(int32_t value);

/**
 * Encode message ExtendedTypes.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t multiplex_2_extended_types_encode(
    uint8_t *dst_p,
    const struct multiplex_2_extended_types_t *src_p,
    size_t size);

/**
 * Decode message ExtendedTypes.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int multiplex_2_extended_types_decode(
    struct multiplex_2_extended_types_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_types_s11_is_in_range(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_types_s0_is_in_range(int8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_types_s10_is_in_range(float value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool multiplex_2_extended_types_s9_is_in_range(float value);

#endif
