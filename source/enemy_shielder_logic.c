//Is game paused?
if (game_paused == 0) {

//Enemy shielder logic.
f = 0;
while (f < 100) {

//Always moving downwards slightly to make it wasier for the player to shoot.
array_enemy_shielder[f].y += 24;

//If hailstorm is imminent the shielder enemy will move out of the screen.
if (timer_hailstorm_start < 60*3) {
array_enemy_shielder[f].timer_disappear = 0;
}

if (array_enemy_shielder[f].enabled == 1) {

//Moving on y axis based on ydir variable.
if (array_enemy_shielder[f].ydir == 1) {
array_enemy_shielder[f].y += 48;
}
if (array_enemy_shielder[f].ydir == 0) {
array_enemy_shielder[f].y -= 48;
}

//Moving on x axis based on xdir variable.
if (array_enemy_shielder[f].xdir == 1) {
array_enemy_shielder[f].x += 48;
}
if (array_enemy_shielder[f].xdir == 0) {
array_enemy_shielder[f].x -= 48;
}

//Changing direction if hitting corner of allowed area. Bouncing.
if (array_enemy_shielder[f].timer_disappear > 0) {
if (array_enemy_shielder[f].x < 0) { //X axis.
array_enemy_shielder[f].xdir = 1;
}

if (array_enemy_shielder[f].x > ((270-21)*64)) { //X axis.
array_enemy_shielder[f].xdir = 0;
}

if (array_enemy_shielder[f].y < 0) { //y axis.
array_enemy_shielder[f].ydir = 1;
}

if (array_enemy_shielder[f].y > ((180-16)*64)) { //y axis.
array_enemy_shielder[f].ydir = 0;
}}

//timer that makes enemy change direction.
//When it runs out enemy will change direction and timer will reset to random time. 
//This can only happen if enemies lifespan timer has not run out. 
if (array_enemy_shielder[f].timer_disappear > 0) {
//X dir.
array_enemy_shielder[f].timer_change_xdir -= 1;
if (array_enemy_shielder[f].timer_change_xdir == 0) {

switch (array_enemy_shielder[f].xdir) {

case 0:
array_enemy_shielder[f].xdir = 1;
break;


case 1:
array_enemy_shielder[f].xdir = 0;
break;

};
array_enemy_shielder[f].timer_change_xdir = randint(60, 240);
}


//Y dir.
array_enemy_shielder[f].timer_change_ydir -= 1;
if (array_enemy_shielder[f].timer_change_ydir == 0) {

switch (array_enemy_shielder[f].ydir) {

case 0:
array_enemy_shielder[f].ydir = 1;
break;


case 1:
array_enemy_shielder[f].ydir = 0;
break;

};


array_enemy_shielder[f].timer_change_ydir = randint(60, 240);
}
} //Timer disappear. Lifespan timer.


//Getting hit by player bullet and taking damage.
i = 0;
while (i < 1000) {
if (hitbox_colliding(array_player_bullet[i].hitbox, array_enemy_shielder[f].hitbox) == 1) {

if (array_player_bullet[i].enabled == 1) {
array_enemy_shielder[f].health -= player_bullet_damage;
array_player_bullet[i].enabled = 0;
array_player_bullet[i].x = -1000;
array_player_bullet[i].y = -1000;
play_sound_enemy_hurt
break;
}

}
i += 1;
}


//Getting hit by player laser and taking damage.
i = 0;
while (i < 1000) {
if (hitbox_colliding(hitbox_laser, array_enemy_shielder[f].hitbox) == 1) {
array_enemy_shielder[f].health -= player_bullet_damage;
break;
}
i += 1;
}

i = 0;
while (i < 1000) { //Laser 2.
if (hitbox_colliding(hitbox_laser_2, array_enemy_shielder[f].hitbox) == 1) {
array_enemy_shielder[f].health -= player_bullet_damage;
break;
}
i += 1;
}

i = 0;
while (i < 1000) { //Laser 3.
if (hitbox_colliding(hitbox_laser_3, array_enemy_shielder[f].hitbox) == 1) {
array_enemy_shielder[f].health -= player_bullet_damage;
break;
}
i += 1;
}



//Enemy dies when health is 0 or less.
if (array_enemy_shielder[f].health < 1) {
if (array_enemy_shielder[f].enabled == 1) {


array_enemy_shielder[f].enabled = 0;
score += 20;
shielders_killed += 1; //One more shielder has been killed. 


i = 32;
while (i < 48) {

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
i = randint(0, 64);
}
if (progression >= (60*60*22)) {
i = 1;
}
if (i == 0) {
i = 0;
while (i < 1024) {
if (array_energy_cell_pickup[i].enabled == 0) {
array_energy_cell_pickup[i].enabled = 1;
array_energy_cell_pickup[i].x = array_enemy_shielder[f].x;
array_energy_cell_pickup[i].y = array_enemy_shielder[f].y;
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
} //50% chance to spawn energy cell upon enemy death.


i = 0;
p = 0;
while (i < 100000) {

if (array_particle[i].enabled == 0) {


array_particle[i].enabled = 1;
array_particle[i].x = array_enemy_shielder[f].x + (randint(0, 21)*64);
array_particle[i].y = array_enemy_shielder[f].y + (randint(0, 16)*64);
array_particle[i].x_speed = randint(-48, 48);
array_particle[i].y_speed = randint(-48, 48);
array_particle[i].r = randint(175*64, 255*64);
array_particle[i].g = array_particle[i].r;
array_particle[i].b = 0;

p += 1;
if (p == 200) { //Once 200 particles have spawned, move on.
break;
}

} //Is particle enabled.


i += 1;
}


}} //Enemy.

//When outside screen, disable.
if (hitbox_colliding(array_enemy_shielder[f].hitbox, hitbox_gameplay_screen) == 0) {
if (array_enemy_shielder[f].timer_disappear < 1) {
array_enemy_shielder[f].enabled = 0;
}}


//Updating hitbox.
array_enemy_shielder[f].hitbox.x1 = array_enemy_shielder[f].x;
array_enemy_shielder[f].hitbox.y1 = array_enemy_shielder[f].y;
array_enemy_shielder[f].hitbox.x2 = array_enemy_shielder[f].x+(21*64);
array_enemy_shielder[f].hitbox.y2 = array_enemy_shielder[f].y+(16*64);

//Updating area.
array_enemy_shielder[f].area.x1 = array_enemy_shielder[f].x-(48*64);
array_enemy_shielder[f].area.y1 = array_enemy_shielder[f].y-(48*64);
array_enemy_shielder[f].area.x2 = array_enemy_shielder[f].x+(21*64)+(48*64);
array_enemy_shielder[f].area.y2 = array_enemy_shielder[f].y+(16*64)+(48*64);

//After timer runs out. Enemy will disappear off screen, bounce will be off and enemy will stop changing direction.
array_enemy_shielder[f].timer_disappear -= 1;

} //Is enemy shielder enabled.

f += 1;
}
} //Is game paused?