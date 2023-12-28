//Struct representing a hailstorm plasma ball. 
struct plasma_hail{

int enabled; //Does the ball exist?
int x, y; //Position.
int y_start, y_target; //The first variable represents the starting coordinate of the ball, the second one represents the target coordinate it is trying to reach.
int x_start; //The starting coordinate of the ball on the x axis.
struct hitbox hitbox;

};




//Struct representing the trail particles behind the plasma balls. 
struct plasma_trail {

int enabled;
int x, y; //The position of the particle.
int size; //This is the size of the particle to draw.
int timer_disable; //Once this timer runs out the struct will be disabled.

};



//Bitmap representing the ball.
ALLEGRO_BITMAP * bitmap_plasma_ball = al_load_bitmap("assets/plasma_ball.png");



//Array of plasma_hail structs.
struct plasma_hail * array_plasma_hail = malloc(sizeof(struct plasma_hail)*100);


//Array of plasma trail.
struct plasma_trail * array_plasma_trail = malloc(sizeof(struct plasma_trail)*500);


//Setting default values for plasma hail.
f = 0;
while (f < 100) {

array_plasma_hail[f].enabled = 0;

f += 1;
}


//Setting default values for plasma trail. The particle that comes after the hail itself.
f = 0;
while (f < 500) {

array_plasma_trail[f].enabled = 0;

f += 1;
}