/*
** EPITECH PROJECT, 2022
** File_for_rules
** File description:
** Rules_on_this_file_for_the_game
*/

#include "../includes/my.h"

void rules_functions(sfRenderWindow *window, sfEvent event)
{
     game_t game;
    game.rulestexture = sfCF("sprites/regles.png", NULL);
    sfSprite *sprite_rules = sfSprite_create();
    sfVector2f scale_rules = {0.5,0.5};
    sfSprite_setTexture(sprite_rules, game.rulestexture, sfFalse);
    sfSprite_setScale(sprite_rules, scale_rules);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite_rules, NULL);
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(sprite_rules);
    sfTexture_destroy(game.rulestexture);
}