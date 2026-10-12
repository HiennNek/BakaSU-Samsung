#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// tiann/KernelSU
#define EXPECTED_SIZE_OFFICIAL 0x033b
#define EXPECTED_HASH_OFFICIAL "c371061b19d8c7d7d6133c6a9bafe198fa944e50c1b31c9d8daa8d7f1fc2d2d6"

// Baka-SU/BakaSU
#define EXPECTED_SIZE_BAKASU 0x377
#define EXPECTED_HASH_BAKASU "d3469712b6214462764a1d8d3e5cbe1d6819a0b629791b9f4101867821f1df64"

// Self-signed manager for this fork (HiennNek/BakaSU-Samsung).
// DER certificate size + SHA-256 of the release keystore used to sign
// Manager-release. Keep in sync with the KEYSTORE repo secret.
#define EXPECTED_SIZE_CUSTOM 0x0517
#define EXPECTED_HASH_CUSTOM "170c8b1128b307e27892a39244ac353d554119c208706416b42c5f1ac0b4e9c2"

// KOWX712/KernelSU
#define EXPECTED_SIZE_KOWX712 0x375
#define EXPECTED_HASH_KOWX712 "484fcba6e6c43b1fb09700633bf2fb4758f13cb0b2f4457b80d075084b26c588"

typedef struct {
    unsigned size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
