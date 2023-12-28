//Struct representing.
struct small_enemy {

unsigned char enabled;
int x, y; //Position of sprite and hitbox.
unsigned char pattern; //Will it fly straight down or sway from left to right?
struct hitbox hitbox; //Hitbox used for getting shot by player and such.
short x_speed; //X movement speed that will be applied to x variable if movement pattern is 1.
short x_direction; //What direction are we moving in? This determines if we should increment the x_speed variable positively or negatively.
int timer_speed_change; //Every time this timer runs out the x_speed variable will start to change.
unsigned char shielded; //Is the enemy shielded or not?

};


//Array of small enemy structs.
struct small_enemy * array_small_enemy = malloc(sizeof(struct small_enemy) * 100);


//Loading bitmap.
ALLEGRO_BITMAP * bitmap_enemy_small = al_load_bitmap("assets/enemy_small.png");

//Setting default values.
f = 0;
while (f < 100) {
array_small_enemy[f].enabled = 0;
array_small_enemy[f].x = -1000;
array_small_enemy[f].y = -1000;
f += 1;
}




