from random import randint

player_win = 0
computer_win = 0


print("Lets play a game.")
print("Type:")
print("    r for rock")
print("    p for paper")
print("    s for scissor")
print("    q for quit")

while True:
    player_choice = input(": ").strip().lower()
    options = ["r", "p", "s"]
    computer_choice = options[randint(0, 2)]  # Corrected this line
    if player_choice == "q":
            break
    if player_choice.isalpha and len(player_choice) == 1 and player_choice in options:
        if player_choice == computer_choice:
            print("TIE !")
        elif (player_choice == "r" and computer_choice == "s") or \
            (player_choice == "p" and computer_choice == "r") or \
            (player_choice == "s" and computer_choice == "p"):
            print("You Win !")
            player_win += 1
        else:
            print("You lose!")
            computer_win += 1
    else:
        print("Invalid input. Please enter a single letter.")

def winner(player_win, computer_win):
    if player_win > computer_win:
        print(f"\nYou won! ({player_win} - {computer_win})")
    elif player_win < computer_win:
        print(f"\nYou lose! ({player_win} - {computer_win})")
    else:
        print(f"\nIts a tie! ({player_win} - {computer_win})")


winner(player_win, computer_win)
print("Goodbye")
a = input("")




