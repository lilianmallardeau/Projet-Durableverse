#ifndef _BOARD_H
#define _BOARD_H

#include "card.h"

#define MAX_CARD_NUMBER 50

/* -------------------------------------------------------- */
/* -------------------- Defining types -------------------- */
/* -------------------------------------------------------- */

/* General type for the staff cards currently on the board, and the maximum number of staff
 * cards allowed on the board
 */
struct board_staff {
    struct card* cards;
    int max;
};

/* General type for the students cards currently on the board (FISE and FISA),
 * the counter and the durability and development points for each type of student card
 */
struct board_students {
    int FISE_count;
    int FISA_count;
    int FISE_durability;
    int FISA_durability;
    int FISE_development;
    int FISA_development;
};

/* General type for one player (one ENSIIE), with its Sustainable Development points (int SD),
 * its deck, hand, and discard (which are lists/array of struct card), and the current staff cards
 * and student cards currently on the board
 */
struct ensiie {
    int SD;
    struct card* deck;
    struct card hand[MAX_CARD_NUMBER];
    struct card* discard;
    struct board_staff current_staff;
    struct board_students current_students;
};

/* General type for the game board, including the two players and the turn counter
 */
struct board {
    struct ensiie player1;
    struct ensiie player2;
    int n_turn;
};


/* ------------------------------------------------------------ */
/* -------------------- Defining functions -------------------- */
/* ------------------------------------------------------------ */

/* 
 * @brief creates new board and allocates memory
 * @return initialized board instance 
 */
struct board new_board();

/* 
 * @brief frees memory taken by given board, including memory taken for both ensiie struct
 * 
 */
void free_board(struct board*);


/* 
 * @brief updates board state at the beginning of a new turn
 * @detail increments turn counter, handles FISA student cards turn based behaviour, updates number of space available for staff cards
 */
void begin_turn(struct board*);

/*
 *@brief allows the ensiie to play his phase
 *@detail calculate the EP of the ensiie, what FISA OR FISE card the ensiie wants to play, what action and staff card the ensiie wants to play, apply the effect of these cards on the other ensiie 
 */
void play_phase(ensiie* , int);

/* 
 * @brief computes number of cards drawn by player
 * @return number of cards to be drawn
 */
int nb_card_drawn(struct ensiie);

/* 
 * @brief draws a card for the given player
 * 
 */
void draw(struct ensiie*);

/* 
 * @brief computes number of student cards received by the player
 * @return number of student cards to be received
 */
int nb_student_card_received(struct ensiie);

/* 
 * @brief adds given amount of FISE student cards to the player
 * 
 */
void add_student_FISE(int, struct ensiie*);

/* 
 * @brief adds given amount of FISA student cards to the player
 * 
 */
void add_student_FISA(int, struct ensiie*);

/* 
 * @brief computes Energy Points (EP) available at the beginning of the player's phase
 * @return number of EP available
 */
int available_EP(struct ensiie);

/* 
 * @brief allows player to play one card from its hand
 * 
 */
void play_card(struct ensiie*);

/* 
 * @brief ends current turn, computes and updates Sustainable Development (SD) points for each player
 * 
 */
void end_turn(struct board*);

/*
 * @brief checks if game is over, i.e. if winning condition of having 20+ Sustainable Development (SD) points is achieved
 * @return 1 if game is over, 0 else
 */
int is_over(struct board);

/*
 * @brief give the ensiie's deck
 * @return a pointeur towards the ensiie deck
 */

struct card* get_ensiie_deck(struct ensiie);

/*
 * @brief give the ensiie's deck
 * @return a table which contain all the card in the ensiie's hand
 */

struct card get_ensiie_hand(struct ensiie);

/*
 * @brief give the ensiie's deck
 * @return a pointeur towards the ensiie's discard
 */

struct card* get_ensiie_discard(struct ensiie);

/*
 * @brief tell if the tour is peer or not 
 * @return 1 if the tour is peer, else 0
 */

int is_peer(struct board);
#endif