if (current_cutscene_part == -1) {
if (game_paused == 0) {


f = 0;
while (f < 1000) {

//If enemy is enabled, run it's logic depending on behaviour variable.
if (array_enemy[f].enabled == 1) {


if (array_enemy[f].behaviour == 0) { //Enemy 0.

//If hailstorm is near, fly away fast.
if (timer_hailstorm_start < (60*3)) {
array_enemy[f].speedchange = 0;
array_enemy[f].y += 32;
}


//Incrementing age value.
array_enemy[f].age += 1;

//Moving at different speeds depending on how long the ship has been on the screen and some randomness.
if (array_enemy[f].age > 60) {
if (array_enemy[f].speedchange != 0) {
array_enemy[f].speedchange = randint(0, 120);
}}

if (array_enemy[f].speedchange != 0) {
array_enemy[f].y += array_enemy[f].random_0;
}
if (array_enemy[f].speedchange == 0) {
array_enemy[f].y += 112;
}

//Changing sprite after a certain amount of frames passes and some with some luck.
if (array_enemy[f].speedchange != 0) {
array_enemy[f].frame = 0;
}
if (array_enemy[f].speedchange == 0) {
array_enemy[f].frame = 1;
}

//Spawning bullets.
if (array_enemy[f].speedchange != 0) {
array_enemy[f].random_int_enemy = randint(0, 100);
if (array_enemy[f].random_int_enemy == 0) {
i = 0;
while (i < 1000) {

if (array_enemy_bullet[i].enabled == 0) {
array_enemy_bullet[i].enabled = 1;
array_enemy_bullet[i].x = array_enemy[f].x + (7*64);
array_enemy_bullet[i].y = array_enemy[f].y + (18*64);
array_enemy_bullet[i].x_speed = 0;
array_enemy_bullet[i].y_speed = 96; //Was 128.
array_enemy_bullet[i].bullet_type = 0;
array_enemy_bullet[i].hitbox.x1 = array_enemy_bullet[i].x;
array_enemy_bullet[i].hitbox.y1 = array_enemy_bullet[i].y;
array_enemy_bullet[i].hitbox.x2 = array_enemy_bullet[i].x+(5*64);
array_enemy_bullet[i].hitbox.y2 = array_enemy_bullet[i].y+(5*64);
array_enemy_bullet[i].age = 0;
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
}
} //End of spawning bullets.

//printf("%d\n", random_int_0);

//Updating enemy hitbox.
array_enemy[f].hitbox.x1 = array_enemy[f].x;
array_enemy[f].hitbox.y1 = array_enemy[f].y;
array_enemy[f].hitbox.x2 = array_enemy[f].x + (18*64);
array_enemy[f].hitbox.y2 = array_enemy[f].y + (18*64);

//Despawning if going outside screen.
if (array_enemy[f].y > 300*64) {
array_enemy[f].enabled = 0;
}


//Taking damage if touching player bullet.
i = 0;
while (i < 1000) {
if (array_player_bullet[i].enabled == 1) {
if (hitbox_colliding(array_enemy[f].hitbox, array_player_bullet[i].hitbox) == 1) {
array_player_bullet[i].enabled = 0;
if (array_enemy[f].shielded == 0) {
array_enemy[f].health -= 1;
play_sound_enemy_hurt
}
break;
}
} //player bullet enabled check.
i += 1;
} 


//Taking damage if touching player laser.
i = 0;
while (i < 1000) {
if (hitbox_colliding(array_enemy[f].hitbox, hitbox_laser) == 1) {
array_enemy[f].health -= 1;
break;
}
i += 1;
}

i = 0; 
while (i < 1000) { //Laser 2.
if (hitbox_colliding(array_enemy[f].hitbox, hitbox_laser_2) == 1) {
array_enemy[f].health -= 1;
break;
}
i += 1;
} 

i = 0;
while (i < 1000) { //Laser 3.
if (hitbox_colliding(array_enemy[f].hitbox, hitbox_laser_3) == 1) {
array_enemy[f].health -= 1;
break;
}
i += 1;
} 



//If enemy runs out of health it will be disabled and spawn a bunch of particles to look like an explosion. These particles will spawn in three patterns.
if (array_enemy[f].health < 1) {

array_enemy[f].enabled = 0;

score += 5; //Giving player score.

i = 32;
while (i < 48) {

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
array_particle[i].x = array_enemy[f].x + (randint(0, 16)*64);
array_particle[i].y = array_enemy[f].y + (randint(0, 15)*64);
array_particle[i].x_speed = randint(-48, 48);
array_particle[i].y_speed = randint(-48, 48);
array_particle[i].r = randint(175*64, 255*64);
array_particle[i].g = array_particle[i].r;
array_particle[i].b = 0;

p += 1;
if (p == 50) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.


i += 1;
}


i = 0;
p = 0;
while (i < 100000) {

if (array_particle[i].enabled == 0) {


array_particle[i].enabled = 1;
array_particle[i].x = array_enemy[f].x + (randint(0, 16)*64);
array_particle[i].y = array_enemy[f].y + (randint(0, 15)*64);
array_particle[i].x_speed = randint(-32, 32);
array_particle[i].y_speed = randint(-64, 64);
array_particle[i].r = randint(175*64, 255*64);
array_particle[i].g = array_particle[i].r;
array_particle[i].b = 0;

p += 1;
if (p == 50) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.


i += 1;
}



i = 0;
p = 0;
while (i < 100000) {

if (array_particle[i].enabled == 0) {
 
 
array_particle[i].enabled = 1;
array_particle[i].x = array_enemy[f].x + (randint(0, 16)*64);
array_particle[i].y = array_enemy[f].y + (randint(0, 15)*64);
array_particle[i].x_speed = randint(-64, 64);
array_particle[i].y_speed = randint(-32, 32);
array_particle[i].r = randint(175*64, 255*64);
array_particle[i].g = array_particle[i].r;
array_particle[i].b = 0;

p += 1;
if (p == 50) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.


i += 1;
}



} //If enemy is out of health.

//Determine if enemy is affected by shielder enemy.
i = 0;
array_enemy[f].shielded = 0; //Enemy is not shielded by default.
while (i < 100) {
if (array_enemy_shielder[i].enabled == 1) {
if (hitbox_colliding(array_enemy[f].hitbox, array_enemy_shielder[i].area) == 1) {
array_enemy[f].shielded = 1;

}
} //Is shielder enabled.
i += 1;
}

} //Enemy 0 logic.




///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


if (array_enemy[f].behaviour == 1) { //Enemy 1 logic.

//Disabling enemy if hailstorm is active and enemy is outside screen. 
if (timer_hailstorm_start < 60*3) {
if (array_enemy[f].y < 0-(31*64)) {
array_enemy[f].enabled = 0;
}
}

//If hailstorm is imminent, move tazer enemy out of the way.
if (timer_hailstorm_start < 60*3) {
array_enemy[f].y -= 64;
}

//Moving enemy on x axis by speed_x.
if (array_enemy[f].timer_random_1 == 0) {
array_enemy[f].x += array_enemy[f].speed_x;
}

//Moving enemy down during timer_random_0
if (array_enemy[f].timer_random_0 > 0) {
array_enemy[f].y += 32;
array_enemy[f].timer_random_0 -= 1;
}

//After a while on screen, the enemy will move back up, only during the second timer.
if (array_enemy[f].timer_random_0 == 0) {
if (array_enemy[f].timer_random_1 > 0) {
if (array_enemy[f].timer_random_1 == 179) {
array_enemy[f].speed_x = randint(-64, 64);
}
array_enemy[f].timer_random_1 -= 1;
}
}

//After the second timer is up. Move enemy up.
if (array_enemy[f].timer_random_1 == 0) {
array_enemy[f].y -= 64;
}


//After second timer is up and enemy has left the screen. Disable it.
if (array_enemy[f].timer_random_1 == 0) {
if (array_enemy[f].y < (-32*64)) {
array_enemy[f].enabled = 0;
}}


//Taking damage if touching player bullet.
i = 0;
while (i < 1000) {
if (array_player_bullet[i].enabled == 1) {
if (hitbox_colliding(array_enemy[f].hitbox, array_player_bullet[i].hitbox) == 1) {
array_player_bullet[i].enabled = 0;
if (array_enemy[f].shielded == 0) {
array_enemy[f].health -= 1;
play_sound_enemy_hurt
}
break;
}
} //player bullet enabled check.
i += 1;
}


//Taking damage if touching player laser.
i = 0;
while (i < 1000) {
if (hitbox_colliding(array_enemy[f].hitbox, hitbox_laser) == 1) {
array_enemy[f].health -= 1;
break;
}
i += 1;
}

i = 0;
while (i < 1000) { //Laser 2.
if (hitbox_colliding(array_enemy[f].hitbox, hitbox_laser_2) == 1) {
array_enemy[f].health -= 1;
break;
}
i += 1;
}

i = 0;
while (i < 1000) { //Laser 3.
if (hitbox_colliding(array_enemy[f].hitbox, hitbox_laser_3) == 1) {
array_enemy[f].health -= 1;
break;
}
i += 1;
}


//If enemy runs out of health. It explodes (dies).
//If enemy runs out of health it will be disabled and spawn a bunch of particles to look like an explosion. These particles will spawn in three patterns.
if (array_enemy[f].health < 1) {

array_enemy[f].enabled = 0;

score += 10; //Giving player score.

i = 48;
while (i < 64) { //Big explosion.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}


//Maybe spawning energy cell.
if (difficulty < 15) {
i = randint(0,3);
} else {
i = randint(0, 63);
}
if (progression >= (60*60*22)) {
i = 1;
}
if (i == 0) {
i = 0;
while (i < 1024) {
if (array_energy_cell_pickup[i].enabled == 0) {
array_energy_cell_pickup[i].enabled = 1;
array_energy_cell_pickup[i].x = array_enemy[f].x;
array_energy_cell_pickup[i].y = array_enemy[f].y;
array_energy_cell_pickup[i].hitbox.x1 = 1000*1000;
array_energy_cell_pickup[i].hitbox.y1 = 1000*1000;
array_energy_cell_pickup[i].hitbox.x2 = 1000*1002;
array_energy_cell_pickup[i].hitbox.y2 = 1000*1002;
array_energy_cell_pickup[i].x_direction = randint(0, 1);
array_energy_cell_pickup[i].y_direction = randint(0, 1);
array_energy_cell_pickup[i].bounces = 0;
break;
} //Is energy cell disabled.
i += 1;
} //Loop that goes through list of energy cell structs.
} //50% chance to spawn energy cell upon enemy death. 25% chance when difficulty level is at 15.


i = 0;
p = 0;
while (i < 100000) {

if (array_particle[i].enabled == 0) {


array_particle[i].enabled = 1;
array_particle[i].x = array_enemy[f].x + (randint(0, 22)*64);
array_particle[i].y = array_enemy[f].y + (randint(0, 31)*64);
array_particle[i].x_speed = randint(-48, 48);
array_particle[i].y_speed = randint(-48, 48);
array_particle[i].r = randint(175*64, 255*64);
array_particle[i].g = array_particle[i].r;
array_particle[i].b = 0;

p += 1;
if (p == 100) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.


i += 1;
}


i = 0;
p = 0;
while (i < 100000) {

if (array_particle[i].enabled == 0) {


array_particle[i].enabled = 1;
array_particle[i].x = array_enemy[f].x + (randint(0, 22)*64);
array_particle[i].y = array_enemy[f].y + (randint(0, 31)*64);
array_particle[i].x_speed = randint(-32, 32);
array_particle[i].y_speed = randint(-64, 64);
array_particle[i].r = randint(175*64, 255*64);
array_particle[i].g = array_particle[i].r;
array_particle[i].b = 0;

p += 1;
if (p == 100) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.


i += 1;
}



i = 0;
p = 0;
while (i < 100000) {

if (array_particle[i].enabled == 0) {


array_particle[i].enabled = 1;
array_particle[i].x = array_enemy[f].x + (randint(0, 22)*64);
array_particle[i].y = array_enemy[f].y + (randint(0, 31)*64);
array_particle[i].x_speed = randint(-64, 64);
array_particle[i].y_speed = randint(-32, 32);
array_particle[i].r = randint(175*64, 255*64);
array_particle[i].g = array_particle[i].r;
array_particle[i].b = 0;

p += 1;
if (p == 100) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.


i += 1;
}



} //If enemy is out of health.

//Updating enemy hitbox.
array_enemy[f].hitbox.x1 = array_enemy[f].x;
array_enemy[f].hitbox.y1 = array_enemy[f].y;
array_enemy[f].hitbox.x2 = array_enemy[f].x + (22*64);
array_enemy[f].hitbox.y2 = array_enemy[f].y + (31*64);


//Taze timer. It is random.
if (array_enemy[f].timer_taze > 0) {
array_enemy[f].timer_taze -= 1;
} else {
if (array_enemy[f].timer_random_1 > 0) { //Is enemy standing still.
//Spawning bullets every time the timer runs out.
i = 0;
while (i < 1000) {

if (array_enemy_bullet[i].enabled == 0) {
array_enemy_bullet[i].enabled = 1;
array_enemy_bullet[i].x = array_enemy[f].x + (2*64);
array_enemy_bullet[i].y = array_enemy[f].y + (32*64);
array_enemy_bullet[i].x_speed = 0;
array_enemy_bullet[i].y_speed = 128+32;
array_enemy_bullet[i].bullet_type = 1;
array_enemy_bullet[i].hitbox.x1 = array_enemy_bullet[i].x;
array_enemy_bullet[i].hitbox.y1 = array_enemy_bullet[i].y;
array_enemy_bullet[i].hitbox.x2 = array_enemy_bullet[i].x+(18*64);
array_enemy_bullet[i].hitbox.y2 = array_enemy_bullet[i].y+(2*64);
array_enemy_bullet[i].age = 0;
/*
int x, y;
int x_speed;
int y_speed;
int enabled; //Is the bullet logic running or not. Does the bullet exist.
int bullet_type; //What damage and color is the bullet.
struct hitbox hitbox;
*/


p = 93;
while (p < 101) {
if (al_get_sample_instance_playing(array_sample_instance[p]) == 0) {
al_play_sample_instance(array_sample_instance[p]);
break;
}

p += 1;
}


break;
}
i += 1;
}
}//Timer check.
array_enemy[f].timer_taze = randint(80, 160);
}

//Determine if enemy is affected by shielder enemy.
i = 0;
array_enemy[f].shielded = 0; //Enemy is not shielded by default.
while (i < 100) {
if (array_enemy_shielder[i].enabled == 1) {
if (hitbox_colliding(array_enemy[f].hitbox, array_enemy_shielder[i].area) == 1) {
array_enemy[f].shielded = 1;

}
} //Is shielder enabled.
i += 1;
}



} //Enemy 1 logic.






}//Is enemy enabled.

f += 1;
}





} //Is game paused?
} //Is cutscene over?