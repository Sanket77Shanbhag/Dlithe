#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 5
#define MAX_BOOKINGS 10

typedef struct {
    char title[50];
    float price;
    int seatsAvailable;
} Movie;

typedef struct {
    char name[50];
    char movieTitle[50];
    int seatNumber;
} Booking;

Movie movies[MAX_MOVIES] = {
    {"Avengers", 15.0, 100},
    {"The Lion King", 12.0, 80},
    {"Toy Story", 10.0, 120},
    {"The Matrix", 18.0, 90},
    {"Inception", 20.0, 70}
};

Booking bookings[MAX_BOOKINGS];
int numBookings = 0;

void displayMovies() {
    printf("Available Movies:\n");
    for (int i = 0; i < MAX_MOVIES; i++) {
        printf("%d. %s - $%.2f - %d seats available\n", i+1, movies[i].title, movies[i].price, movies[i].seatsAvailable);
    }
}

void bookMovie() {
    int movieChoice;
    printf("Enter the number of the movie you want to book: ");
    scanf("%d", &movieChoice);
    movieChoice--;

    if (movies[movieChoice].seatsAvailable > 0) {
        char name[50];
        printf("Enter your name: ");
        scanf("%s", name);

        Booking booking;
        strcpy(booking.name, name);
        strcpy(booking.movieTitle, movies[movieChoice].title);
        booking.seatNumber = movies[movieChoice].seatsAvailable;

        bookings[numBookings] = booking;
        numBookings++;

        movies[movieChoice].seatsAvailable--;

        printf("Booking successful! Your seat number is %d.\n", booking.seatNumber);
    } else {
        printf("Sorry, this movie is sold out.\n");
    }
}

void displayBookings() {
    printf("Bookings:\n");
    for (int i = 0; i < numBookings; i++) {
        printf("%d. %s - %s - Seat %d\n", i+1, bookings[i].name, bookings[i].movieTitle, bookings[i].seatNumber);
    }
}

int main() {
    int choice;
    while (1) {
        printf("Movie Booking System\n");
        printf("1. Display available movies\n");
        printf("2. Book a movie\n");
        printf("3. Display bookings\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayMovies();
                break;
            case 2:
                bookMovie();
                break;
            case 3:
                displayBookings();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}