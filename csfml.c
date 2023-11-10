/*
** EPITECH PROJECT, 2023
** CSFML
** File description:
** cdfml.c
*/

#include <SFML/Graphics.h>

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {10, 10, 32}; //taille de la fenetre et le bit par pixel
    sfEvent event;

    window = sfRenderWindow_create(video_mode, "csfml", NULL, NULL);
}
