//Struct that represents the twinkling stars.
typedef struct twinkling_star {

int timer_twinkle; //Timer that is always counting and decides what frame of animation should be shown. 
int x, y; //Position of star.


} twinkling_star;



//List of twinkling stars.
twinkling_star * array_twinkling_star = malloc(sizeof(twinkling_star)*40); 


//Setting random positions of twinkling stars. 
//Setting random timers on each star so they twinkle randomly with different time intervals.
f = 0;
while (f < 40) {

array_twinkling_star[f].x = randint(0, 475);
array_twinkling_star[f].y = randint(0, 265);
array_twinkling_star[f].timer_twinkle = randint(15, 180);

f += 1;
}

//Twinkling star image.
ALLEGRO_BITMAP * bitmap_twinkling_star = al_load_bitmap("assets/twinkling_star.png");




