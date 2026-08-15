/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __CRYPTOHASH_H
#define __CRYPTOHASH_H

#include <uapi/linux/types.h>

#define SHA_DIGEST_WORDS 5
#define SHA_MESSAGE_BYTES (512 /*bits*/ / 8)
#define SHA_WORKSPACE_WORDS 16
#define SHA1_DIGEST_WORDS SHA_DIGEST_WORDS
#define SHA1_BLOCK_SIZE SHA_MESSAGE_BYTES
#define SHA1_WORKSPACE_WORDS SHA_WORKSPACE_WORDS
#define sha1_init sha_init
#define sha1_transform sha_transform

void sha_init(__u32 *buf);
void sha_transform(__u32 *digest, const char *data, __u32 *W);

#endif
