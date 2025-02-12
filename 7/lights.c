#include <stdio.h>

void displayLightState(unsigned char roomLights) {
    printf("The light is on in rooms: ");
    for (char roomIndex = 0; roomIndex < 8; roomIndex++) {
        if ((roomLights >> roomIndex) & 1) {
            printf("%d ", roomIndex + 1); 
        }
    }
    printf("\n");
}

void toggleRoomLight(unsigned char *roomLights, unsigned char roomNumber) {
    if (roomNumber < 1 || roomNumber > 8) {
        printf("Invalid room number!\n");
        return;
    }
    unsigned char roomMask = 1 << (roomNumber - 1);
    *roomLights ^= roomMask;
    printf("Toggled light in room %d.\n", roomNumber);
}

int main(void) {
    unsigned char roomLights = 0;
    int userChoice;
    unsigned char roomNumber;

    while (1) {
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        switch (userChoice) {
            case 1:
                printf("Enter room number to toggle (1-8): ");
                scanf("%hhu", &roomNumber);
                toggleRoomLight(&roomLights, roomNumber);
                break;

            case 2:
                displayLightState(roomLights);
                break;

            case 3:
                printf("Exiting\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
