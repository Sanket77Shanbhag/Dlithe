#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    int quantity;
    float price;
    char description[100];
} Item;

typedef struct {
    Item* items;
    int numItems;
    int capacity;
} Warehouse;

void initWarehouse(Warehouse* warehouse, int capacity) {
    warehouse->items = (Item*)malloc(capacity * sizeof(Item));
    warehouse->numItems = 0;
    warehouse->capacity = capacity;
}

void addItem(Warehouse* warehouse, int id, char* name, int quantity, float price, char* description) {
    if (warehouse->numItems < warehouse->capacity) {
        Item item;
        item.id = id;
        strcpy(item.name, name);
        item.quantity = quantity;
        item.price = price;
        strcpy(item.description, description);
        warehouse->items[warehouse->numItems] = item;
        warehouse->numItems++;
        printf("Item added successfully.\n");
    } else {
        printf("Warehouse is full. Cannot add new item.\n");
    }
}

// Function to display all items in the warehouse
void displayItems(Warehouse* warehouse) {
    printf("Items in the warehouse:\n");
    for (int i = 0; i < warehouse->numItems; i++) {
        printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f, Description: %s\n",
               warehouse->items[i].id, warehouse->items[i].name, warehouse->items[i].quantity, warehouse->items[i].price, warehouse->items[i].description);
    }
}

// Function to update the quantity of an item
void updateQuantity(Warehouse* warehouse, int id, int newQuantity) {
    for (int i = 0; i < warehouse->numItems; i++) {
        if (warehouse->items[i].id == id) {
            warehouse->items[i].quantity = newQuantity;
            printf("Quantity updated successfully.\n");
            return;
        }
    }
    printf("Item not found.\n");
}

// Function to sell an item
void sellItem(Warehouse* warehouse, int id, int quantity) {
    for (int i = 0; i < warehouse->numItems; i++) {
        if (warehouse->items[i].id == id) {
            if (warehouse->items[i].quantity >= quantity) {
                warehouse->items[i].quantity -= quantity;
                printf("Sold %d units of item %d successfully.\n", quantity, id);
            } else {
                printf("Not enough quantity in stock.\n");
            }
            return;
        }
    }
    printf("Item not found.\n");
}

int main() {
    Warehouse warehouse;
    initWarehouse(&warehouse, 10);

    int choice;
    while (1) {
        printf("Warehouse Management System\n");
        printf("1. Add item\n");
        printf("2. Display items\n");
        printf("3. Update quantity\n");
        printf("4. Sell item\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id;
                char name[50];
                int quantity;
                float price;
                char description[100];
                printf("Enter item details:\n");
                printf("ID: ");
                scanf("%d", &id);
                printf("Name: ");
                scanf("%s", name);
                printf("Quantity: ");
                scanf("%d", &quantity);
                printf("Price: ");
                scanf("%f", &price);
                printf("Description: ");
                scanf("%s", description);
                addItem(&warehouse, id, name, quantity, price, description);
                break;
            }
            case 2:
                displayItems(&warehouse);
                break;
            case 3: {
                int id;
                int newQuantity;
                printf("Enter item ID and new quantity: ");
                scanf("%d %d", &id, &newQuantity);
                updateQuantity(&warehouse, id, newQuantity);
                break;
            }
            case 4: {
                int id;
                int quantity;
                printf("Enter item ID and quantity to sell: ");
                scanf("%d %d", &id, &quantity);
                sellItem(&warehouse, id, quantity);
                break;
            }
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}