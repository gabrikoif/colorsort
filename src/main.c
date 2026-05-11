#include "terminal.h"
#include "platform_utils.h"
#include "game.h"

int main()
{
    int rows, cols;
    init(&rows, &cols);
    GameConfig config = {
        .num_stacks = 4,
        .stack_size = 4,
        .empty_stacks = 1
    };

    run_menu(rows, cols, &config);
    run_game(rows, cols, &config);

    endwin();
    return 0;
}