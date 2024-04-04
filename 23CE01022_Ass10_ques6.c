#include <stdio.h>
#include <string.h>

#define MAX_PACKETS 5
#define MAX_STRING_LENGTH 100


enum PacketType {
    CONTROL,
    DATA
};


union Packet {
    struct {
        int opcode;
        int status_code;
    } control_message;
    char data_payload[MAX_STRING_LENGTH];
};


struct DataPacket {
    enum PacketType type;
    union Packet packet;
};


void assignControlPacket(struct DataPacket *packet, int opcode, int status_code) {
    packet->type = CONTROL;
    packet->packet.control_message.opcode = opcode;
    packet->packet.control_message.status_code = status_code;
}


void assignDataPacket(struct DataPacket *packet, const char *data) {
    packet->type = DATA;
    strncpy(packet->packet.data_payload, data, MAX_STRING_LENGTH);
}

void printPacket(const struct DataPacket *packet) {
    if (packet->type == CONTROL) {
        printf("Control Message: \n");
        printf("Opcode: %d\n", packet->packet.control_message.opcode);
        printf("Status Code: %d\n", packet->packet.control_message.status_code);
    } else if (packet->type == DATA) {
        printf("Data Payload: %s\n", packet->packet.data_payload);
    }
    printf("\n");
}

int main() {
    
    struct DataPacket packets[MAX_PACKETS];

    
    assignControlPacket(&packets[0], 1, 200);
    assignDataPacket(&packets[1], "Hello, world!");
    assignControlPacket(&packets[2], 2, 404);
    assignDataPacket(&packets[3], "This is a data packet.");
    assignControlPacket(&packets[4], 3, 500);

    
    for (int i = 0; i < MAX_PACKETS; i++) {
        printf("Packet %d:\n", i + 1);
        printPacket(&packets[i]);
    }

    return 0;
}