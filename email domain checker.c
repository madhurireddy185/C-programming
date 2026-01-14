#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
bool is_valid_username(const char* username) {
    int len = strlen(username);
    if (len < 6 || len > 12) {
        return false;
    }
    if (isdigit(username[0])) {
        return false;
    }
    for (int i = 0; i < len; i++) {
        if (!islower(username[i]) && !isdigit(username[i])) {
            return false;
        }
    }

    return true;
}
bool is_valid_company_email(const char* email) {
    const char* required_domain = "@company.com";
    int email_len = strlen(email);
    int domain_len = strlen(required_domain);
    if (email_len < domain_len) {
        return false;
    }
    if (strcmp(email + email_len - domain_len, required_domain) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    printf("--- Username Validation Tests ---\n");
    char user1[] = "john123";
    char user2[] = "123john";
    char user3[] = "john";
    char user4[] = "john_doe";
    char user5[] = "john2024";

    printf("Testing username: %s -> %s\n", user1, is_valid_username(user1) ? "Valid" : "Invalid");
    printf("Testing username: %s -> %s\n", user2, is_valid_username(user2) ? "Valid" : "Invalid");
    printf("Testing username: %s -> %s\n", user3, is_valid_username(user3) ? "Valid" : "Invalid");
    printf("Testing username: %s -> %s\n", user4, is_valid_username(user4) ? "Valid" : "Invalid");
    printf("Testing username: %s -> %s\n", user5, is_valid_username(user5) ? "Valid" : "Invalid");

    printf("\n");
    printf("--- Email Domain Checker Tests ---\n");
    char email1[] = "alice@company.com";
    char email2[] = "bob@gmail.com";
    char email3[] = "hr@company.com";
    char email4[] = "admin@yahoo.com";
    char email5[] = "test@company.co";

    printf("Testing email: %s -> %s\n", email1, is_valid_company_email(email1) ? "Valid" : "Invalid");
    printf("Testing email: %s -> %s\n", email2, is_valid_company_email(email2) ? "Valid" : "Invalid");
    printf("Testing email: %s -> %s\n", email3, is_valid_company_email(email3) ? "Valid" : "Invalid");
    printf("Testing email: %s -> %s\n", email4, is_valid_company_email(email4) ? "Valid" : "Invalid");
    printf("Testing email: %s -> %s\n", email5, is_valid_company_email(email5) ? "Valid" : "Invalid");
    
    return 0;
}