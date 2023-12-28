//Struct for shielder enemy. 
struct enemy_shielder {

int x, y; //Location on (or off) screen.
int health;
int enabled;
int timer_change_xdir, timer_change_ydir; //When this timer runs out we change direction.
int xdir, ydir; //What direction are we currently moving in.
int timer_disappear; //When timer runs out, the shielder enemy will stop bouncing and leave the screen instead.
struct hitbox hitbox;
struct hitbox area; //This is the area where enemies gets shields.


};


//List of enemy_shielder enemies.
struct enemy_shielder array_enemy_shielder[100];


//Loading enemy bitmap.
ALLEGRO_BITMAP * bitmap_enemy_shielder = al_load_bitmap("assets/enemy_shielder.png");


//Setting default values for them all.
f = 0;
while (f < 100) {

array_enemy_shielder[f].enabled = 0;
array_enemy_shielder[f].x = -1000;
array_enemy_shielder[f].y = -1000;
array_enemy_shielder[f].xdir = randint(0, 1); //Picking random x direction.
array_enemy_shielder[f].ydir = 1; //Moving down to start with.
array_enemy_shielder[f].timer_change_xdir = randint(40, 80);
array_enemy_shielder[f].timer_change_ydir = 80;
array_enemy_shielder[f].timer_disappear = randint(60*10, 60*30);
array_enemy_shielder[f].health = 6;



f += 1;
}