#include <stdio.h>

int main() {
    char username[20];
    int password;

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%d", &password);

    if (username[0] == 'a' && username[1] == 'd' && username[2] == 'm' && username[3] == 'i' && username[4] == 'n' && password == 1234) {
        printf("Login Successful\n");
    } else {
        printf("Wrong Username or Password\n");
    }
}
