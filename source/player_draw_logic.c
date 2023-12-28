//Only run this code when in gameplay mode. //Only run logic if cutscene has finished. 
if (current_cutscene_part == -1) {

//Setting drawing target.
al_set_target_bitmap(bitmap_gameplay_display);

//Counting down invincibility timer.
if (game_paused == 0) {
if (timer_invincible > 0) {
timer_invincible -= 1;
}
}


//Can't move player if game is paused.
if (game_paused == 0) {

/////Make sure player can't move if durability is 0.
if (player_durability > 0) {

//Moving the player can only happen after the players "intro flight".
if (timer_entering == 0) {


//Changing movespeeds depending on if hailstorm is active or not.
if (timer_hailstorm_duration > 0) {
player_movespeed = 128-32;
} else {
player_movespeed = 128-16;
}


//Moving player to the left.
if (input_left() == 1) {
player_x -= player_movespeed;
}

//Moving player to the right.
if (input_right() == 1) {
player_x += player_movespeed;
}

//Moving player up.
if (input_up() == 1) {
player_y -= player_movespeed;
}

//Moving player down.
if (input_down() == 1) {
player_y += player_movespeed;
}
}//Entering timer.

}//Player durability check.


//Counting down entrance/entering timer.
if (timer_entering > 0) {
timer_entering -= 1;
}

//Moving player upwards during entering timer.
if (timer_entering > 0) {
player_y -= 64;
}

//Counting down plasma cooldown.
timer_plasma_cooldown -= 1;


//Spawning bullet when pressing fire button. Ship also has to be alive to shoot.
if (timer_laser == 0) {
if (player_durability > 0) {
if (input_shoot() == 1) {
if (timer_no_shooting == 0) {
if (triplefire_enabled == 0) {




//al_play_sample_instance(instance_player_fire);


f = 0;
while (f < 1000) {

if (timer_plasma_cooldown <= 0) {
if (array_player_bullet[f].enabled == 0) {
array_player_bullet[f].enabled = 1;
array_player_bullet[f].x = player_x + (((7*64)));
array_player_bullet[f].y = player_y;
array_player_bullet[f].hitbox.x1 = array_player_bullet[f].x;
array_player_bullet[f].hitbox.y1 = array_player_bullet[f].y;
array_player_bullet[f].hitbox.x2 = array_player_bullet[f].x + 2*64;
array_player_bullet[f].hitbox.y2 = array_player_bullet[f].y + 5*64;
array_player_bullet[f].x_speed = 0;
timer_plasma_cooldown = 45-(player_plasma*4);
if (upgrade_4 == 0) {
player_ammo -= 4;
} else {
player_ammo -= 1;
}
player_shot = 1; //The player has shot a bullet. 

//Gun heat.
gun_heat += 10;


//Playing sound effect for shooting.
i = 0;
while (i < 9) { //Range for player fire 0 - 8.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) { //If sample is not playing, play it. 
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}


break;
}}

f += 1;
}

} //Triplefire powerup = 0.



if (triplefire_enabled == 1) { //Triplefire is enabled.


f = 0;
while (f < 1000) {
if (timer_plasma_cooldown <= 0) {
if (array_player_bullet[f].enabled == 0) {
if (array_player_bullet[f+1].enabled == 0) {
if (array_player_bullet[f+2].enabled == 0) {

array_player_bullet[f].enabled = 1;
array_player_bullet[f].x = player_x + (((7*64)));
array_player_bullet[f].y = player_y;
array_player_bullet[f].hitbox.x1 = array_player_bullet[f].x;
array_player_bullet[f].hitbox.y1 = array_player_bullet[f].y;
array_player_bullet[f].hitbox.x2 = array_player_bullet[f].x + 2*64;
array_player_bullet[f].hitbox.y2 = array_player_bullet[f].y + 5*64;
array_player_bullet[f].x_speed = -48;
timer_plasma_cooldown = 45-(player_plasma*4);
if (upgrade_4 == 0) {
player_ammo -= 4;
} else {
player_ammo -= 1;
}
player_shot = 1; //The player has shot a bullet. 

array_player_bullet[f+1].enabled = 1;
array_player_bullet[f+1].x = player_x + (((7*64)));
array_player_bullet[f+1].y = player_y;
array_player_bullet[f+1].hitbox.x1 = array_player_bullet[f].x;
array_player_bullet[f+1].hitbox.y1 = array_player_bullet[f].y;
array_player_bullet[f+1].hitbox.x2 = array_player_bullet[f].x + 2*64;
array_player_bullet[f+1].hitbox.y2 = array_player_bullet[f].y + 5*64;
array_player_bullet[f+1].x_speed = 0;
timer_plasma_cooldown = 45-(player_plasma*4);


array_player_bullet[f+2].enabled = 1;
array_player_bullet[f+2].x = player_x + (((7*64)));
array_player_bullet[f+2].y = player_y;
array_player_bullet[f+2].hitbox.x1 = array_player_bullet[f].x;
array_player_bullet[f+2].hitbox.y1 = array_player_bullet[f].y;
array_player_bullet[f+2].hitbox.x2 = array_player_bullet[f].x + 2*64;
array_player_bullet[f+2].hitbox.y2 = array_player_bullet[f].y + 5*64;
array_player_bullet[f+2].x_speed = 48;
timer_plasma_cooldown = 45-(player_plasma*4);

//Gun heat.
gun_heat += 10;


//Playing sound effect for shooting.
i = 0;
while (i < 8) { //Range for player fire 0 - 8.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) { //If sample is not playing, play it. 
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}



f += 1;
continue;
}
}}}

f += 1;
}

} //Triplefire powerup = 1.



//If ammo variable is 0; Reset it to max value and decrease plasma stat by 1.
if (player_ammo == 0) {
player_ammo = 200;
player_plasma -= 1;
}

//Making sure player plasma can't go below 1.
if (player_plasma < 1) {
player_plasma = 1;
}



} //Checkin no shoot timer. timer_no_shooting.
} //Checking shoot input.
} //Checking ships durability.
} //Checking if laser is active.


//Reducing gun heat over time. Gun heat timer. The speed of this depends on if an upgrade is active or not.
//This doesn't run if you are shooting.
/*
if (input_shoot() == 0) {
timer_gun_heat -= 1;
if (timer_gun_heat < 1) {
timer_gun_heat = 5;
gun_heat -= ((float)gun_heat/100);
}
}
*/
if (upgrade_0 == 0) {
if (input_shoot() == 0) {
if (timer_no_shooting == 0) {
if (gun_heat > 250) {
gun_heat -= 1;
}
if (gun_heat > 750) {
gun_heat -= 1;
}
}
} //If gun is overheated it wont start cooling for the duration of timer. timer_no_shooting.
} //Is upgrade active?

if (upgrade_0 == 1) {
if (input_shoot() == 0) {
if (timer_no_shooting == 0) {
if (gun_heat > 250) {
gun_heat -= 2;
}
if (gun_heat > 750) {
gun_heat -= 2;
}
}
} //If gun is overheated it wont start cooling for the duration of timer. timer_no_shooting.
} //Is upgrade active?

//Clamping/limiting gun heat so it can't go below 250 or above 1000 (For some reason).
if (gun_heat > 1000) {
gun_heat = 1000;
timer_no_shooting = 90; //Player won't be able to shoot for 90 frames (1.5 seconds).
gun_heat_background_color = 255;
}
if (gun_heat < 250) {
gun_heat = 250;
}

//Counting down timer_no_shooting.
if (timer_no_shooting > 0) {
timer_no_shooting -= 1;
} else {
gun_heat_background_color = 0;
}


//Pressing number keys to recharge the energy bars on the fly so you don't have to go into the pause meny.
//The purpose of this is to not break the flow of the game every time you need to spend energy recharging something.
if (press_1) { //Recharging shield.
if (player_shield < 10) {
if (player_energy > 0) {
player_energy -= 1;
player_shield += 1;
player_shield_offset = -1; 
timer_player_shield_offset = 6;
player_shield_flash_count = 11;
play_sound_charge_energy
}
}
}
if (press_2) { //Recharging laser.
if (player_laser < 10) {
if (player_energy > 0) {
player_energy -= 1;
player_laser += 1;
player_laser_offset = -1; 
timer_player_laser_offset = 6;
player_laser_flash_count = 11;
play_sound_charge_energy
}
}
}
if (press_3) { //Recharging plasma.
if (player_plasma < 10) {
if (player_energy > 0) {
player_energy -= 1;
player_plasma += 1;
player_ammo = 200;
play_sound_charge_energy
if (player_plasma == 10) { //An additional 50 ammo will be added if we max out the bar.
player_ammo += 200;
}
player_plasma_offset = -1; 
timer_player_plasma_offset = 6;
player_plasma_flash_count = 11;
}
}
}

if (timer_invincible == 0) {

//Getting hit by enemy bullet. How much damage you take depends on what bullet type it is.
//If the player has more than 0 shield left only the shield will take damage and not the ship durability.

f = 0;
while (f < 100) {
if (array_enemy_bullet[f].enabled == 1) {

//Getting hit by bullet type 0.
if (array_enemy_bullet[f].bullet_type == 0) {
if (blink_count == 0 & timer_shield_hurt == 0) { //Invincibility when player has recently been hurt.
if (hitbox_colliding(array_enemy_bullet[f].hitbox, hitbox_player) == 1) {

array_enemy_bullet[f].enabled = 0;


//Devtest.
//print.f("HIT BY RED BULLET!\n");


if (timer_death_powerup == 0) {
if (player_shield > 0) {
player_shield -= 1;
timer_shield_hurt = 20; //The hurt version of the player shield will be shown for 20 frames.
play_sound_player_hurt
} else {
blink_count = 9;
player_durability -= 1;
play_sound_player_hurt
}
} //Is death powerup enabled?

break;
}
} //Invincibility check.
} //End of getting hit by bullet type 0.

}
f += 1;
} //End of while loop.


//Getting hit by plasma ball (hailstorm).
f = 0;
while (f < 100) {
if (array_plasma_hail[f].enabled == 1) {

if (blink_count == 0 & timer_shield_hurt == 0) { //Invincibility when player has recently been hurt.
if (hitbox_colliding(array_plasma_hail[f].hitbox, hitbox_player) == 1) {

array_plasma_hail[f].enabled = 0;
array_plasma_hail[f].x = -1000;
array_plasma_hail[f].y = -1000;

//Devtest.
//print.f("HIT BY PLASMA HAIL!\n");

if (timer_death_powerup == 0) {
if (player_shield > 0) {
player_shield -= 1;
timer_shield_hurt = 20; //The hurt version of the player shield will be shown for 20 frames.
play_sound_player_hurt
} else {
blink_count = 9;
player_durability -= 1;
play_sound_player_hurt
}}

break;
}
} //Invincibility check.

}
f += 1;
} //End of while loop.




//Getting hit by enemy bullet. How much damage you take depends on what bullet type it is.
//If the player has more than 0 shield left only the shield will take damage and not the ship durability.
f = 0;
while (f < 1000) {
if (array_enemy_bullet[f].enabled == 1) {

//Getting hit by bullet type 1.
if (array_enemy_bullet[f].bullet_type == 1) {
if (blink_count == 0 & timer_shield_hurt == 0) { //Invincibility when player has recently been hurt.
if (hitbox_colliding(array_enemy_bullet[f].hitbox, hitbox_player) == 1) {

array_enemy_bullet[f].enabled = 0;
array_enemy_bullet[f].x = -1000;
array_enemy_bullet[f].y = -1000;

//Devtest.
//print.f("HIT BY TAZER SHOT!\n");


if (timer_death_powerup == 0) {
if (player_shield > 0) {
player_shield -= 3;
timer_shield_hurt = 20; //The hurt version of the player shield will be shown for 20 frames.
play_sound_player_hurt
} else {
blink_count = 9;
player_energy -= 3;
play_sound_player_hurt
}
}

break;
}
} //Invincibility check.
} //End of getting hit by bullet type 1.

}
f += 1;
} //End of while loop.



//Touching enemy makes player take damage.
f = 0;
while (f < 1000) {
if (blink_count == 0 & timer_shield_hurt == 0) {
if (hitbox_colliding(hitbox_player, array_enemy[f].hitbox) == 1) {

if (array_enemy[f].enabled == 1) {

//Devtest.
//print.f("HIT BY RED ENEMY OR TAZER!\n");



if (timer_death_powerup == 0) {
if (player_shield > 0) {
player_shield -= 1;
timer_shield_hurt = 20; //The hurt version of the player shield will be shown for 20 frames.
play_sound_player_hurt
} else {
blink_count = 9;
player_durability -= 1;
play_sound_player_hurt
}}

} //Is enemy enabled check.
} //Are we colliding check.
} //Are we in blinking state.
f += 1;
}


//Touching invader enemy makes player take damage. 
f = 0;
while (f < 5) {
if (blink_count == 0 & timer_shield_hurt == 0) {
if (hitbox_colliding(hitbox_player, array_invader[f].hitbox) == 1) {

if (array_invader[f].enabled == 1) {

//Devtest.
//print.f("HIT BY INVADER!\n");

if (timer_death_powerup == 0) {
if (player_shield > 0) {
player_shield -= 1;
timer_shield_hurt = 20; //The hurt version of the player shield will be shown for 20 frames.
play_sound_player_hurt
} else {
blink_count = 9;
player_durability -= 1;
play_sound_player_hurt
}}

} //Is enemy enabled check.
} //Are we colliding check.
} //Are we in blinking state.
f += 1;
}


//Touching shield enemy makes player take damage.
f = 0;
while (f < 100) {
if (blink_count == 0 & timer_shield_hurt == 0) {
if (hitbox_colliding(hitbox_player, array_enemy_shielder[f].hitbox) == 1) {

if (array_enemy_shielder[f].enabled == 1) {


//Devtest.
//print.f("HIT BY SHIELDER!\n");

if (timer_death_powerup == 0) {
if (player_shield > 0) {
player_shield -= 1;
timer_shield_hurt = 20; //The hurt version of the player shield will be shown for 20 frames.
play_sound_player_hurt
} else {
blink_count = 9;
player_durability -= 1;
play_sound_player_hurt
}}

} //Is enemy enabled check.
} //Are we colliding check.
} //Are we in blinking state.
f += 1;
}



//Touching small enemy makes player take damage.
f = 0;
while (f < 100) {
if (blink_count == 0 & timer_shield_hurt == 0) {
if (hitbox_colliding(hitbox_player, array_small_enemy[f].hitbox) == 1) {

if (array_small_enemy[f].enabled == 1) {


//Devtest.
//print.f("HIT BY SMALL ENEMY!\n");

if (timer_death_powerup == 0) {
if (player_shield > 0) {
player_shield -= 1;
timer_shield_hurt = 20; //The hurt version of the player shield will be shown for 20 frames.
play_sound_player_hurt
} else {
blink_count = 9;
player_durability -= 1;
play_sound_player_hurt
}}

} //Is enemy enabled check.
} //Are we colliding check.
} //Are we in blinking state.
f += 1;
}

} //Is Invincibility timer on?


//Limit player durability to 0 so it wont go into the negatives.
if (player_durability < 0) {
player_durability = 0;
}

//Limit/clamp player energy variable.
if (player_energy < 0) {
player_energy = 0;
}

//Limit player stats so they can't go below 0.
if (player_durability < 0) {
player_durability = 0;
}
if (player_shield < 0) {
player_shield = 0;
}
if (player_laser < 0) {
player_laser = 0;
}
if (player_plasma < 0) {
player_plasma = 0;
}



//Touching energy cell pickup gives energy cell (or multiple cells if upgrade is active) and despawns pickup.
if (player_durability != 0) {
if (upgrade_2 == 0) {
f = 0;
while (f < 1024) {

if (array_energy_cell_pickup[f].enabled == 1) {
if (hitbox_colliding(array_energy_cell_pickup[f].hitbox, hitbox_player) == 1) {
array_energy_cell_pickup[f].enabled = 0;
player_energy += 1;
i = 76;
while (i < 84) { //Playing pickup sound.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) { //If sample is not playing, play it. 
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}
}
} //Enabled check.

f += 1;
} //End of while loop.
}
if (upgrade_2 == 1) {
f = 0;
while (f < 1024) {

if (array_energy_cell_pickup[f].enabled == 1) {
if (hitbox_colliding(array_energy_cell_pickup[f].hitbox, hitbox_player) == 1) {
array_energy_cell_pickup[f].enabled = 0;
player_energy += 3;
i = 76;
while (i < 84) { //Playing pickup sound.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) { //If sample is not playing, play it. 
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}
}
} //Enabled check.

f += 1;
} //End of while loop.
}


//Laser pickup.
f = 0;
while (f < 1000) {

if (array_laser_pickup[f].enabled == 1) {
if (hitbox_colliding(array_laser_pickup[f].hitbox, hitbox_player) == 1) {
array_laser_pickup[f].enabled = 0;
timer_laser_powerup = 60*10;
//player_laser += 4;

i = 76;
while (i < 84) { //Playing pickup sound.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) { //If sample is not playing, play it. 
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}

}
} //Enabled check.

f += 1;
} //End of while loop.


//Triplefire powerup pickup.
f = 0;
while (f < 1000) {

if (array_triplefire_pickup[f].enabled == 1) {
if (hitbox_colliding(array_triplefire_pickup[f].hitbox, hitbox_player) == 1) {
array_triplefire_pickup[f].enabled = 0;
array_triplefire_pickup[f].hitbox.x1 = -1000;
array_triplefire_pickup[f].hitbox.y1 = -1000;
array_triplefire_pickup[f].hitbox.x2 = -500;
array_triplefire_pickup[f].hitbox.y2 = -500;
triplefire_enabled = 1;
timer_triplefire_enabled = 60*10;

i = 76;
while (i < 84) { //Playing pickup sound.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) { //If sample is not playing, play it. 
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}

}
} //Enabled check.

f += 1;
} //End of while loop.



//Death powerup pickup.
f = 0;
while (f < 100) {

if (array_death_pickup[f].enabled == 1) {
if (hitbox_colliding(array_death_pickup[f].hitbox, hitbox_player) == 1) {
array_death_pickup[f].enabled = 0;
array_death_pickup[f].hitbox.x1 = -1000;
array_death_pickup[f].hitbox.y1 = -1000;
array_death_pickup[f].hitbox.x2 = -500;
array_death_pickup[f].hitbox.y2 = -500;
timer_death_powerup = 60*20;

i = 76;
while (i < 84) { //Playing pickup sound.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) { //If sample is not playing, play it. 
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}

}
} //Enabled check.

f += 1;
} //End of while loop.
} //Making sure player is alive (durability check).

//Triplefire powerup will run out. Timer for powerup.
if (triplefire_enabled == 1) {
if (timer_triplefire_enabled > 0) {
timer_triplefire_enabled -= 1;
}}

//When triplefire powerup runs out the powerup will be disabled (not enabled anymore).
if (timer_triplefire_enabled == 0) {
triplefire_enabled = 0;
}

//Death powerup timer count.
if (timer_death_powerup > 0) {
timer_death_powerup -= 1;
}

//Laser powerup timer count.
if (timer_laser_powerup > 0) {
timer_laser_powerup -= 1;
}

//Passive score. Score only increases if player has health left. The rate of passive score is dependant on if an upgrade is active or not.
if (timer_score > 0) {
timer_score -= 1;
} else {
timer_score = 45;
if (player_durability > 0) {
score += 1;
}
}



}//Is game paused check.

//If bullet has left screen. Despawn it. 
f = 0;
while (f < 1000) {

if (array_player_bullet[f].enabled == 1) {
if (array_player_bullet[f].y < -5) {
array_player_bullet[f].enabled = 0;
}}

f += 1;
}

//Clamping movement left right up and down so the player doesn't go out of frame.
if (player_durability > 0) {
if (timer_entering == 0) {
if (player_x < 0) {
player_x = 0;
}
if (player_x > 17280-1152) {
player_x = 17280-1152;
}
if (player_y < 0) {
player_y = 0;
}
if (player_y > 17280-1152) {
player_y = 17280-1152;
}
} //Entrance timer.
} //Checking if player has health left.

//Creating char representation of energy cell integer value.
sprintf(text_player_energy, "%d", player_energy);

//Updating players hitbox based on player position and if shield is active or not.
if (player_shield < 1) {
hitbox_player.x1 = player_x+(64*6);
hitbox_player.y1 = player_y+(64*6);
hitbox_player.x2 = player_x+(64*12);
hitbox_player.y2 = player_y+(64*12);
}
if (player_shield > 0) {
hitbox_player.x1 = player_x+(64*4);
hitbox_player.y1 = player_y+(64*4);
hitbox_player.x2 = player_x+(64*14);
hitbox_player.y2 = player_y+(64*14);
}


//Blinking timer.
if (timer_blinking == 0) {
if (blink_count > 0) {
timer_blinking = 8;
blink_count -= 1;
visible = !visible;
}}
if (blink_count > 0) {
timer_blinking -= 1;
}
if (blink_count == 0) { //Making sure player is visible is we are no longer supposed to be blinking.
visible = 1; 
}


//Timer hurt shield.
if (timer_shield_hurt > 0) {
timer_shield_hurt -= 1;
}



//If player durability is 0 the ship has been destroyed and should therefore not be seen.
//Spawning particle (explosion).
if (player_durability == 0) {
if (player_x > -100) { // This makes sure that this code snipped only runs once so that we can spawn a particle explosion that won't go on every frame.

visible = 0;

choose_death_quote = 1; //Game will enable quote choosing. The choice of death quote happens in the game over logic file.


i = 48;
while (i < 64) { //Big explosion.
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}
i += 1;
}

i = 0;
while (i < 100) {
f = 0;
while (f < 1000) {
if (array_particle[f].enabled == 0) {
array_particle[f].enabled = 1;
array_particle[f].x = player_x + (randint(0, 16)*64);
array_particle[f].y = player_y + (randint(0, 16)*64);
array_particle[f].x_speed = randint(-48, 48);
array_particle[f].y_speed = randint(-48, 48);
array_particle[f].r = randint(175*64, 255*64);
array_particle[f].g = array_particle[f].r;
array_particle[f].b = 0;
break;
}
f += 1;
}

i += 1;
}

i = 0;
while (i < 100) {
f = 0;
while (f < 1000) {
if (array_particle[f].enabled == 0) {
array_particle[f].enabled = 1;
array_particle[f].x = player_x + (randint(0, 16)*64);
array_particle[f].y = player_y + (randint(0, 16)*64);
array_particle[f].x_speed = randint(-32, 32);
array_particle[f].y_speed = randint(-64, 64);
array_particle[f].r = randint(175*64, 255*64);
array_particle[f].g = array_particle[f].r;
array_particle[f].b = 0;
break;
}
f += 1;
}

i += 1;
}

i = 0;
while (i < 100) {
f = 0;
while (f < 1000) {
if (array_particle[f].enabled == 0) {
array_particle[f].enabled = 1;
array_particle[f].x = player_x + (randint(0, 16)*64);
array_particle[f].y = player_y + (randint(0, 16)*64);
array_particle[f].x_speed = randint(-64, 64);
array_particle[f].y_speed = randint(-32, 32);
array_particle[f].r = randint(175*64, 255*64);
array_particle[f].g = array_particle[f].r;
array_particle[f].b = 0;
break;
}
f += 1;
}

i += 1;
}

player_x = -1000;
player_y = -1000;


hitbox_player.x1 = -9000;
hitbox_player.y1 = -9000;
hitbox_player.x2 = -8900;
hitbox_player.y2 = -8900;

//Making sure certain sounds can not be player while the player is dead.




}
} //Player health/durability check.


//Drawing player.
if (visible == 1) {
al_draw_bitmap(bitmap_player, player_x/64, player_y/64, 0);
}

//If laser powerup is active. Draw laser addons, extra guns to each side of the ship.
if (timer_laser_powerup > 0) {
al_draw_bitmap(bitmap_player_laser_addon, (player_x/64) - 5, (player_y/64) + 11, 0);
al_draw_bitmap(bitmap_player_laser_addon, (player_x/64) + 18, (player_y/64) + 11, 0);
}

//Reducing the amount of shield that can be seen once shield stat is null.
if (player_shield < 1) {

if (timer_shield_visibility < 1) {
timer_shield_visibility = 7;
shield_visibility -= 1;
}
timer_shield_visibility -= 1;
}

//Making sure shield visibility doesn't go below 0.
if (shield_visibility < 0) {
shield_visibility = 0;
}

//If shield is above 0. Increase shield visibility variable to default (5), this will make sure the "disappearing animation" can happen over and over again.
if (player_shield > 0) {
shield_visibility = 5;
timer_shield_visibility = 0;
}

//If shield is 0, draw certain portion of hurt shield based on variable. This variable will change creating a animation.
if (player_shield < 1) {
if (shield_visibility == 4) {
al_draw_bitmap_region(bitmap_player_shield_hurt, 0, 0, 20, 24, (player_x-(2*64))/64, (player_y-(2*64))/64, 0);
}
if (shield_visibility == 3) {
al_draw_bitmap_region(bitmap_player_shield_hurt, 0, 6, 20, 18, (player_x-(2*64))/64, ((player_y-(2*64))+(6*64))/64, 0);
}
if (shield_visibility == 2) {
al_draw_bitmap_region(bitmap_player_shield_hurt, 0, 12, 20, 12, (player_x-(2*64))/64, ((player_y-(2*64))+(12*64))/64, 0);
}
if (shield_visibility == 1) {
al_draw_bitmap_region(bitmap_player_shield_hurt, 0, 18, 20, 6, (player_x-(2*64))/64, ((player_y-(2*64))+(18*64))/64, 0);
}
}


//Drawing player shield if player has more than 0 in the shield stat.
if (timer_death_powerup == 0) { //Regular shield.
if (player_shield > 0) {
if (timer_shield_hurt == 0) {
al_draw_bitmap(bitmap_player_shield, (player_x-(2*64))/64, (player_y-(2*64))/64, 0);
} else {
al_draw_bitmap(bitmap_player_shield_hurt, (player_x-(2*64))/64, (player_y-(2*64))/64, 0);
}
}
}
if (timer_death_powerup > 0) { //Supershield, death powerup.
al_draw_bitmap(bitmap_player_supershield, (player_x-(2*64))/64, (player_y-(2*64))/64, 0);
}

//Devtest.
if (draw_hitboxes == 1) {
al_draw_rectangle(hitbox_player.x1/64, hitbox_player.y1/64, hitbox_player.x2/64, hitbox_player.y2/64, al_map_rgb(255, 0, 255), 1);
}


}//Checking if cutscene is over.