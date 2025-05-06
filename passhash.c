#include <stdio.h>
#include <string.h>
#include <openssl/evp.h>
#include <openssl/sha.h>

void hash_password(const char *password) {
    unsigned char hash[SHA256_DIGEST_LENGTH];  // SHA256 produces a 256-bit (32 byte) hash
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    if (mdctx == NULL) {
        printf("EVP_MD_CTX_new failed\n");
        return;
    }

    // Initialize the hash context with SHA-256
    if (EVP_DigestInit_ex(mdctx, EVP_sha256(), NULL) != 1) {
        printf("EVP_DigestInit_ex failed\n");
        return;
    }

    // Update the hash context with the password
    if (EVP_DigestUpdate(mdctx, password, strlen(password)) != 1) {
        printf("EVP_DigestUpdate failed\n");
        return;
    }

    // Finalize the hash
    if (EVP_DigestFinal_ex(mdctx, hash, NULL) != 1) {
        printf("EVP_DigestFinal_ex failed\n");
        return;
    }

    EVP_MD_CTX_free(mdctx);  // Free the context

    // Print the hash as a hexadecimal string
    printf("Password hash (SHA-256): ");
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }
    printf("\n");
}

int main() {
    const char *password = "securePassword123";  // Example password
    hash_password(password);
    return 0;
}
