//Loot can only spawn if game is not paused.
if (game_paused == 0) {
if (current_cutscene_part == -1) {
if (timer_hailstorm_duration == 0) {
if (gameplay_frames_passed > 60*5) {



//1/600 chance to spawn an energy cell every frame.
if (difficulty < 13) {
if (randint(0, 599) == 0) {
f = 0;
while (f < 1024) {
if (array_energy_cell_pickup[f].enabled == 0) {

array_energy_cell_pickup[f].enabled = 1;
array_energy_cell_pickup[f].x = randint(0, 257*64);
array_energy_cell_pickup[f].y = 0;
array_energy_cell_pickup[f].hitbox.x1 = 1000*1000;
array_energy_cell_pickup[f].hitbox.y1 = 1000*1000;
array_energy_cell_pickup[f].hitbox.x2 = 1000*1002;
array_energy_cell_pickup[f].hitbox.y2 = 1000*1002;
array_energy_cell_pickup[f].x_direction = randint(0, 1);
array_energy_cell_pickup[f].y_direction = 1;
array_energy_cell_pickup[f].bounces = 0;



break;
}

f += 1;
}

} //Energy cell spawn rate up until 15 minutes.
}

if (difficulty >= 13) {
if (difficulty < 15) {
if (randint(0, 1199) == 0) {
f = 0;
while (f < 1024) {
if (array_energy_cell_pickup[f].enabled == 0) {

array_energy_cell_pickup[f].enabled = 1;
array_energy_cell_pickup[f].x = randint(0, 257*64);
array_energy_cell_pickup[f].y = 0;
array_energy_cell_pickup[f].hitbox.x1 = 1000*1000;
array_energy_cell_pickup[f].hitbox.y1 = 1000*1000;
array_energy_cell_pickup[f].hitbox.x2 = 1000*1002;
array_energy_cell_pickup[f].hitbox.y2 = 1000*1002;
array_energy_cell_pickup[f].x_direction = randint(0, 1);
array_energy_cell_pickup[f].y_direction = 1;
array_energy_cell_pickup[f].bounces = 0;



break;
}

f += 1;
}

} //Energy cell spawn rate between 15-20 minutes.
}
}

if (difficulty == 15) {
if (progression < (60*60*22)) {
if (randint(0, 2999) == 0) {
f = 0;
while (f < 1024) {
if (array_energy_cell_pickup[f].enabled == 0) {

array_energy_cell_pickup[f].enabled = 1;
array_energy_cell_pickup[f].x = randint(0, 257*64);
array_energy_cell_pickup[f].y = 0;
array_energy_cell_pickup[f].hitbox.x1 = 1000*1000;
array_energy_cell_pickup[f].hitbox.y1 = 1000*1000;
array_energy_cell_pickup[f].hitbox.x2 = 1000*1002;
array_energy_cell_pickup[f].hitbox.y2 = 1000*1002;
array_energy_cell_pickup[f].x_direction = randint(0, 1);
array_energy_cell_pickup[f].y_direction = 1;
array_energy_cell_pickup[f].bounces = 0;

break;
}

f += 1;
}

} //Energy cell spawn rate between 20-22.5 minutes.
}
}

//1/1500 chance to spawn an laser pickup every frame.
if (randint(0, 1499) == 0) {
f = 0;
while (f < 1000) {
if (array_laser_pickup[f].enabled == 0) {

array_laser_pickup[f].enabled = 1;
array_laser_pickup[f].x = randint(0, 257*64);
array_laser_pickup[f].y = 0;
array_laser_pickup[f].hitbox.x1 = 1000*1000;
array_laser_pickup[f].hitbox.y1 = 1000*1000;
array_laser_pickup[f].hitbox.x2 = 1000*1002;
array_laser_pickup[f].hitbox.y2 = 1000*1002;
array_laser_pickup[f].x_direction = randint(0, 1);
array_laser_pickup[f].y_direction = 1;
array_laser_pickup[f].bounces = 0;

break;
}

f += 1;
}

}


//1/1500 chance to spawn a triplefire pickup every frame.
if (randint(0, 1499) == 0) {
f = 0;
while (f < 1000) {
if (array_triplefire_pickup[f].enabled == 0) {

array_triplefire_pickup[f].enabled = 1;
array_triplefire_pickup[f].x = randint(0, 257*64);
array_triplefire_pickup[f].y = 0;
array_triplefire_pickup[f].hitbox.x1 = 1000*1000;
array_triplefire_pickup[f].hitbox.y1 = 1000*1000;
array_triplefire_pickup[f].hitbox.x2 = 1000*1002;
array_triplefire_pickup[f].hitbox.y2 = 1000*1002;
array_triplefire_pickup[f].x_direction = randint(0, 1);
array_triplefire_pickup[f].y_direction = 1;
array_triplefire_pickup[f].bounces = 0;

break;
}

f += 1;
}

}



//1/3500 chance to spawn a death pickup every frame.
if (randint(0, 3499) == 0) {
f = 0;
while (f < 100) {
if (array_death_pickup[f].enabled == 0) {

array_death_pickup[f].enabled = 1;
array_death_pickup[f].x = randint(0, 257*64);
array_death_pickup[f].y = 0;
array_death_pickup[f].hitbox.x1 = 1000*1000;
array_death_pickup[f].hitbox.y1 = 1000*1000;
array_death_pickup[f].hitbox.x2 = 1000*1002;
array_death_pickup[f].hitbox.y2 = 1000*1002;
array_death_pickup[f].x_direction = randint(0, 1);
array_death_pickup[f].y_direction = 1;
array_death_pickup[f].bounces = 0;

break;
}

f += 1;
}

}



/*
int enabled;
int x, y;
int x_direction, y_direction; //What direction is the bullet flying.
struct hitbox hitbox;
*/
} //Don't spawn any loot unless at least 5 seconds have passed.
} //Is the hailstorm active?
} //Is game paused?
} //Are we in gameplay mode?