// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ImageCopyFloat.frag.00000000.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kImageCopyFloat_frag_00000000[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x85,0x58,0x59,0x6c,0x56,0x55,
    0x10,0xbe,0x73,0xda,0xd2,0x5a,0x4a,0xc1,0x50,0x8a,0x45,0x96,0x6a,0xd5,0xa0,0x34,
    0x48,0x2b,0xe2,0x42,0x4b,0x4b,0x11,0x5a,0xd3,0x2a,0x2e,0x21,0xa2,0x68,0x4c,0x83,
    0x28,0x88,0xb4,0x22,0xb8,0x44,0x90,0xb0,0x09,0xbc,0xb8,0x40,0xfa,0xa0,0x86,0x88,
    0xcb,0x03,0x2e,0x84,0xa0,0x51,0x42,0x94,0x10,0x25,0x14,0x1f,0x34,0x1a,0x8c,0x0b,
    0x0f,0x68,0x24,0x35,0x2a,0x3c,0x19,0xb5,0x88,0xb4,0x2e,0xf3,0x75,0xbe,0xb1,0xe3,
    0x1f,0x8d,0x7f,0x72,0x7a,0xff,0xf3,0xcd,0xcc,0x37,0x33,0xdf,0x39,0xe7,0xde,0xfb,
    0x37,0x2f,0x55,0x15,0x66,0x99,0x64,0xc5,0x59,0x51,0xb6,0x22,0x65,0x03,0x9f,0xb3,
    0xb3,0xa4,0x88,0x5d,0x6b,0xf5,0x3a,0x34,0x1b,0x32,0x30,0x6f,0x6e,0xbb,0xb9,0x6d,
    0xf2,0x8a,0x95,0x77,0x4d,0x9e,0x7a,0xf9,0x14,0xf8,0x95,0x66,0x79,0x03,0xfe,0xb0,
    0x0d,0xcf,0x0a,0xb3,0x7c,0xbd,0x62,0x2c,0x6b,0x5f,0xd2,0x01,0xbc,0x4f,0xc7,0x58,
    0x35,0x8e,0x50,0x3f,0xe0,0x9a,0x28,0x6b,0xc9,0x0a,0xb2,0x59,0x96,0x26,0xab,0xe2,
    0xd5,0x31,0x21,0x56,0x14,0xb0,0x44,0x6c,0x44,0xc0,0xf2,0x88,0x95,0x05,0x2c,0x9f,
    0xd8,0x39,0x01,0x2b,0x20,0x36,0x36,0x60,0x43,0x88,0x55,0x06,0xac,0x90,0xd8,0x05,
    0x01,0x2b,0x22,0x36,0x31,0x60,0x67,0x11,0xab,0x0e,0x58,0x31,0xb1,0x29,0x01,0x1b,
    0x4a,0x6c,0x6a,0xc0,0x4a,0x88,0x5d,0x19,0xb0,0x61,0xc4,0xea,0x02,0x56,0x4a,0xac,
    0x11,0x7a,0x6b,0xa7,0xae,0x41,0xb3,0x76,0xd8,0x47,0xee,0xe1,0x9c,0x17,0xa8,0x60,
    0xe7,0x53,0x43,0x9f,0x9f,0x17,0xe6,0xd0,0x7e,0x3c,0xe7,0x23,0x95,0x05,0x3c,0xe7,
    0x29,0x67,0x1e,0x39,0xcb,0xf5,0xdb,0x10,0x6a,0x31,0x4a,0xfd,0x87,0xf3,0x3b,0xd6,
    0x61,0xb4,0xce,0x47,0x30,0x57,0xe2,0xbc,0x9c,0xfa,0x41,0xeb,0x49,0xfa,0x17,0xdf,
    0xc7,0x41,0xdf,0xc9,0xd7,0x4d,0x2f,0x53,0xaf,0xf1,0x01,0x47,0x0f,0x37,0xed,0xbb,
    0x7e,0xa6,0xcf,0xa1,0xe3,0xbc,0x79,0x9f,0xcf,0xf0,0xf9,0x25,0x3a,0xea,0x8b,0x37,
    0x37,0xf8,0x1c,0x9a,0xee,0x6e,0x6e,0xaf,0xf7,0x79,0x8d,0x8e,0xef,0x76,0x5f,0xf8,
    0xf7,0x1c,0x1a,0x3d,0xf7,0x6c,0x45,0x23,0xea,0x6c,0x62,0x9d,0xf8,0x8c,0xd7,0x5d,
    0x3a,0x8b,0xfb,0xc3,0xeb,0xf5,0xd1,0xf4,0x3f,0xc3,0x7d,0x2a,0x95,0xf3,0x1a,0xae,
    0x2f,0xb8,0xa6,0x73,0x3e,0x9b,0xd8,0x24,0x6a,0x33,0x87,0xda,0xc0,0xbf,0x99,0xb6,
    0x11,0xc1,0xde,0xca,0x3d,0x07,0x7b,0x1b,0xed,0x4d,0xb4,0xe3,0x3a,0x97,0x35,0xbb,
    0xff,0x7c,0xea,0xe9,0xf3,0x85,0x5c,0x7f,0x9f,0x77,0x70,0xbd,0x7d,0xbe,0x91,0x7b,
    0x15,0x6b,0xf1,0x04,0x63,0xf3,0x82,0xbd,0x8b,0xfb,0xd6,0x35,0xdb,0x9e,0x93,0x6f,
    0x0f,0xf7,0xa1,0xcf,0xbb,0x59,0x23,0xf8,0x3e,0x24,0x5f,0x0a,0xf6,0x23,0xdc,0xdf,
    0x3e,0x3f,0xc6,0x3d,0x8b,0xfe,0xbe,0x62,0xec,0xf0,0x60,0x3f,0x9e,0x13,0xdf,0x93,
    0x93,0xff,0x44,0xce,0xde,0xf9,0x65,0xc0,0xba,0xb6,0x01,0x7c,0x67,0xa8,0x6d,0x39,
    0xf5,0x3f,0xc3,0xfb,0x07,0xb0,0x0a,0xcd,0x94,0xc4,0xea,0x93,0xec,0x9f,0x1f,0x9f,
    0x9f,0x8b,0x7d,0xad,0x13,0xf8,0x81,0x2f,0x9f,0x06,0x60,0xd3,0x39,0x2f,0x90,0xc1,
    0x7a,0xc0,0x55,0x62,0xf3,0x86,0x6a,0x5d,0x35,0xf4,0x3f,0x4c,0x0c,0x2b,0x21,0xc7,
    0xb9,0x62,0xfa,0x7a,0x4d,0x98,0x8f,0x95,0x41,0xcd,0xc1,0x31,0x5f,0x1b,0xee,0xdc,
    0xf9,0xc0,0xdf,0xfb,0xf8,0x56,0x9d,0x6f,0xdd,0xf0,0x7c,0xfd,0x34,0xe5,0x4c,0xec,
    0x37,0xe3,0x3a,0x9d,0x56,0x04,0xfb,0xa3,0x9e,0x67,0xa9,0x9f,0x3d,0xce,0xd5,0x55,
    0x45,0xfe,0xdf,0x89,0xf5,0x87,0xde,0x3a,0x78,0x0e,0xff,0xa0,0x7d,0xa6,0x32,0x60,
    0xef,0xd5,0x88,0xed,0xcf,0x39,0xe4,0x83,0x4f,0xad,0x18,0xbe,0x5e,0x7d,0x30,0xbf,
    0x4c,0x2c,0x0e,0x38,0xe2,0xb0,0x27,0xa7,0x32,0xae,0x95,0x71,0xd8,0x97,0x97,0x8b,
    0xe1,0xaf,0xab,0x0f,0xce,0xf0,0x34,0x31,0x0c,0xfb,0xf5,0x57,0xad,0xbc,0x8e,0xba,
    0x9d,0x51,0x7f,0xd8,0xae,0xd0,0x01,0x0c,0xfd,0xe0,0xfb,0x8d,0x1a,0x87,0xf5,0xbd,
    0x4a,0x2c,0x27,0x3e,0x6b,0xb8,0xe6,0x57,0x8b,0xe1,0x37,0xa9,0x3a,0xa8,0x69,0x5a,
    0x32,0xcc,0xfd,0x7e,0x53,0x0e,0xe7,0xc2,0xb5,0x57,0xb5,0x80,0xdf,0x6d,0xc9,0x7c,
    0x0a,0x18,0x73,0x45,0xe8,0xa1,0x9e,0x3d,0xcc,0x0f,0x3d,0xcc,0x10,0xc3,0xbd,0x87,
    0x06,0x31,0xcc,0x7b,0x98,0x1d,0x7a,0x80,0xad,0x11,0x1c,0xcc,0xdb,0x18,0x7a,0x68,
    0x12,0xcb,0x2d,0xa1,0x87,0x59,0x62,0xb8,0xf7,0x70,0x55,0x32,0xcc,0xfd,0xd0,0x83,
    0x73,0xcd,0x0e,0x3d,0x2c,0x48,0xe6,0x83,0xbe,0x10,0xd3,0x18,0x7a,0x98,0xc3,0x1e,
    0x16,0x86,0x1e,0x9a,0xc5,0x70,0xef,0xa1,0x45,0x0c,0xf3,0x1e,0xda,0x42,0x0f,0xb0,
    0x5d,0xab,0xa3,0x8d,0x79,0xaf,0x15,0xdb,0x47,0xc8,0xdb,0x2a,0x96,0x7b,0x41,0x1a,
    0x3c,0x1f,0xa8,0xd1,0x7d,0xdb,0x42,0x8d,0xb7,0xd3,0x0f,0x75,0xb7,0x92,0x13,0xf5,
    0xe0,0xdc,0x0c,0xe1,0x99,0xf1,0x3d,0x57,0xc8,0x9a,0x7b,0xc2,0x9e,0x2b,0x12,0xc3,
    0xd7,0x72,0xcf,0x15,0x8b,0x61,0xe0,0xed,0xe4,0x7d,0x65,0xa8,0x18,0xbe,0x8e,0xe7,
    0xac,0x54,0x0c,0xc3,0x79,0xbb,0x4b,0x7d,0x70,0x66,0x47,0x32,0xdf,0x3d,0xe4,0x29,
    0x23,0x86,0x5c,0xce,0x33,0x4a,0x0c,0xdf,0x42,0x9e,0x72,0x31,0xae,0x51,0xac,0x11,
    0xf7,0xa4,0xd1,0xac,0xf1,0x38,0x6b,0xc4,0xfa,0x9d,0x23,0x86,0x77,0xf2,0x8c,0x56,
    0x88,0x61,0xb7,0xa8,0x06,0x38,0x87,0x63,0x98,0x1b,0x7c,0x42,0xbb,0xaf,0xd3,0x7c,
    0xf2,0x75,0x84,0x75,0xba,0x55,0x0c,0xf7,0x75,0xba,0x4d,0x0c,0xf3,0x75,0x5a,0x1c,
    0xd6,0x09,0xb6,0x05,0x3a,0x16,0x53,0xfb,0x05,0xdc,0x6b,0xa8,0xe3,0x0e,0xb1,0xdc,
    0x19,0xe3,0x8e,0xf2,0x7b,0x9f,0x7e,0x07,0xd7,0x47,0x8c,0xc1,0x75,0x3f,0x73,0x7d,
    0x2c,0x16,0x37,0x8e,0x31,0x5f,0x86,0x5c,0xb0,0x7d,0xa2,0xe3,0x53,0xc6,0xe1,0x5a,
    0xa2,0x3d,0x22,0xd7,0x67,0xec,0x6d,0x0c,0xf3,0xe2,0x79,0xfc,0x38,0xeb,0xf8,0x5c,
    0xcc,0x8e,0x67,0xf2,0x06,0x62,0x5f,0x88,0xe1,0xd5,0xdc,0x3b,0x47,0xc9,0x09,0x7e,
    0x8f,0x3b,0xc2,0x5a,0xaa,0x72,0x7c,0x50,0xd3,0x9f,0x9a,0xed,0x34,0xb1,0x5e,0xd6,
    0x70,0x47,0x32,0x5e,0xd4,0x75,0x84,0xb5,0xe2,0x4c,0x61,0x0d,0xea,0x92,0xd9,0x5d,
    0x0f,0xd7,0xa8,0x9d,0x1a,0x09,0xfb,0x3d,0x99,0xa3,0xd1,0xd7,0xcc,0xf9,0x75,0xd0,
    0xe8,0x1b,0xb1,0x38,0xd7,0xe8,0x44,0xd0,0x08,0xb6,0xe3,0x3a,0xbe,0x65,0xdc,0xb7,
    0x41,0xa3,0xef,0x82,0x46,0xed,0x39,0x1a,0x7d,0x2f,0x66,0x8f,0x1a,0xfd,0x20,0x86,
    0xbb,0x46,0x27,0xc9,0x79,0x3c,0x68,0xd4,0xc3,0x5a,0xaa,0x72,0x7c,0x4e,0x04,0x8d,
    0x4e,0x06,0x8d,0xee,0x4c,0xc6,0x8b,0xba,0x7a,0x58,0xab,0x6b,0xd4,0x90,0xcc,0x5e,
    0xc7,0x73,0xed,0x1a,0x2d,0xa2,0x46,0x89,0xfd,0xf6,0xe7,0x68,0xf4,0x23,0x73,0xfe,
    0x18,0x34,0xfa,0x49,0x2c,0xce,0x35,0xea,0x0b,0x1a,0xc1,0xf6,0xb3,0x8e,0x53,0x8c,
    0x3b,0x15,0x34,0x3a,0x1d,0x34,0x5a,0x94,0xa3,0xd1,0x6f,0x62,0xf6,0xa8,0xd1,0x19,
    0x31,0xdc,0x35,0xea,0x27,0xe7,0xcf,0x41,0xa3,0x5e,0xd6,0x52,0x95,0xe3,0xd3,0x17,
    0x34,0xea,0x0f,0x1a,0xb5,0x27,0xe3,0x45,0x5d,0xbd,0xac,0xd5,0x35,0x6a,0x4a,0x66,
    0x87,0x56,0x89,0x7c,0x7e,0xf6,0x16,0x93,0x03,0x7e,0x0b,0xb9,0xd7,0x70,0x2f,0x44,
    0x4c,0x7f,0x38,0xf3,0x4b,0x78,0xe6,0x37,0x86,0x33,0x7f,0xaf,0x18,0xee,0x67,0x7e,
    0xa9,0x18,0xe6,0x67,0x7e,0x4b,0xd0,0x0f,0xb6,0xfb,0x74,0xac,0x64,0xde,0x95,0x81,
    0xfb,0x41,0x72,0x77,0x05,0xee,0x87,0xc4,0x70,0xe7,0x7e,0x58,0x0c,0x73,0xee,0xd5,
    0x81,0x1b,0xb6,0x47,0x74,0xac,0x26,0xf7,0x23,0xe1,0x7e,0xf2,0xa8,0x58,0x5f,0x78,
    0xd7,0x78,0x87,0x5c,0xab,0xc4,0xf0,0xed,0xd4,0xc2,0xe3,0x56,0x53,0x0b,0xf8,0x3c,
    0x26,0x96,0x13,0x75,0xae,0x22,0x3f,0xf2,0x6e,0x0e,0x79,0xe1,0xb3,0x46,0xc7,0x66,
    0xc6,0xaf,0x09,0x79,0xd7,0x86,0xbc,0x73,0xf5,0x0d,0x14,0xef,0xa6,0xeb,0x89,0x2d,
    0x4c,0x83,0xef,0x32,0xf8,0x7a,0x83,0x46,0xc0,0xbe,0x41,0x2c,0xce,0x07,0xee,0xe9,
    0xc0,0x37,0x8a,0xc5,0x6e,0x18,0xe8,0xff,0xac,0x81,0xb5,0xda,0x44,0x2e,0xd8,0xf2,
    0xf9,0x8e,0xed,0xef,0xbe,0xe8,0xc9,0x6b,0xda,0x1c,0xd6,0xf7,0x6e,0xe6,0x46,0x9f,
    0x9b,0x58,0x3b,0x7c,0xb7,0xd0,0xf7,0xbe,0x50,0x7f,0xc7,0xbf,0xd4,0x7f,0xff,0x7f,
    0xd4,0xff,0x24,0xeb,0x5c,0x2e,0xe6,0xd3,0x11,0xea,0x5c,0xc1,0x98,0xe5,0xff,0x51,
    0xa7,0xe7,0xde,0x12,0xea,0x5c,0x94,0xac,0x56,0xd4,0xbe,0x82,0xfb,0xc6,0xf7,0xca,
    0x53,0xdc,0x2b,0x7b,0xc2,0x5e,0x79,0x5a,0x0c,0xf7,0xbd,0xb2,0x55,0x0c,0xf3,0xbd,
    0xb2,0x23,0xac,0x19,0x6c,0xdb,0x74,0xec,0x60,0xde,0x6d,0xa1,0xe7,0x2e,0xb1,0xdc,
    0xfe,0xec,0x29,0x4d,0xff,0xbc,0x67,0xa4,0x64,0x31,0xb8,0xfa,0x3d,0x23,0x3f,0x59,
    0x5c,0x0d,0x63,0x86,0xa5,0xc1,0x5c,0xb0,0x15,0xe8,0x28,0x62,0x1c,0xae,0xeb,0x98,
    0xab,0x98,0x71,0xd5,0xe1,0x5e,0x31,0x34,0x19,0x8e,0xf7,0x67,0xbf,0xb7,0x94,0xa4,
    0xc1,0x7b,0x0b,0xec,0x75,0xd4,0xad,0x94,0x9c,0xe0,0xf7,0xf8,0x42,0x72,0xe2,0x7d,
    0x3b,0xfa,0xa0,0x26,0xbf,0x67,0x00,0xf3,0x7b,0xc6,0x3d,0xc9,0xf8,0x51,0x57,0x21,
    0x6b,0xf5,0x7b,0x46,0x4b,0x32,0xbb,0xeb,0xe1,0x1a,0x3d,0x43,0x8d,0xfc,0xd9,0x53,
    0x99,0xa3,0x51,0x19,0x73,0x96,0x05,0x8d,0xca,0x93,0xc5,0xb9,0x46,0x13,0x82,0x46,
    0xb0,0x8d,0xc6,0x7d,0x87,0x71,0x63,0x82,0x46,0x63,0x19,0x17,0x35,0x1a,0x97,0x0c,
    0x8f,0x1a,0x8d,0x0f,0x1a,0x8d,0x0b,0x1a,0x55,0x92,0x73,0x74,0xd0,0xa8,0x82,0x9c,
    0xae,0x91,0xfb,0x4c,0x08,0x1a,0x55,0x06,0x8d,0x96,0x24,0xe3,0x47,0x5d,0x15,0xac,
    0xd5,0x35,0x6a,0x4d,0x66,0x6f,0xc9,0x79,0xf6,0x6c,0xa7,0x46,0xfe,0xec,0xa9,0xcd,
    0xd1,0xe8,0x22,0xe6,0xbc,0x28,0x68,0x34,0x31,0x59,0x9c,0x6b,0x54,0x13,0x34,0x82,
    0xed,0x62,0x1d,0xd5,0x8c,0xab,0x0e,0x1a,0x4d,0x66,0x5c,0xd4,0xe8,0xd2,0x64,0x78,
    0xd4,0x68,0x4a,0xd0,0xe8,0xd2,0xa0,0x51,0x2d,0x39,0x2f,0x0e,0x1a,0x4d,0x22,0xa7,
    0x6b,0xe4,0x3e,0x35,0x41,0xa3,0xda,0xa0,0xd1,0xd2,0x64,0xfc,0xa8,0x6b,0x12,0x6b,
    0x75,0x8d,0xae,0x4f,0x66,0x6f,0x0d,0xcf,0x1e,0x3f,0x7b,0x3b,0xc2,0x99,0x5f,0xc6,
    0xbd,0x86,0xfb,0x00,0x62,0xc0,0xef,0x67,0xfe,0x05,0x9e,0xf9,0xee,0x70,0xe6,0x5f,
    0x14,0xc3,0xfd,0xcc,0xbf,0x24,0x86,0xf9,0x99,0x3f,0x1c,0xce,0x3c,0x6c,0x2f,0xeb,
    0x78,0x85,0x79,0x5f,0x09,0xf7,0x93,0x57,0xc9,0x7d,0x24,0x70,0xbf,0x26,0x86,0x3b,
    0xf7,0xeb,0x62,0x98,0x73,0x77,0x07,0x6e,0xd8,0x76,0xe9,0xd8,0x43,0xee,0x3d,0xe1,
    0xbd,0xfb,0x0d,0x72,0x1f,0x0b,0xef,0xdd,0x6f,0x8a,0xe1,0x1f,0xf0,0xb7,0xd5,0x5b,
    0x62,0x18,0xde,0xcd,0x3d,0xdf,0xdb,0x62,0x78,0x0f,0xf3,0xed,0x0b,0xf9,0x60,0xdb,
    0xab,0x63,0x1f,0xf3,0xed,0x0d,0xcf,0xf9,0x9b,0x93,0x3d,0xd3,0x96,0x85,0xdf,0x60,
    0xee,0xb7,0x2f,0x68,0xdd,0x91,0xcc,0x07,0xb5,0x22,0x66,0x6f,0xa8,0xe7,0x1d,0xd6,
    0x73,0x22,0xd4,0xf3,0xae,0x18,0xee,0xf5,0x1c,0x08,0xf5,0xc0,0xb6,0x5f,0xc7,0x01,
    0xe6,0xd9,0x1f,0xea,0x99,0xc7,0x7a,0x3a,0xc2,0xda,0xbb,0xdf,0x81,0x50,0x4f,0x67,
    0x32,0x1f,0xd4,0x88,0x98,0xfd,0xa1,0x9e,0xf7,0x58,0x4f,0x57,0xa8,0xe7,0x7d,0x31,
    0xdc,0xeb,0x39,0x14,0xea,0x81,0xed,0xa0,0x8e,0x43,0xcc,0x73,0x30,0xd4,0x73,0x4b,
    0xb2,0xff,0xaf,0x74,0xa6,0xc1,0xe7,0x8f,0xfb,0x1d,0x0a,0xf5,0x3c,0x90,0xcc,0x07,
    0x35,0x22,0xe6,0x20,0x9f,0x93,0xdd,0xf4,0xdd,0x15,0x9e,0x19,0xbb,0xc5,0xb4,0x04,
    0x9f,0xe7,0xb9,0x31,0x0d,0xe2,0xfe,0x3b,0xd3,0x63,0xbb,0x43,0x9e,0xe5,0xc9,0x72,
    0x21,0x37,0x62,0x76,0x31,0xcf,0x61,0xfa,0xbe,0x1c,0x9e,0xa3,0x3b,0xc9,0x87,0xe1,
    0xff,0x37,0x4e,0xe1,0x39,0xea,0x31,0x87,0x03,0xff,0xfd,0xc9,0x72,0x20,0xe7,0x4e,
    0x9e,0x81,0x19,0x1a,0x81,0xff,0xd7,0xc0,0xf6,0xbb,0xee,0x92,0x2b,0x75,0xfc,0x05,
    0xf3,0x4b,0xb5,0x25,0xf0,0x16,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_GOOGLE_include_directive : require
// #extension GL_EXT_samplerless_texture_functions : require
//
// layout(set = 0, binding = 0)uniform sampler2D src;
// layout(location = 0)out vec4 dst;
//
// #line 1 "shaders/src/ImageCopy.inc"
//
// layout(push_constant)uniform PushConstants {
//
//     ivec2 srcOffset;
//     ivec2 dstOffset;
//     int srcMip;
//     int srcLayer;
//     int srcSampleCount;
//
//     bool flipX;
//     bool flipY;
//
//     bool premultiplyAlpha;
//     bool unmultiplyAlpha;
//
//     bool dstHasLuminance;
//     bool dstIsAlpha;
//
//     bool srcIsSRGB;
//     bool dstIsSRGB;
//
//     int dstDefaultChannelsMask;
//     bool rotateXY;
// } params;
//
// float linearToSRGB(float linear)
// {
//
//     if(linear <= 0.0031308)
//     {
//         return linear * 12.92;
//     }
//     else
//     {
//         return pow(linear,(1.0f / 2.4f))* 1.055f - 0.055f;
//     }
// }
//
// float sRGBToLinear(float sRGB)
// {
//
//     if(sRGB <= 0.04045)
//     {
//         return sRGB / 12.92;
//     }
//     else
//     {
//         return pow((sRGB + 0.055f)/ 1.055f, 2.4f);
//     }
// }
//
// ivec2 transformImageCoords(ivec2 glFragCoords)
// {
//     ivec2 imageCoordsOut = glFragCoords - params . dstOffset;
//
//     if(params . flipX)
//     {
//         imageCoordsOut . x = - imageCoordsOut . x;
//     }
//     if(params . flipY)
//     {
//         imageCoordsOut . y = - imageCoordsOut . y;
//     }
//     if(params . rotateXY)
//     {
//         imageCoordsOut . xy = imageCoordsOut . yx;
//     }
//
//     return imageCoordsOut;
// }
//
//       vec4 transformSrcValue(vec4 srcValue)
// {
//
//     if(params . srcIsSRGB)
//     {
//
//         srcValue . r = linearToSRGB(srcValue . r);
//         srcValue . g = linearToSRGB(srcValue . g);
//         srcValue . b = linearToSRGB(srcValue . b);
//     }
//
//     if(params . premultiplyAlpha)
//     {
//         srcValue . rgb *= srcValue . a;
//     }
//     else if(params . unmultiplyAlpha && srcValue . a > 0)
//     {
//         srcValue . rgb /= srcValue . a;
//     }
//
//           vec4 dstValue = vec4(srcValue);
//
//     if(params . dstIsSRGB)
//     {
//
//         dstValue . r = sRGBToLinear(dstValue . r);
//         dstValue . g = sRGBToLinear(dstValue . g);
//         dstValue . b = sRGBToLinear(dstValue . b);
//     }
//
//     if(params . dstHasLuminance)
//     {
//         dstValue . rg = dstValue . ra;
//     }
//     else if(params . dstIsAlpha)
//     {
//         dstValue . r = dstValue . a;
//     }
//     else
//     {
//         int defaultChannelsMask = params . dstDefaultChannelsMask;
//         if((defaultChannelsMask & 2)!= 0)
//         {
//             dstValue . g = 0;
//         }
//         if((defaultChannelsMask & 4)!= 0)
//         {
//             dstValue . b = 0;
//         }
//         if((defaultChannelsMask & 8)!= 0)
//         {
//             dstValue . a = 1;
//         }
//     }
//
//     return dstValue;
// }
// #line 30 "shaders/src/ImageCopyFloat.frag"
//
// void main()
// {
//     ivec2 srcSubImageCoords = transformImageCoords(ivec2(gl_FragCoord . xy));
//
//           vec4 srcValue = texture(
//         src, vec2((params . srcOffset + srcSubImageCoords)+ vec2(0.5))/ textureSize(src, 0), params . srcMip);
//
//     dst = transformSrcValue(srcValue);
// }
