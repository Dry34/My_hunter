/*
** EPITECH PROJECT, 2022
** click_on_menu
** File description:
** all_click_on_your_menu
*/

#include "../includes/my.h"

void click_on_buton(sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    //printf("x = %d, y = %d\n", mouse.x, mouse.y);
    if (mouse.x >= 747 && mouse.x <= 1005) {
        if (mouse.y >= 501 && mouse.y <= 606) {
            if (event.type == sfEvtMouseButtonPressed) {
                //sfRenderWindow_close(window);
                game_function(window, event);
                //printf("click on start\n");
            }
        }
    }
    if (mouse.x >= 4 && mouse.x <= 267) {
        if (mouse.y >= 903 && mouse.y <= 1013) {
            if (event.type == sfEvtMouseButtonPressed) {
                rules_functions(window, event);
                printf("ici\n");
            }
        }
    }
}
