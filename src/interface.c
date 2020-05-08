#include <stdio.h>
#include "../headers/interface.h"



/**
 * @brief prints the hand
 * @details displays the given card list as a hand, in the format of a list with : card index in hand list, name of the card and energy cost.
 */
void print_hand(struct card* hand) {
    /* /!\ Card list type not defined yet. Come back later */    
}


/**
 * @brief prints new turn information 
 * @details prints turn number and each player's Sustainable Development (SD) points, states if new staff space is available and if FISA appear/disappear this turn
 * 
 */
void print_new_turn(struct board board) {
    system("clear");
    printf("------------ Starting turn %i ------------\n\n", board.n_turn);
    sleep(0.3);

    printf("Player %s : %i SD        vs        Player %s : %i SD\n\n", board.player1.player_name, board.player1.SD, board.player2.player_name, board.player2.SD);
    sleep(0.3);

    if (new_staff_available(board))
        printf("New staff emplacement available!\n");    
    
    if (is_turn_even(board)) 
        printf("/!\\ Turn is even : FISA now vanish from the board...\n");
    else 
        printf("/!\\ Turn is odd : FISA now appear on the board...\n");
    sleep(5);
}


/**
 * @brief prints new phase information
 * @details states which player's turn it is, prints the board (student cards, staff cards, and SD points of each player) as well as the current player's hand
 * 
 */
void print_new_phase(struct board board, struct ensiie current_player) {
    system("clear");
    printf("------------ Starting new phase ------------\n\n");
    sleep(0.3);

    printf("Player %s, it's your go!\n", current_player.player_name);
    sleep(0.3);

    print_board(board);
    printf("\n\n\n");

    print_hand(current_player.hand);
}


/**
 * @brief prints the current board
 * @details prints each player's SD points, student card number (FISE and FISA), staff card (by order played) and hand size
 */
void print_board(struct board board) {
    printf("Player %s\n", board.player1.player_name);
    printf("SD : %i\n", board.player1.SD);
    printf("Card in hand : %i\n", len_stack(board.player1.hand));
    
    printf("\n");

    printf("FISE : %i\n", board.player1.current_students.FISE_count);
    printf("FISA : %i\n", board.player1.current_students.FISA_count);

    /* A finir */
}


/* Manque certaines fonctions */
/* TODO :
    choice_FISE_FISA
    choice_card
    print_end_game
*/


/**
 * @brief prints Durableverse logo and group name
 */
void print_logo() {
    printf(BOLDGREEN "%s", logo2);
    printf(BOLDYELLOW "%s\n\n" RESET, peaky);
}

/**
 * @brief clears console
 */
void clear_screen() {
    system("@cls||clear");
}

/**
 * @brief prints Durableverse logo and asks user for each player's name
 * @param name1 name of the first player
 * @param name2 name of the second player
 * @post name1 and name2 are updated with the names entered by each player
 */
void welcome_screen(char* name1, char* name2) {
    clear_screen();
    print_logo();
    printf("First player name: ");
    scanf("%s", name1);

    clear_screen();
    print_logo();
    printf("First player name: %s", name1);
    printf("                2nde player name: ");
    scanf("%s", name2);
}
