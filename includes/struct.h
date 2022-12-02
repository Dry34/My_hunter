/*
** EPITECH PROJECT, 2022
** STRUCT_H
** File description:
** Structure
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct game_s {
        sfRenderWindow *window;
        sfEvent event;
        sfTexture *fondtexture;
        sfSprite *sprite_fond;
        sfTexture *rulestexture;
        sfSprite *sprite_rules;
        sfTexture *oiseautexture;
        sfSprite *sprite_oiseau;
        sfVector2f scale_fond;
        sfVector2f oiseaupos;
        sfIntRect rect;
        sfClock *clock;
        sfTime time;
    } game_t;

#endif
