/*
** EPITECH PROJECT, 2023
** CSFML
** File description:
** workshop.c
*/

#include <SFML/Graphics.h>
#include "workshop.h"

int main(void)
{
    sfVideoMode mode = {1080, 720, 32};
    sfRenderWindow *window;
    sfEvent event;

    window = sfRenderWindow_create(mode, "window", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window) && sfRenderWindow_hasFocus(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
                if (event.type == sfEvtClosed)
                        sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        //sfRenderWindow_drawSprite(window, sprite, NULL);
        //sfRenderWindow_drawShape(window, shape, NULL); 
        //sfRenderWindow_drawText(window, text, NULL);
        sfRenderWindow_display(window);
        //cloc.time1 = sfClock_getElapsedTime(cloc, cloc1);
        //cloc.seconds1 = sfclock(cloc.time1.microseonds / 1000000.0);
        }
sfRenderWindow_destroy(window);
}