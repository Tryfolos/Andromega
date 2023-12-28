#include "include_headers.c"

f = 0;
while (f < 5) {

if (game_paused == 0) {

if (array_invader[f].enabled == 1) {



//Counting down intro timer and moving into view.
if (array_invader[f].timer_intro > 0) {
array_invader[f].timer_intro -= 1;
array_invader[f].y += 32;
} else {
array_invader[f].y += 8; //Moving normally downwards
}


//Counting down leaving timer. Once this timer has run out the enemy will leave the screen.
if (array_invader[f].timer_leave > 0) {
array_invader[f].timer_leave -= 1;
} else {
array_invader[f].y += 48; //Once the timer has run out the enemy will fly away at full speed.
}

if (array_invader[f].timer_leave < 30) { //Less than half a second left of the timer speed increase.
array_invader[f].y += 48;
}

if (array_invader[f].timer_leave < 60) {
array_invader[f].y += 48; //Flying off screen faster. This speed happens when there is one second left of the timer.
}


//If hailstorm is imminent the leave timer will run out immediately and the enemy will fly off the screen.
if (timer_hailstorm_start < 60*3) {
array_invader[f].timer_leave = 0;
array_invader[f].y += 32;
}

/*
//There is a chance/risk of slowness activating.
if (randint(1, 300) == 1) { 
array_invader[f].risk_of_slowness = 1;
}

//If slowness has been activated. Start timer. During this timer, the invader enemy will move at a slower rate.
if (array_invader[f].risk_of_slowness == 1) {
array_invader[f].timer_slowness = 180;
array_invader[f].risk_of_slowness = 0;
}

//Counting down timer_slowness. slowness timer.
if (array_invader[f].timer_slowness > 0) {
array_invader[f].timer_slowness -= 1;
}
*/
/*
//Moving enemy to the right.
if (array_invader[f].timer_slowness == 0) {
if (array_invader[f].direction == 1) {
array_invader[f].x += array_invader[f].speed;
}


//Moving enemy to the left.
if (array_invader[f].direction == 0) {
array_invader[f].x -= array_invader[f].speed;
}

} // If slowness is on, don't move at normal speed. Move at lesser speed instead. 



//Moving enemy to the right.
if (array_invader[f].timer_slowness > 0) {
if (array_invader[f].direction == 1) {
array_invader[f].x += array_invader[f].speed/2;
}


//Moving enemy to the left.
if (array_invader[f].direction == 0) {
array_invader[f].x -= array_invader[f].speed/2;
}

} // If slowness is on, don't move at normal speed. Move at lesser speed instead. 

*/

/*
//When hitting edge of screen, change direction and move downwards a little on the y axis. 
if (array_invader[f].x < 0) {
array_invader[f].direction = 1;
array_invader[f].y += 64*4;
array_invader[f].speed += 6;
}
if (array_invader[f].x > (270*64)-(48*64)) {
array_invader[f].direction = 0;
array_invader[f].y += 64*4;
array_invader[f].speed += 6;
}*/

//Updating hitbox.
array_invader[f].hitbox.x1 = array_invader[f].x;
array_invader[f].hitbox.y1 = array_invader[f].y;
array_invader[f].hitbox.x2 = array_invader[f].x + (48*64);
array_invader[f].hitbox.y2 = array_invader[f].y + (18*64);


//Random chance to turn on peace timer. This timer makes it so the invader enemy can't shoot. No shooting.
if (array_invader[f].timer_peace == 0) {
if (randint(0, 300) == 0) {
array_invader[f].timer_peace = 120;
}
}

//Peace timer. No shooting timer. noshoot.
if (array_invader[f].timer_peace > 0) {
array_invader[f].timer_peace -= 1;
}

//Shooting bullets based on what numbers are chosen by the random number generator.
//If hailstorm is imminent or active we can't fire bullets anymore.
if (timer_hailstorm_start > (60*3)) {
if (array_invader[f].timer_peace == 0) {

if (array_invader[f].timer_cooldown == 0) {


if (randint(0, 15) == 0) { 
i = 0;
while (i < 1000) {

if (array_enemy_bullet[i].enabled == 0) {
array_enemy_bullet[i].enabled = 1;
array_enemy_bullet[i].x = array_invader[f].x + (7*64);
array_enemy_bullet[i].y = array_invader[f].y + (18*64);
array_enemy_bullet[i].x_speed = randint(-32, 32);
array_enemy_bullet[i].y_speed = 96; //Was 100.
array_enemy_bullet[i].bullet_type = 0;
array_enemy_bullet[i].hitbox.x1 = array_enemy_bullet[i].x;
array_enemy_bullet[i].hitbox.y1 = array_enemy_bullet[i].y;
array_enemy_bullet[i].hitbox.x2 = array_enemy_bullet[i].x+(6*64);
array_enemy_bullet[i].hitbox.y2 = array_enemy_bullet[i].y+(6*64);
array_enemy_bullet[i].age = 0;
array_invader[f].timer_cooldown = 15;
/*
int x, y;
int x_speed;
int y_speed;
int enabled; //Is the bullet logic running or not. Does the bullet exist.
int bullet_type; //What damage and color is the bullet.
struct hitbox hitbox;
*/


i = 16;
while (i < 32) {
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}

break;
}

i += 1;
}


i = 0; //Spawning a second bullet.
while (i < 1000) {

if (array_enemy_bullet[i].enabled == 0) {
array_enemy_bullet[i].enabled = 1;
array_enemy_bullet[i].x = array_invader[f].x + (38*64);
array_enemy_bullet[i].y = array_invader[f].y + (18*64);
array_enemy_bullet[i].x_speed = randint(-32, 32);
array_enemy_bullet[i].y_speed = 96; //Was 128.
array_enemy_bullet[i].bullet_type = 0;
array_enemy_bullet[i].hitbox.x1 = array_enemy_bullet[i].x;
array_enemy_bullet[i].hitbox.y1 = array_enemy_bullet[i].y;
array_enemy_bullet[i].hitbox.x2 = array_enemy_bullet[i].x+(6*64);
array_enemy_bullet[i].hitbox.y2 = array_enemy_bullet[i].y+(6*64);
array_enemy_bullet[i].age = 0;
array_invader[f].timer_cooldown = 15;
/*
int x, y;
int x_speed;
int y_speed;
int enabled; //Is the bullet logic running or not. Does the bullet exist.
int bullet_type; //What damage and color is the bullet.
struct hitbox hitbox;
*/
break;
}

i += 1;
}
} //Peace timer. timer_peace.

} //Did randint pick the right number?
} //Is cooldown complete?
} //Is hailstorm imminent?


//If timer cooldown is on 13 play shooting sound. This serves as a delayed sound effect that plays right after the last one.
if (array_invader[f].timer_cooldown == 11) {
i = 16;
while (i < 32) {
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}
}

//Cooldown timer. timer_cooldown.
if (array_invader[f].timer_cooldown > 0) {
array_invader[f].timer_cooldown -= 1;
}

//Devtest.
i = 0;
number = 0;
while (i < 1000) {

if (array_enemy_bullet[i].enabled == 0) { 
number += 1;
}


i += 1;
}
//printf("%d\n", number);

//Hitting player bullet and losing health.
i = 0;
while (i < 1000) {

if (array_player_bullet[i].enabled == 1) {
if (array_invader[f].shielded == 0) {
if (hitbox_colliding(array_invader[f].hitbox, array_player_bullet[i].hitbox) == 1) {
array_player_bullet[i].enabled = 0;
array_invader[f].health -= 1;
play_sound_enemy_hurt
break;
}}
}
i += 1;
}


//Hitting player laser and losing health.
i = 0;
while (i < 1000) {
if (hitbox_colliding(array_invader[f].hitbox, hitbox_laser) == 1) {
array_invader[f].health -= 1;
break;
}
i += 1;
}

i = 0;
while (i < 1000) { //Laser 2.
if (hitbox_colliding(array_invader[f].hitbox, hitbox_laser) == 1) {
array_invader[f].health -= 1;
break;
}
i += 1;
}

i = 0;
while (i < 1000) { //Laser 3.
if (hitbox_colliding(array_invader[f].hitbox, hitbox_laser) == 1) {
array_invader[f].health -= 1;
break;
}
i += 1;
}

//Is invader shielded or not.
array_invader[f].shielded = 0; //By default the enemy is not shielded.
i = 0;
while (i < 100) {
if (array_enemy_shielder[i].enabled == 1) {
if (hitbox_colliding(array_invader[f].hitbox, array_enemy_shielder[i].area) == 1) {
array_invader[f].shielded = 1;
break;
}
} //Is enemy enabled.
i += 1;
}

//Despawning enemy if out of health.
if (array_invader[f].health < 1) {
    
array_invader[f].enabled = 0;
array_invader[f].hitbox.x1 = 1000*1000;
array_invader[f].hitbox.y1 = 1000*1000;
array_invader[f].hitbox.x2 = 1000*1002;
array_invader[f].hitbox.y2 = 1000*1002;

score += 25;

i = 48;
while (i < 64) { //Big explosion.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}

i = 0;
p = 0;
while (i < 100000) {

if (array_particle[i].enabled == 0) {


array_particle[i].enabled = 1;
array_particle[i].x = array_invader[f].x + (randint(0, 48)*64);
array_particle[i].y = array_invader[f].y + (randint(0, 20)*64);
array_particle[i].x_speed = randint(-48, 48);
array_particle[i].y_speed = randint(-48, 48);
array_particle[i].r = randint(175*64, 255*64);
array_particle[i].g = array_particle[i].r;
array_particle[i].b = 0;

p += 1;
if (p == 700) { //Once 700 particles have spawned, move on.
break;
}

} //Is particle enabled.


i += 1;
}

} //If enemy is out of health.


//If enemy is outside screen it will despawn.
if (array_invader[f].y > (270*64)) {

array_invader[f].enabled = 0;

}





} //Checking if enabled.


} //Is game paused.

f += 1;
} //End of while loop.