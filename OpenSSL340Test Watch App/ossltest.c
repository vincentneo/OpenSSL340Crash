//
//  ossltest.c
//  OpenSSL340Test Watch App
//
//  Created by Vincent Neo on 6/12/24.
//

#include <openssl/evp.h>

void test_pbkdf2(void) {
  unsigned char buf[32];
  unsigned char salt[4];
  salt[0] = salt[1] = salt[2] = salt[3] = 's';
  PKCS5_PBKDF2_HMAC("password", 8, salt, 4, 2, EVP_sha256(), 32, buf);
}
