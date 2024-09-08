#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char get_computer_choice() {
    srand(time(NULL));
    char options[] = {'r', 'p', 's'};

    return options[rand() % 3];
}

void determine_winner(int player_wins, int computer_wins) {
    if (player_wins > computer_wins) {
        printf("\nYou win: (%d - %d)", player_wins, computer_wins);
    } else if (player_wins < computer_wins) {
        printf("\nYou lose! (%d - %d)", player_wins, computer_wins);
    } else {
        printf("\nIt's a tie! (%d - %d)", player_wins, computer_wins);
    }
}

int main() {
    int player_wins = 0, computer_wins = 0;
    char player_choice, computer_choice;

    srand(time(NULL));

    printf("Let's play a game.\n");
    printf("Type:\n");
    printf("    r for rock\n");
    printf("    p for paper\n");
    printf("    s for scissors\n");
    printf("    q to quit\n");

    while (1) {
        printf("\nYour choice: ");
        scanf(" %c", &player_choice);

        if (player_choice == 'q'){
            break;
        }

        computer_choice = get_computer_choice();
        printf("\nThe computer choice was: %c ", computer_choice);

        if (player_choice == 'p' || player_choice == 'r' || player_choice == 's') {
            if (player_choice == computer_choice) {
                printf("\nTie!\n");
            } else if ((player_choice == 'r' && computer_choice == 's') || 
                (player_choice == 'p' && computer_choice == 'r') ||
                (player_choice == 's' && computer_choice == 'p'))  {
                printf("\nYou win!\n");
                player_wins++;
            } else {
                printf("\nYou lose!\n");
                computer_wins++;
            }
        } else {
            printf("Wrong input!");
        }

    }
    determine_winner(player_wins, computer_wins);
    printf("\nGoodbye\n");
    return 0;
}
