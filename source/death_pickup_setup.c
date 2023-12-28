//Struct representing death pickup object.
struct death_pickup {

int enabled; //Is it enabled, does it even exist?
int x, y; //X and y position of the pickup on screen.
int x_direction, y_direction; //The direction the object is flying. Left or right and up or down.
struct hitbox hitbox; //The hitbox that will be interacting with the player when picked up.
int bounces; //How many times has the pickup hit the corner of the screen and bounced?

};



//Array of death pickups.
struct death_pickup * array_death_pickup = malloc(sizeof(struct death_pickup)*100);


//Bitmap/sprite that represents the pickup during gameplay.
ALLEGRO_BITMAP * bitmap_death_pickup = al_load_bitmap("assets/death_pickup.png");


//Setting default values of pickups.
f = 0;
while (f < 100) {

array_death_pickup[f].enabled = 0;

f += 1;
}