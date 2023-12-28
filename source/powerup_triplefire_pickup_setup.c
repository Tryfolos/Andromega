//Struct for triplefire powerup.
struct triplefire_pickup {

struct hitbox hitbox;
int enabled; //Is it enabled/does it exist.
int x, y; //Position of pickup.
int x_direction, y_direction; //Direction we are moving in.
int bounces; //How many times have powerup bounced.

};


//Array of structs.
struct triplefire_pickup * array_triplefire_pickup = malloc(sizeof(struct triplefire_pickup)*1000);


//Bitmap for triplefire pickup.
ALLEGRO_BITMAP * bitmap_triplefire_pickup = al_load_bitmap("assets/triplefire_pickup.png");


//Setting default values.
f = 0;
while (f < 1000) {

array_triplefire_pickup[f].enabled = 0;

f += 1;
}