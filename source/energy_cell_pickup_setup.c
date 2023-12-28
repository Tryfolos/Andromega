//



//Loading bitmap.
ALLEGRO_BITMAP * bitmap_energy_cell_pickup = al_load_bitmap("assets/energy_cell_pickup.png");




//Struct for energy cell pickups.
struct energy_cell_pickup {

int enabled;
int x, y;
int x_direction, y_direction; //What direction is the bullet flying.
struct hitbox hitbox;
int bounces; //How many times has the powerup bounced against a side of the screen.

};


//Array of energy cells.
struct energy_cell_pickup * array_energy_cell_pickup = malloc(sizeof(struct energy_cell_pickup)*1024);


//Setting default values of energy cells.
f = 0;
while (f < 1024) {
array_energy_cell_pickup[f].enabled = 0;
array_energy_cell_pickup[f].bounces = 0;
f += 1;
}