//Struct representing players bullets.
struct player_bullet {

int x, y; //X and y position of bullet. Also used for hitbox. 
struct hitbox hitbox; 
int enabled; //Does it exist or not.
int x_speed; //How does the bullet move on the x axis.

};


//Array of player bullets.
struct player_bullet array_player_bullet[1000]; 

//Loading image of player bullet.
ALLEGRO_BITMAP * bitmap_player_bullet = al_load_bitmap("assets/player_bullet2.png");
ALLEGRO_BITMAP * bitmap_player_bullet_slanted = al_load_bitmap("assets/player_bullet_slanted.png");



//Setting default values of player bullets.
f = 0;
while (f < 1000) {

array_player_bullet[f].enabled = 0;
array_player_bullet[f].hitbox.x1 = -100000;
array_player_bullet[f].hitbox.y1 = -100000;
array_player_bullet[f].hitbox.x2 = -90000;
array_player_bullet[f].hitbox.y2 = -90000;

f += 1;
}