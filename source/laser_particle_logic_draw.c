//Value representing how fast the particles should despawn. If 2, they despawb twice as fast as 1.
if (input_left() == 0 && input_right() == 0) {
d = 1;
} else {
d = 2;
}

//Checking so that we are in game.
if (current_cutscene_part == -1) {
if (game_paused == 0) {


e = 0;
while (e < 125) { //Spawning 125 laser particles per frame.
/////Spawning particle at the edge of laser beam at random location.
f = 0;
while (f < 10000) {

if (array_laser_particles[f].enabled == 0) {

if (timer_laser > 0) { //If laser is active. Choose side of beam to spawn on.
i = randint(0, 1); //Left or right side of beam.
p = randint(laser_y, player_y); //Where will the particle spawn on the y axis.
if (i == 0) { //Left side.
array_laser_particles[f].x = player_x+(9*64);
array_laser_particles[f].y = p;
array_laser_particles[f].timer_despawn = randint(4, 16);
array_laser_particles[f].side = 0;
}
if (i == 1) { //Right side.
array_laser_particles[f].x = player_x+(7*64);
array_laser_particles[f].y = p;
array_laser_particles[f].timer_despawn = randint(4, 16);
array_laser_particles[f].side = 1;
}
} //Is laser active.

array_laser_particles[f].enabled = 1;
break;
} //Is particle enabled.
f += 1;
} //Loop.
/////

e += 1;
}








//Laser 2 particles. The particles to the left of the beam.
if (timer_laser_powerup > 0) {
e = 0;
while (e < 125) { //Spawning 125 laser particles per frame.
/////Spawning particle at the edge of laser beam at random location.
f = 0;
while (f < 10000) {

if (array_laser_particles[f].enabled == 0) {

if (timer_laser > 0) { //If laser is active. Choose side of beam to spawn on.
i = randint(0, 1); //Left or right side of beam.
p = randint(laser_y_2, player_y+(12*64)); //Where will the particle spawn on the y axis.
if (i == 0) { //Left side.
array_laser_particles[f].x = player_x+(-3*64);
array_laser_particles[f].y = p;
array_laser_particles[f].timer_despawn = randint(4, 16);
array_laser_particles[f].side = 0;
}
if (i == 1) { //Right side.
array_laser_particles[f].x = player_x+(-5*64);
array_laser_particles[f].y = p;
array_laser_particles[f].timer_despawn = randint(4, 16);
array_laser_particles[f].side = 1;
}
} //Is laser active.

array_laser_particles[f].enabled = 1;
break;
} //Is particle enabled.
f += 1;
} //Loop.
/////

e += 1;
}
} //Is powerup enabled?













//Laser 3 particles. The particles to the left of the beam.
if (timer_laser_powerup > 0) {
e = 0;
while (e < 125) { //Spawning 125 laser particles per frame.
/////Spawning particle at the edge of laser beam at random location.
f = 0;
while (f < 10000) {

if (array_laser_particles[f].enabled == 0) {

if (timer_laser > 0) { //If laser is active. Choose side of beam to spawn on.
i = randint(0, 1); //Left or right side of beam.
p = randint(laser_y_3, player_y+(12*64)); //Where will the particle spawn on the y axis.
if (i == 0) { //Left side.
array_laser_particles[f].x = player_x+(21*64);
array_laser_particles[f].y = p;
array_laser_particles[f].timer_despawn = randint(4, 16);
array_laser_particles[f].side = 0;
}
if (i == 1) { //Right side.
array_laser_particles[f].x = player_x+(19*64);
array_laser_particles[f].y = p;
array_laser_particles[f].timer_despawn = randint(4, 16);
array_laser_particles[f].side = 1;
}
} //Is laser active.

array_laser_particles[f].enabled = 1;
break;
} //Is particle enabled.
f += 1;
} //Loop.
/////

e += 1;
}
} //Is powerup enabled?






















//Moving particles that have spawned.
f = 0;
while (f < 10000) {
if (array_laser_particles[f].enabled == 1) {

//Counting down despawn timer.
if (array_laser_particles[f].timer_despawn > 0) {
array_laser_particles[f].timer_despawn -= d;
}

//Despawning particle of despawn timer has run out.
if (array_laser_particles[f].timer_despawn == 0 || array_laser_particles[f].timer_despawn == -1) {
array_laser_particles[f].enabled = 0;
}

//If particle is on left side of beam, move it left.
if (array_laser_particles[f].side == 0) {
array_laser_particles[f].x -= 16;
}

//If particle is on right side of beam, move it right.
if (array_laser_particles[f].side == 1) {
array_laser_particles[f].x += 16;
}

} //Is the particle enabled.

f += 1;
}


} //Is game paused.

//Setting target bitmap to draw on.
al_set_target_bitmap(bitmap_gameplay_display);

//Drawing particles.
f = 0;
while (f < 10000) {
if (array_laser_particles[f].enabled == 1) {
al_draw_pixel((float)array_laser_particles[f].x/64, (float)array_laser_particles[f].y/64, al_map_rgba(180, 0, 0, 255));
}
f += 1;
}


}