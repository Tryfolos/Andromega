//Struct for invader enemy.
struct invader {

int enabled; //Is spawned or despawned state. Is enemy enabled or not.
int health; //How much health does the enemy have.
int x, y; //Position of enemy.
int timer_intro; //During this timer the normal logic of the enemy does not fully apply. The enemy is flying into the screen from the top.
struct hitbox hitbox; //Hitbox of enemy.
//int direction; //What direction on the x axis are we currently moving in. This is randomly chosen when the enemy spawns.
//int speed; //How many sub pixels does the invader move per frame.
int timer_cooldown; //If enemy has shot a bullet. It must cool down before it can shoot another.
int timer_peace; //This timer randomly turns on. Once it's running no bullets can be fired. 
//int risk_of_slowness; //Random chance every frame of activating slowness on invader enemy. This just means enemy moves slower.
//int timer_slowness; //During this timer the enemy moves slower.
int shielded; //Is the enemy shielded from shielder enemy or not.
short timer_leave;//When this timer runs out the enemy will fly off the screen.

};


//List of invader structs.
struct invader array_invader[5]; //Array of enemy invaders.


//Invader bitmap. Sprite.
ALLEGRO_BITMAP * bitmap_invader = al_load_bitmap("assets/invader.png");


//Setting up default values of invader structs in array.
f = 0;
while (f < 5) {

array_invader[f].enabled = 0;
array_invader[f].shielded = 0;
array_invader[f].hitbox.x1 = 1000*1000;
array_invader[f].hitbox.y1 = 1000*1000;
array_invader[f].hitbox.x2 = 1000*1002;
array_invader[f].hitbox.y2 = 1000*1002;

f += 1;
}