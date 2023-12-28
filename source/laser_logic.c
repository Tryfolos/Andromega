/////The logic behind the players laser attack.
if (current_cutscene_part == -1) {
if (game_paused == 0) {



//If pressing laser button when we are not already shooting a laser. Activate laser. You also need at least 4 laser energy to use laser, it consumes 4 energy as well.
if (input_laser() == 1) {
if (timer_laser == 0) {



p = 0; //This part determines if the sound effect will be played. If p == 0 no sound will play.
if (upgrade_3 == 0) {
if (player_laser > 3) {
p = 1;
}}
if (upgrade_3 == 1) {
if (player_laser > 1) {
p = 2;
}}


if (p == 1 || p == 2) { //Checking if we have enough laser energy to shoot laser and play sound.
if (timer_laser_powerup == 0) { //Sound effect.
i = 72;
while (i < 74) {
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}
}


if (timer_laser_powerup > 0) { //Sound effect.
i = 74;
while (i < 76) {
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}
}
}



if (upgrade_3 == 0) {

if (player_laser > 3) {
timer_laser = 180;
if (upgrade_3 == 0) {
player_laser -= 4; //Reducing laser stat.
}
if (upgrade_3 == 1) {
player_laser -= 2; //Reducing laser stat.
}
player_shot = 1; //The player has shot a bullet.
}
}

if (upgrade_3 == 1) {

if (player_laser > 1) {
timer_laser = 180;
if (upgrade_3 == 0) {
player_laser -= 4; //Reducing laser stat.
}
if (upgrade_3 == 1) {
player_laser -= 2; //Reducing laser stat.
}
player_shot = 1; //The player has shot a bullet.
}
}



}}

//If laser is


//Counting down laser timer. Timer laser. If powerup is enabled, only reduce timer every second frame. 
if (timer_laser > 0) {
if (timer_laser_powerup == 0) {
timer_laser -= 1;
}
if (timer_laser_powerup > 1) {
if (bin_laser == false) {
timer_laser -= 1;
bin_laser = true;
} else {
if (bin_laser == true) {
bin_laser = false;
}
}
} //Is powerup enabled?
}

//Making sure laser_y doesn't go below 0. For all three lasers.
if (laser_y < 0) {
laser_y = 0;
}
if (laser_y_2 < 0) {
laser_y_2 = 0;
}
if (laser_y_3 < 0) {
laser_y_3 = 0;
}



//Setting laser_y value (the top of the laser beam) based on how far along the laser timer is. 
if (timer_laser < 180) { //Laser moving upwards.
laser_y = player_y - (64*10);
}
if (timer_laser < 179) {
laser_y = player_y - (64*25);
}
if (timer_laser < 178) {
laser_y = player_y - (64*50);
}
if (timer_laser < 177) {
laser_y = player_y - (64*80);
}
if (timer_laser < 176) {
laser_y = player_y - (64*120);
}
if (timer_laser < 175) {
laser_y = player_y - (64*170);
}
if (timer_laser < 174) {
laser_y = player_y - (64*230);
}
if (timer_laser < 173) {
laser_y = player_y - (64*270);
}

if (timer_laser_powerup > 0) {
//Laser 2.
if (timer_laser < 180) { //Laser moving upwards.
laser_y_2 = player_y - (64*10);
}
if (timer_laser < 179) {
laser_y_2 = player_y - (64*25);
}
if (timer_laser < 178) {
laser_y_2 = player_y - (64*50);
}
if (timer_laser < 177) {
laser_y_2 = player_y - (64*80);
}
if (timer_laser < 176) {
laser_y_2 = player_y - (64*120);
}
if (timer_laser < 175) {
laser_y_2 = player_y - (64*170);
}
if (timer_laser < 174) {
laser_y_2 = player_y - (64*230);
}
if (timer_laser < 173) {
laser_y_2 = player_y - (64*270);
}

//Laser 3.
if (timer_laser < 180) { //Laser moving upwards.
laser_y_3 = player_y - (64*10);
}
if (timer_laser < 179) {
laser_y_3 = player_y - (64*25);
}
if (timer_laser < 178) {
laser_y_3 = player_y - (64*50);
}
if (timer_laser < 177) {
laser_y_3 = player_y - (64*80);
}
if (timer_laser < 176) {
laser_y_3 = player_y - (64*120);
}
if (timer_laser < 175) {
laser_y_3 = player_y - (64*170);
}
if (timer_laser < 174) {
laser_y_3 = player_y - (64*230);
}
if (timer_laser < 173) {
laser_y_3 = player_y - (64*270);
}
} //Is laser upgrade active?


if (timer_laser < 9) { //End of the lasers lifecycle it is moving downwards again.
laser_y = player_y - (64*270);
}
if (timer_laser < 8) {
laser_y = player_y - (64*230);
}
if (timer_laser < 7) {
laser_y = player_y - (64*170);
}
if (timer_laser < 6) {
laser_y = player_y - (64*120);
}
if (timer_laser < 5) {
laser_y = player_y - (64*80);
}
if (timer_laser < 4) {
laser_y = player_y - (64*50);
}
if (timer_laser < 3) {
laser_y = player_y - (64*25);
}
if (timer_laser < 2) {
laser_y = player_y - (64*10);
}

if (timer_laser_powerup > 0) {
//Laser 2.
if (timer_laser < 9) { //End of the lasers lifecycle it is moving downwards again.
laser_y_2 = player_y - (64*270);
}
if (timer_laser < 8) {
laser_y_2 = player_y - (64*230);
}
if (timer_laser < 7) {
laser_y_2 = player_y - (64*170);
}
if (timer_laser < 6) {
laser_y_2 = player_y - (64*120);
}
if (timer_laser < 5) {
laser_y_2 = player_y - (64*80);
}
if (timer_laser < 4) {
laser_y_2 = player_y - (64*50);
}
if (timer_laser < 3) {
laser_y_2 = player_y - (64*25);
}
if (timer_laser < 2) {
laser_y_2 = player_y - (64*10);
}

//Laser 3.
if (timer_laser < 9) { //End of the lasers lifecycle it is moving downwards again.
laser_y_3 = player_y - (64*270);
}
if (timer_laser < 8) {
laser_y_3 = player_y - (64*230);
}
if (timer_laser < 7) {
laser_y_3 = player_y - (64*170);
}
if (timer_laser < 6) {
laser_y_3 = player_y - (64*120);
}
if (timer_laser < 5) {
laser_y_3 = player_y - (64*80);
}
if (timer_laser < 4) {
laser_y_3 = player_y - (64*50);
}
if (timer_laser < 3) {
laser_y_3 = player_y - (64*25);
}
if (timer_laser < 2) {
laser_y_3 = player_y - (64*10);
}
} //Is the laser upgrade active?

//If timer laser is 0, set laser_y to the same value as player y to make it invisible.
if (timer_laser == 0) {
laser_y = player_y;
}
if (timer_laser == 0) { //Laser 2.
laser_y_2 = player_y;
}
if (timer_laser == 0) { //Laser 3.
laser_y_3 = player_y;
}


//Updating hitbox of laser.
if (timer_laser > 0) {
hitbox_laser.x1 = player_x+(4*64);
hitbox_laser.y1 = laser_y;
hitbox_laser.x2 = player_x+(12*64);
hitbox_laser.y2 = player_y;
} else {
hitbox_laser.x1 = -1000;
hitbox_laser.y1 = -1000;
hitbox_laser.x2 = -500;
hitbox_laser.y2 = -500;
}


if (timer_laser > 0) { //Laser 2.
hitbox_laser_2.x1 = player_x+(4*64)-(12*64);
hitbox_laser_2.y1 = laser_y_2 + (10*64);
hitbox_laser_2.x2 = player_x+(12*64)-(12*64);
hitbox_laser_2.y2 = player_y + (10*64);
} else {
hitbox_laser_2.x1 = -1000;
hitbox_laser_2.y1 = -1000;
hitbox_laser_2.x2 = -500;
hitbox_laser_2.y2 = -500;
}

if (timer_laser > 0) { //Laser 3.
hitbox_laser_3.x1 = player_x+(4*64) + (12*64);
hitbox_laser_3.y1 = laser_y_3 + (10*64);
hitbox_laser_3.x2 = player_x+(12*64) + (12*64);
hitbox_laser_3.y2 = player_y + (10*64);
} else {
hitbox_laser_3.x1 = -1000;
hitbox_laser_3.y1 = -1000;
hitbox_laser_3.x2 = -500;
hitbox_laser_3.y2 = -500;
}


//Limiting laser stat to 10.
if (player_laser > 10) {
player_laser = 10;
}

} //Is the game paused or not?
} //Are we in game?