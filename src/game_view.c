/*
** EPITECH PROJECT, 2022
** game_view
** File description:
** game_view
*/


#include "../includes/my.h"

int sprite_position(sfVector2f *oiseaupos)
{
    if (oiseaupos->x < 1950)
            oiseaupos->x +=0.5;
    else
        oiseaupos->x = -2;
    return (0);
}

void game_function(sfRenderWindow *window, sfEvent event)
{
    game_t game;
    float seconds;
    game.fondtexture = sfCF("sprites/fond.png", NULL);
    sfSprite *sprite_fond = sfSprite_create();

    sfTexture *oiseautexture = sfTexture_createFromFile("sprites/oiseau.png", NULL);
    sfSprite *sprite_oiseau = sfSprite_create();

    sfVector2f scale_fond = {1.4, 1.4};
    sfVector2f oiseaupos = {0, 450};
    sfIntRect rect = {0,0,110,110};

    sfSprite_setScale(sprite_fond, scale_fond);
    sfSprite_setTexture(sprite_oiseau, oiseautexture, sfFalse);
    sfSprite_setTextureRect(sprite_oiseau, rect);

    sfSprite_setTexture(sprite_fond, game.fondtexture, sfFalse);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
        game.time = sfClock_getElapsedTime(game.clock);
        seconds = game.time.microseconds / 1000000.0;
        if (seconds > 0.1) {
            rect.left += 110;
            if (rect.left >= 330)
                rect.left = 0;
            sfSprite_setTextureRect(sprite_oiseau, rect);
            sfClock_restart(game.clock);
        }
        // rect.left += rect.width;
        // if (rect.left >= rect.width*3) {
        //     rect.left = 0;
        // }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite_fond, NULL);
        sfSprite_setTextureRect(sprite_oiseau, rect);
        sprite_position(&oiseaupos);
        sfSprite_setPosition(sprite_oiseau, oiseaupos);
        sfRenderWindow_drawSprite(window, sprite_oiseau,NULL);
        sfRenderWindow_display(window);

    }
    sfSprite_destroy(sprite_oiseau);
    sfTexture_destroy(oiseautexture);
    sfSprite_destroy(sprite_fond);
    sfTexture_destroy(game.fondtexture);
}