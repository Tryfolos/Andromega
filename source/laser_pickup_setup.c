//Struct representing laser pickup.
struct laser_pickup {

struct hitbox hitbox; //Hitbox.
int x, y; //Position.
int enabled; //Is it despawned or does it exist?
int x_direction, y_direction; //What direction are we moving at the moment.
int bounces; //How many bounces against the corner have occured.

};


//Creating array of laser pickup structs.
struct laser_pickup * array_laser_pickup = malloc(sizeof(struct laser_pickup)*1000);



//bitmap for laser.
ALLEGRO_BITMAP * bitmap_laser_pickup = al_load_bitmap("assets/laser_pickup.png");


//Setting default values.
f = 0;
while (f < 1000) {

array_laser_pickup[f].enabled = 0;

f += 1;
}