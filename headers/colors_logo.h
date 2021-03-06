#ifndef _COLORS_H
#define _COLORS_H

#define RESET       "\033[0m"
#define BLACK       "\033[30m"          /* Black */
#define RED         "\033[31m"          /* Red */
#define GREEN       "\033[32m"          /* Green */
#define YELLOW      "\033[33m"          /* Yellow */
#define BLUE        "\033[34m"          /* Blue */
#define MAGENTA     "\033[35m"          /* Magenta */
#define CYAN        "\033[36m"          /* Cyan */
#define WHITE       "\033[37m"          /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

#define INVERTED    "\e[7m"             /* Inverted colors */
#define BLINK       "\033[5m"           /* Blinking text */


#define LOGO1 "\
________                     ___.   .__                                 \n\
\\______ \\  __ ______________ \\_ |__ |  |   _______  __ ___________  ______ ____ \n\
 |    |  \\|  |  \\_  __ \\__  \\ | __ \\|  | _/ __ \\  \\/ // __ \\_  __ \\/  ___// __ \\\n\
 |    `   \\  |  /|  | \\// __ \\| \\_\\ \\  |_\\  ___/\\   /\\  ___/|  | \\/\\___ \\\\  ___/\n\
/_______  /____/ |__|  (____  /___  /____/\\___  >\\_/  \\___  >__|  /____  >\\___  >\n\
        \\/                  \\/    \\/          \\/          \\/           \\/     \\/\n"


#define LOGO2 "\
    ____                   __    __                            \n\
   / __ \\__  ___________ _/ /_  / /__ _   _____  _____________ \n\
  / / / / / / / ___/ __ `/ __ \\/ / _ \\ | / / _ \\/ ___/ ___/ _ \\\n\
 / /_/ / /_/ / /  / /_/ / /_/ / /  __/ |/ /  __/ /  (__  )  __/\n\
/_____/\\__,_/_/   \\__,_/_.___/_/\\___/|___/\\___/_/  /____/\\___/ \n"


#define PEAKY_BLINDERS \
"                                             ~ Peaky Blinders ~  \n"

#define LOGO                    LOGO1
#define LOGO_COLOR              BOLDGREEN
#define GROUPNAME_COLOR         BOLDYELLOW

#define PLAYER1_COLOR           BOLDBLUE
#define PLAYER2_COLOR           BOLDYELLOW

#define PRINT_CARD_COLOR        BOLDGREEN

#define CARD_FRAME_COLOR        BOLDYELLOW
#define CARD_NAME_COLOR         BOLDCYAN INVERTED
#define CARD_FX_COLOR           RESET

#endif