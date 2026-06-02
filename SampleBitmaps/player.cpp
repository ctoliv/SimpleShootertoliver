#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_image.h>
#include "player.h"

player::~player()
{
	for (int i = 0; i < 2; i++)
	{
		al_destroy_bitmap(image[i]);
	}
}
player::player(int HEIGHT)
{
	for (int i = 0; i < 2; i++)
	{

		image[i] = al_create_bitmap(64, 64);
		if (!image[i]) {
			exit(1);
		}

		al_set_target_bitmap(image[i]);
		al_clear_to_color(al_map_rgb(0, 0, 0));

		al_draw_filled_rectangle(0, 25, 64, 39, al_map_rgb(75, 75, 75));
		al_draw_filled_rectangle(25, 0, 39, 64, al_map_rgb(50, 50, 50));
		al_draw_circle(32, 32, 8, al_map_rgb(0, 0, 0), 5);

		al_draw_line(0, 32, 64, 32, al_map_rgb(255, 100, 255), 2);
		al_draw_line(32, 0, 32, 64, al_map_rgb(255, 100, 255), 2);
		al_draw_circle(32, 32, 16, al_map_rgb(200, 200, 200), 5);

	}

		// Right-facing cannon
		al_set_target_bitmap(image[0]);
		al_draw_filled_rectangle(54, 26, 64, 38, al_map_rgb(255, 0, 0));

		// Up-facing cannon
		al_set_target_bitmap(image[1]);
		al_draw_filled_rectangle(26, 0, 38, 10, al_map_rgb(255, 0, 0));

	

	x = 20;
	y = HEIGHT / 2;

	speed = 7;
	boundx = al_get_bitmap_width(image[0]);
	boundy = al_get_bitmap_height(image[0]);
	direction = 1;

}
void player::DrawPlayer()
{
	if (direction == 0)
	{
		// Up
		al_draw_bitmap(image[1], x, y, 0);
	}
	else if (direction == 1)
	{
		// Right
		al_draw_bitmap(image[0], x, y, 0);
	}
	else if (direction == 2)
	{
		// Down
		al_draw_bitmap(image[1], x, y, ALLEGRO_FLIP_VERTICAL);
	}
	else if (direction == 3)
	{
		// Left
		al_draw_bitmap(image[0], x, y, ALLEGRO_FLIP_HORIZONTAL);
	}
}
void player::MoveUp()
{
	direction = 0;
	y -= speed;
	if(y < 0)
		y = 0;
}
void player::MoveDown(int HEIGHT)
{
	direction = 2;
	y += speed;
	if(y > HEIGHT-boundy)
		y = HEIGHT-boundy;
}
void player::MoveLeft()
{
	direction = 3;
	x -= speed;
	if(x < 0)
		x = 0;
}
void player::MoveRight(int WIDTH)
{
	direction = 1;
	x += speed;
	if(x > WIDTH-boundx)
		x = WIDTH-boundx;
}