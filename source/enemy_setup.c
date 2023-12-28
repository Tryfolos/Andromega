//Struct representing horseshoe enemy.
struct enemy {


int enabled; //Is the horseshoe enemy spawned or not.
int x, y; //Position.
int behaviour; //What movement pattern and so on will the enemy have. The type of enemy.
struct hitbox hitbox;
int health; 
int age; //For how many frames has the enemy existed.
int frame; //Used for animation.
int speedchange; //Used for horseshoe enemies. Used when determining when the change in speed should happen.
int speed_x, speed_y; //How many subpixels are we going to move each frame.
int random_int_enemy;
int random_0, random_1, random_2, random_3; //Randomly generated numbers are stored in these and used for various purposes.
int timer_no_bound_x; //During this timer the enemy can't be clamped to the screen (on the x axis).
int timer_no_bound_y; //During this timer the enemy can't be clamped to the screen (on the y axis).
int timer_random_0, timer_random_1, timer_random_2; //Timer used for various purposes.
int timer_windup; //Delay before shooting or performing action.
int timer_taze; //Delay between tazer shots.
int shielded; //Is enemy shielded by shielder enemy or not. 0 or 1.
int animate; //Should we animate the enemy sprite or not? This depends on if the game is paused or not.


/* // Explanation of all different behaviours.

Behaviour 0: 
Moves straight down for the most part. 2 Health points.

Behaviour 1:
Moves straight down, stops, shoots anti-energy shots and then leaves.


*/ // Explanation of all different behaviours.

};


//Array of all enemies. except bosses.
struct enemy array_enemy[1000];

//Bitmaps.
ALLEGRO_BITMAP * bitmap_enemy_0 = al_load_bitmap("assets/enemy_0_1.png"); //
ALLEGRO_BITMAP * bitmap_enemy_1_0 = al_load_bitmap("assets/enemy_1_0.png"); //Tazer enemy.
ALLEGRO_BITMAP * bitmap_enemy_1_1 = al_load_bitmap("assets/enemy_1_1.png"); //Tazer enemy.
ALLEGRO_BITMAP * bitmap_enemy_1_2 = al_load_bitmap("assets/enemy_1_2.png"); //Tazer enemy.
ALLEGRO_BITMAP * bitmap_enemy_1_3 = al_load_bitmap("assets/enemy_1_3.png"); //Tazer enemy.

//Setting default values of enemies.
f = 0;
while (f < 1000) {

array_enemy[f].enabled = 0;
array_enemy[f].x = -1000;
array_enemy[f].y = -1000;

f += 1;
}