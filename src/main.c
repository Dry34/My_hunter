#include "../includes/my.h"

int main(void)
{
    sfVideoMode mode = {1920,1080,32};
    sfEvent event;
    
    sfTexture *menutexture = sfTexture_createFromFile("sprites/menu.png", NULL);
    sfSprite *sprite_menu = sfSprite_create();

    sfTexture *butonstarttexure = sfTexture_createFromFile("sprites/butonplay.png", NULL);
    sfSprite *sprite_buton_start = sfSprite_create();

    sfTexture *butonregletexure = sfTexture_createFromFile("sprites/butonregle.png", NULL);
    sfSprite *sprite_buton_regle = sfSprite_create();

    sfTexture *butonexittexure = sfTexture_createFromFile("sprites/butonexit.png", NULL);
    sfSprite *sprite_buton_exit = sfSprite_create();

    sfVector2f scale_buton_start = {0.3, 0.3};
    sfVector2f scale_buton_regle = {0.3, 0.3};
    sfVector2f scale_buton_exit = {0.3, 0.3};
    sfVector2f pos_buton_start = {740, 500};
    sfVector2f pos_buton_regle = {0, 900};
    sfVector2f pos_buton_exit = {1580, 0};

    sfRenderWindow *window = sfRenderWindow_create(mode, "test", sfDefaultStyle, NULL);
    sfIntRect rect = {0,0,110,110};
    sfClock *clock = sfClock_create();
    sfTime time;
    float seconds;

    sfRenderWindow_setFramerateLimit(window, 120);
    sfSprite_setTexture(sprite_menu, menutexture, sfFalse);
    sfSprite_setTexture(sprite_buton_start, butonstarttexure, sfFalse);
    sfSprite_setTexture(sprite_buton_regle, butonregletexure, sfFalse);
    sfSprite_setTexture(sprite_buton_exit, butonexittexure, sfFalse);
    sfSprite_setScale(sprite_buton_regle, scale_buton_regle);
    sfSprite_setPosition(sprite_buton_regle, pos_buton_regle);
    sfSprite_setScale(sprite_buton_start, scale_buton_start);
    sfSprite_setPosition(sprite_buton_start, pos_buton_start);
    sfSprite_setScale(sprite_buton_exit, scale_buton_exit);
    sfSprite_setPosition(sprite_buton_exit, pos_buton_exit);

    while(sfRenderWindow_isOpen(window)) {
        while(sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            if (event.type == sfEvtKeyPressed) {
                if (event.key.code == sfKeyEscape)
                    sfRenderWindow_close(window);
            }
        }
        rect.left += rect.width;
        if (rect.left >= rect.width*3) {
            rect.left = 0;
        }
        sfRenderWindow_clear(window, sfRed);
        sfRenderWindow_drawSprite(window, sprite_menu, NULL);
        sfRenderWindow_drawSprite(window, sprite_buton_start, NULL);
        sfRenderWindow_drawSprite(window, sprite_buton_regle, NULL);
        sfRenderWindow_drawSprite(window, sprite_buton_exit, NULL);
        sfRenderWindow_display(window);
        click_on_buton(window, event);
    }
    sfRenderWindow_destroy(window);
    sfSprite_destroy(sprite_menu);
    sfTexture_destroy(menutexture);
    sfSprite_destroy(sprite_buton_start);
    sfTexture_destroy(butonstarttexure);
    sfSprite_destroy(sprite_buton_regle);
    sfTexture_destroy(butonregletexure);
    sfSprite_destroy(sprite_buton_exit);
    sfTexture_destroy(butonexittexure);
    return 0;
}
