//Small enemy logic.
//Only runs when in gameplay mode.
if (current_cutscene_part == -1) {



f = 0;
while (f < 100) {

if (array_small_enemy[f].enabled == 1) {
if (game_paused == 0) {


//Determine if enemy is affected by shielder enemy.
i = 0;
array_small_enemy[f].shielded = 0; //Enemy is not shielded by default.
while (i < 100) {
if (array_enemy_shielder[i].enabled == 1) {
if (hitbox_colliding(array_small_enemy[f].hitbox, array_enemy_shielder[i].area) == 1) {
array_small_enemy[f].shielded = 1;
}
} //Is shielder enabled.
i += 1;
}


//Touching player bullet and taking damage.
if (array_small_enemy[f].shielded == 0) {
i = 0;
while (i < 100) {
if (array_player_bullet[i].enabled == 1) {
if (hitbox_colliding(array_small_enemy[f].hitbox, array_player_bullet[i].hitbox) == 1) {
array_small_enemy[f].enabled = 0;
array_player_bullet[i].enabled = 0;
play_sound_enemy_hurt
score += 1;


//Maybe spawning energy cell.
if (difficulty < 15) {
i = randint(0,5);
} else {
i = randint(0, 255);
}
if (progression >= (60*60*22)) {
i = 1;
}
if (i == 0) {
i = 0;
while (i < 1024) {
if (array_energy_cell_pickup[i].enabled == 0) {
array_energy_cell_pickup[i].enabled = 1;
array_energy_cell_pickup[i].x = array_small_enemy[f].x;
array_energy_cell_pickup[i].y = array_small_enemy[f].y;
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

i = 32;
while (i < 48) {

if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}

i += 1;
}

h = 0;
p = 0;
while (h < 100000) {

if (array_particle[h].enabled == 0) {


array_particle[h].enabled = 1;
array_particle[h].x = array_small_enemy[f].x + (randint(2, 14)*64);
array_particle[h].y = array_small_enemy[f].y + (randint(2, 14)*64);
array_particle[h].x_speed = randint(-48, 48);
array_particle[h].y_speed = randint(-48, 48);
array_particle[h].r = randint(175*64, 255*64);
array_particle[h].g = array_particle[h].r;
array_particle[h].b = 0;

p += 1;
if (p == 70) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.


h += 1;
}

break;
}
} //Is player bullet enabled?

i += 1;
}
} //Is enemy shielded?

//Touching player laser and taking damage. 
if (hitbox_colliding(array_small_enemy[f].hitbox, hitbox_laser)) { //Laser 1.
array_small_enemy[f].enabled = 0;
score += 1;
//Maybe spawning energy cell.
if (difficulty < 15) {
i = randint(0,7);
} else {
i = randint(0, 255);
}
if (progression >= (60*60*22)) {
i = 1;
}
if (i == 0) {
i = 0;
while (i < 1024) {
if (array_energy_cell_pickup[i].enabled == 0) {
array_energy_cell_pickup[i].enabled = 1;
array_energy_cell_pickup[i].x = array_small_enemy[f].x;
array_energy_cell_pickup[i].y = array_small_enemy[f].y;
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



h = 0;
p = 0;
while (h < 100000) {

if (array_particle[h].enabled == 0) {


array_particle[h].enabled = 1;
array_particle[h].x = array_small_enemy[f].x + (randint(2, 14)*64);
array_particle[h].y = array_small_enemy[f].y + (randint(2, 14)*64);
array_particle[h].x_speed = randint(-48, 48);
array_particle[h].y_speed = randint(-48, 48);
array_particle[h].r = randint(175*64, 255*64);
array_particle[h].g = array_particle[h].r;
array_particle[h].b = 0;

p += 1;
if (p == 70) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.


h += 1;
}


}


if (hitbox_colliding(array_small_enemy[f].hitbox, hitbox_laser_2)) { //Laser 2.
array_small_enemy[f].enabled = 0;
score += 1;
//Maybe spawning energy cell.
if (difficulty < 15) {
i = randint(0,5);
} else {
i = randint(0, 127);
}
if (progression >= (60*60*22)) {
i = 1;
}
if (i == 0) {
i = 0;
while (i < 1024) {
if (array_energy_cell_pickup[i].enabled == 0) {
array_energy_cell_pickup[i].enabled = 1;
array_energy_cell_pickup[i].x = array_small_enemy[f].x;
array_energy_cell_pickup[i].y = array_small_enemy[f].y;
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


h = 0;
p = 0;
while (h < 100000) {

if (array_particle[h].enabled == 0) {


array_particle[h].enabled = 1;
array_particle[h].x = array_small_enemy[f].x + (randint(2, 14)*64);
array_particle[h].y = array_small_enemy[f].y + (randint(2, 14)*64);
array_particle[h].x_speed = randint(-48, 48);
array_particle[h].y_speed = randint(-48, 48);
array_particle[h].r = randint(175*64, 255*64);
array_particle[h].g = array_particle[h].r;
array_particle[h].b = 0;

p += 1;
if (p == 70) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.


h += 1;
}


}

if (hitbox_colliding(array_small_enemy[f].hitbox, hitbox_laser_3)) { //Laser 3.
array_small_enemy[f].enabled = 0;
score += 1;
//Maybe spawning energy cell.
if (difficulty < 15) {
i = randint(0,5);
} else {
i = randint(0, 255);
}
if (progression >= (60*60*22)) {
i = 1;
}
if (i == 0) {
i = 0;
while (i < 1024) {
if (array_energy_cell_pickup[i].enabled == 0) {
array_energy_cell_pickup[i].enabled = 1;
array_energy_cell_pickup[i].x = array_small_enemy[f].x;
array_energy_cell_pickup[i].y = array_small_enemy[f].y;
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

h = 0;
p = 0;
while (h < 100000) {

if (array_particle[h].enabled == 0) {

array_particle[h].enabled = 1;
array_particle[h].x = array_small_enemy[f].x + (randint(2, 14)*64);
array_particle[h].y = array_small_enemy[f].y + (randint(2, 14)*64);
array_particle[h].x_speed = randint(-48, 48);
array_particle[h].y_speed = randint(-48, 48);
array_particle[h].r = randint(175*64, 255*64);
array_particle[h].g = array_particle[h].r;
array_particle[h].b = 0;

p += 1;
if (p == 70) { //Once 50 particles have spawned, move on.
break;
}

} //Is particle enabled.

h += 1;
}


}



//Destroying player bullet if colliding with it. 
i = 0;
while (i < 1000) {
if (array_player_bullet[i].enabled == 1) {
if (hitbox_colliding(array_player_bullet[i].hitbox, array_small_enemy[f].hitbox) == 1) {
array_player_bullet[i].enabled = 0;
}
}
i += 1;
}


//Moving downwards.
if (array_small_enemy[f].pattern == 0) {
array_small_enemy[f].y += 32*3;
}
if (array_small_enemy[f].pattern == 1) {
array_small_enemy[f].y += 32*2;
}
if (array_small_enemy[f].pattern == 2) {
array_small_enemy[f].y += 32*2;
}



//Updating hitbox.
array_small_enemy[f].hitbox.x1 = array_small_enemy[f].x;
array_small_enemy[f].hitbox.y1 = array_small_enemy[f].y;
array_small_enemy[f].hitbox.x2 = array_small_enemy[f].x+(16*64);
array_small_enemy[f].hitbox.y2 = array_small_enemy[f].y+(16*64);



//Despawning enemy when outside screen.
if (array_small_enemy[f].y > 270*64) {
array_small_enemy[f].enabled = 0;
}




//This part depends on the pattern variable in the struct. If pattern is 1, the enemy will sway left to right.
if (array_small_enemy[f].pattern == 1) {

//Moving enemy on x axis by x_speed variable.
array_small_enemy[f].x += array_small_enemy[f].x_speed;


//Changing x_speed variable based on x_direction.
if (array_small_enemy[f].x_direction == 0) {
array_small_enemy[f].x_speed -= 1;
} else {
array_small_enemy[f].x_speed += 1;
}


//Counting timer that changes the direction the enemy will move in each time it runs out.
if (array_small_enemy[f].timer_speed_change > 0) {
array_small_enemy[f].timer_speed_change -= 1;
} else {

array_small_enemy[f].timer_speed_change = 90;
array_small_enemy[f].x_direction = !array_small_enemy[f].x_direction;

} //Timer has run out. Resetting it and changing x movement direction.



} //Is pattern 1? Should the enemy sway?



} //Is the game paused or not?

//Drawing sprite!
al_draw_bitmap(bitmap_enemy_small, array_small_enemy[f].x/64, array_small_enemy[f].y/64, 0);

//Drawing shield around sprite if enemy is shielded.
if (array_small_enemy[f].shielded == 1) {
al_draw_filled_ellipse(array_small_enemy[f].x/64+8, array_small_enemy[f].y/64+8, 8, 8, al_map_rgba(50, 180, 50, 70));
}

} //Is enemy enabled?

f += 1;
} //While loop.




} //Are we in gameplay mode?