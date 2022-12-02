/*
** EPITECH PROJECT, 2022
** My.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/System/Clock.h>
    #include <SFML/System/Time.h>
    #include "struct.h"
    #include <stdio.h>

    #define sfCF sfTexture_createFromFile
    #define sfWc sfRenderWindow_create

    void game_function(sfRenderWindow *window, sfEvent event);
    void click_on_buton(sfRenderWindow *window, sfEvent event);
    void rules_functions(sfRenderWindow *window, sfEvent event);
    int sprite_position(sfVector2f *oiseaupos);


#endif /* !MY_H_ */
