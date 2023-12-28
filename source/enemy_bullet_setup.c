//Struct for enemy bullets.

struct enemy_bullet {

int x, y; 
int x_speed;
int y_speed;
int enabled; //Is the bullet logic running or not. Does the bullet exist.
int bullet_type; //What damage and color/sprite is the bullet.
struct hitbox hitbox;
int age; //How many frames has the bullet been around for.


/* //Explanation of bullet_type variable.

Red Horseshoe - Bullet type 0 - red "round" bullet.


*/ //Bullet types.

};


//Array for enemy bullets.
struct enemy_bullet * array_enemy_bullet = (struct enemy_bullet*) malloc(sizeof(struct enemy_bullet)*1000);
//printf("%ld\n", sizeof(struct enemy_bullet));


//Setting enabled value to 0 on all bullets. For some reason 0 is not the default.
f = 0;
while (f < 1000) {
array_enemy_bullet[f].enabled = 0;
f += 1;
}

//Loading bitmaps.
ALLEGRO_BITMAP * bitmap_enemy_bullet_red = al_load_bitmap("assets/enemy_bullet_red.png");
ALLEGRO_BITMAP * bitmap_enemy_bullet_tazer = al_load_bitmap("assets/energy_surge.png");
