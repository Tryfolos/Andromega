//
if (current_cutscene_part == -1) {
if (game_paused == 0) {

//Devtest.
//difficulty = 11;

//Picking random numbers for spawning ships depending on how far along we are in the level.
if (difficulty == 0) {
random_enemy_0_spawn = randint(0, 300); //Single shot simple enemy.
random_enemy_1_spawn = 1; //Tazer enemy.
random_enemy_2_spawn = 1; //Shielding enemy.
random_enemy_3_spawn = 1; //Invader.
random_enemy_4_spawn = randint(0, 500); //Small enemy that doesn't shoot.
}
if (difficulty == 1) {
random_enemy_0_spawn = randint(0, 250); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 900); //Tazer enemy.
random_enemy_2_spawn = 1; //Shielding enemy.
random_enemy_3_spawn = 1; //Invader.
random_enemy_4_spawn = randint(0, 400); //Small enemy that doesn't shoot.
}
if (difficulty == 2) {
random_enemy_0_spawn = randint(0, 200); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 800); //Tazer enemy.
random_enemy_2_spawn = 1; //Shielding enemy.
random_enemy_3_spawn = 1; //Invader.
random_enemy_4_spawn = randint(0, 300); //Small enemy that doesn't shoot.
}
if (difficulty == 3) {
random_enemy_0_spawn = randint(0, 190); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 750); //Tazer enemy.
random_enemy_2_spawn = randint(0, 1000); //Shielding enemy.
random_enemy_3_spawn = 1; //Invader.
random_enemy_4_spawn = randint(0, 290); //Small enemy that doesn't shoot.
}
if (difficulty == 4) {
random_enemy_0_spawn = randint(0, 180); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 700); //Tazer enemy.
random_enemy_2_spawn = randint(0, 1000); //Shielding enemy.
random_enemy_3_spawn = randint(0, 450); //Invader.
random_enemy_4_spawn = randint(0, 280); //Small enemy that doesn't shoot.
}
if (difficulty == 5) {
random_enemy_0_spawn = randint(0, 170); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 650); //Tazer enemy.
random_enemy_2_spawn = randint(0, 1000); //Shielding enemy.
random_enemy_3_spawn = randint(0, 425); //Invader.
random_enemy_4_spawn = randint(0, 270); //Small enemy that doesn't shoot.
}
if (difficulty == 6) {
random_enemy_0_spawn = randint(0, 160); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 600); //Tazer enemy.
random_enemy_2_spawn = randint(0, 1000); //Shielding enemy.
random_enemy_3_spawn = randint(0, 400); //Invader.
random_enemy_4_spawn = randint(0, 260); //Small enemy that doesn't shoot.
}
if (difficulty == 7) {
random_enemy_0_spawn = randint(0, 150); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 675); //Tazer enemy.
random_enemy_2_spawn = randint(0, 1000); //Shielding enemy.
random_enemy_3_spawn = randint(0, 375); //Invader.
random_enemy_4_spawn = randint(0, 250); //Small enemy that doesn't shoot.
}
if (difficulty == 8) {
random_enemy_0_spawn = randint(0, 140); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 650); //Tazer enemy.
random_enemy_2_spawn = randint(0, 1000); //Shielding enemy.
random_enemy_3_spawn = randint(0, 350); //Invader.
random_enemy_4_spawn = randint(0, 240); //Small enemy that doesn't shoot.
}
if (difficulty == 9) {
random_enemy_0_spawn = randint(0, 130); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 625); //Tazer enemy.
random_enemy_2_spawn = randint(0, 1000); //Shielding enemy.
random_enemy_3_spawn = randint(0, 325); //Invader.
random_enemy_4_spawn = randint(0, 230); //Small enemy that doesn't shoot.
}
if (difficulty == 10) {
random_enemy_0_spawn = randint(0, 120); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 600); //Tazer enemy.
random_enemy_2_spawn = randint(0, 1000); //Shielding enemy.
random_enemy_3_spawn = randint(0, 300); //Invader.
random_enemy_4_spawn = randint(0, 220); //Small enemy that doesn't shoot.
}
if (difficulty == 11) {
random_enemy_0_spawn = randint(0, 110); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 575); //Tazer enemy.
random_enemy_2_spawn = randint(0, 1000); //Shielding enemy.
random_enemy_3_spawn = randint(0, 275); //Invader.
random_enemy_4_spawn = randint(0, 200); //Small enemy that doesn't shoot.
}
if (difficulty == 12) {
random_enemy_0_spawn = randint(0, 100); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 550); //Tazer enemy.
random_enemy_2_spawn = randint(0, 900); //Shielding enemy.
random_enemy_3_spawn = randint(0, 275); //Invader.
random_enemy_4_spawn = randint(0, 200); //Small enemy that doesn't shoot.
}
if (difficulty == 13) {
random_enemy_0_spawn = randint(0, 90); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 500); //Tazer enemy.
random_enemy_2_spawn = randint(0, 900); //Shielding enemy.
random_enemy_3_spawn = randint(0, 250); //Invader.
random_enemy_4_spawn = randint(0, 200); //Small enemy that doesn't shoot.
}
if (difficulty == 14) {
random_enemy_0_spawn = randint(0, 75); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 450); //Tazer enemy.
random_enemy_2_spawn = randint(0, 800); //Shielding enemy.
random_enemy_3_spawn = randint(0, 225); //Invader.
random_enemy_4_spawn = randint(0, 200); //Small enemy that doesn't shoot.
}
if (difficulty == 15) {
random_enemy_0_spawn = randint(0, 60); //Single shot simple enemy.
random_enemy_1_spawn = randint(0, 400); //Tazer enemy.
random_enemy_2_spawn = randint(0, 800); //Shielding enemy.
random_enemy_3_spawn = randint(0, 200); //Invader.
random_enemy_4_spawn = randint(0, 200); //Small enemy that doesn't shoot.
}


//Counting down delay timer. Enemies don't spawn before this timer has run out.
if (timer_spawn_delay > 0) {
timer_spawn_delay -= 1;
}


//If there is a hailstorm, make sure no enemies spawn. 
if (timer_hailstorm_start < (60*3) || timer_enemy_small_spawn_delay > 0 || timer_spawn_delay > 0) {
random_enemy_0_spawn = 1;
random_enemy_1_spawn = 1;
random_enemy_2_spawn = 1;
random_enemy_3_spawn = 1;
random_enemy_4_spawn = 1;
}

//Starting timer that makes it so small enemy can't spawn anymore. 
if (random_enemy_4_spawn == 0) {
timer_enemy_small_spawn_delay = 90; //1.5 seconds.
}


//If small enemy formation has spawned recently, don't spawn it again.
if (timer_enemy_small_spawn_delay > 0) {
timer_enemy_small_spawn_delay -= 1;
}



//Invader will spawn with 10% certainty each frame after 60 minutes unless in hailstorm.
if (progression > 60*60*25) {
if (timer_hailstorm_start > 60*4) {
random_enemy_3_spawn = randint(0,9);
}}



//Spawning enemies depending on the random integers chosen above. 
if (random_enemy_0_spawn == 0) { //If we get lucky with random number generation we will spawn an enemy. 

f = 0;
while (f < 100) {


if (array_enemy[f].enabled == 0) {
array_enemy[f].enabled = 1;
array_enemy[f].x = randint(0, 252*64);
array_enemy[f].y = -16*64;
array_enemy[f].hitbox.x1 = 1000*1000;
array_enemy[f].hitbox.y1 = 1000*1000;
array_enemy[f].hitbox.x2 = 1000*1002;
array_enemy[f].hitbox.y2 = 1000*1002;
array_enemy[f].behaviour = 0;
array_enemy[f].age = 0;
array_enemy[f].frame = 0;
array_enemy[f].speedchange = 1;
array_enemy[f].health = 2;
array_enemy[f].random_0 = randint(32, 96);
array_enemy[f].speed_x = 0;
array_enemy[f].speed_y = 0;
array_enemy[f].timer_no_bound_y = 50;
array_enemy[f].timer_no_bound_x = 0;
break;
}
f += 1;
}


} //Enemy 0 spawn.



if (random_enemy_1_spawn == 0) { //If we get lucky with random number generation we will spawn an enemy. 

f = 0;
while (f < 100) {


if (array_enemy[f].enabled == 0) {
array_enemy[f].enabled = 1;
array_enemy[f].x = randint(0, 247*64);
array_enemy[f].y = -31*64;
array_enemy[f].hitbox.x1 = 1000*1000;
array_enemy[f].hitbox.y1 = 1000*1000;
array_enemy[f].hitbox.x2 = 1000*1002;
array_enemy[f].hitbox.y2 = 1000*1002;
array_enemy[f].behaviour = 1;
array_enemy[f].age = 0;
array_enemy[f].frame = 0;
array_enemy[f].speedchange = 0;
array_enemy[f].health = 6;
array_enemy[f].random_0 = randint(32, 96);
array_enemy[f].speed_x = 0;
array_enemy[f].speed_y = 0;
array_enemy[f].timer_no_bound_y = 50;
array_enemy[f].timer_no_bound_x = 0;
array_enemy[f].timer_windup = 40;
array_enemy[f].timer_random_0 = randint(100, 240);
array_enemy[f].timer_random_1 = randint(140, 360); 
array_enemy[f].timer_taze = randint(50, 120);
break;
}
f += 1;
}


} //Enemy 1 spawn.



//Enemy 2 spawn. Shielder enemy. 
if (random_enemy_2_spawn == 0) {

f = 0;
while (f < 100) {
if (array_enemy_shielder[f].enabled == 0) {

array_enemy_shielder[f].enabled = 1;
array_enemy_shielder[f].health = 3;
array_enemy_shielder[f].x = randint(0, 270*64);
array_enemy_shielder[f].y = -16*64;
array_enemy_shielder[f].hitbox.x1 = 1000*1000;
array_enemy_shielder[f].hitbox.y1 = 1000*1000;
array_enemy_shielder[f].hitbox.x2 = 1000*1002;
array_enemy_shielder[f].hitbox.y2 = 1000*1002;
array_enemy_shielder[f].timer_disappear = randint(60*10, 60*30);
array_enemy_shielder[f].xdir = randint(0, 1); //Picking random x direction.
array_enemy_shielder[f].ydir = 1; //Moving down to start with.
array_enemy_shielder[f].timer_change_xdir = randint(40, 80);
array_enemy_shielder[f].timer_change_ydir = 80;

break;
}


f += 1;
}

} //Spawning enemy 2.





//Spawning invader. Enemy 3.
if (random_enemy_3_spawn == 0) {


f = 0;
while (f < 5) {

if (array_invader[f].enabled == 0) {
array_invader[f].enabled = 1;
array_invader[f].x = randint(0, (270*64)-(48*64));
array_invader[f].y = -26*64;
array_invader[f].hitbox.x1 = 1000*1000;
array_invader[f].hitbox.y1 = 1000*1000;
array_invader[f].hitbox.x2 = 1000*1002;
array_invader[f].hitbox.y2 = 1000*1002;
array_invader[f].timer_intro = 55;
//array_invader[f].direction = randint(0, 1);
array_invader[f].health = 12;
//array_invader[f].speed = 64;
//array_invader[f].timer_cooldown = 0;
array_invader[f].timer_leave = randint(60*5, 60*10);
break;
}//Is enemy enabled?

f += 1;
}

} //Spawning enemy 3. Spawning invader.



//Spawning small enemy sequence. 
//A small enemy sequence is like a script that spawns a number of small enemies in quick succession and they will move in a connected pattern and not as individuals.
if (random_enemy_4_spawn == 0) {

d = randint(0, 1); //Choosing spawn pattern for small enemy.
//0 Is when all the ships spawn at the same time in a arrow shape.
//1 is when the ships spawn one after another but all follow the same pattern.


if (d == 0) {

enemy_small_central_ship_x = randint(0+(64*64), 270-(64*64)); //This is the position of the middle ship in the formation.

f = 0;
while (f < 100) { //Creating a small enemy and then leaving the loop. 
if (array_small_enemy[f].enabled == 0) { //Enemy in the middle of the pack.
array_small_enemy[f].enabled = 1;
array_small_enemy[f].x = enemy_small_central_ship_x;
array_small_enemy[f].y = 0-(16*64);
array_small_enemy[f].hitbox.x1 = 1000*1000;
array_small_enemy[f].hitbox.y1 = 1000*1000;
array_small_enemy[f].hitbox.x2 = 1000*1002;
array_small_enemy[f].hitbox.y2 = 1000*1002;
array_small_enemy[f].pattern = 0;
array_small_enemy[f].x_speed = 0;
break;
}
f += 1;
}
f = 0;
while (f < 100) { //Creating a small enemy and then leaving the loop.
if (array_small_enemy[f].enabled == 0) {
array_small_enemy[f].enabled = 1;
array_small_enemy[f].x = enemy_small_central_ship_x - (16*64);
array_small_enemy[f].y = 0-(32*64);
array_small_enemy[f].hitbox.x1 = 1000*1000;
array_small_enemy[f].hitbox.y1 = 1000*1000;
array_small_enemy[f].hitbox.x2 = 1000*1002;
array_small_enemy[f].hitbox.y2 = 1000*1002;
array_small_enemy[f].pattern = 0;
array_small_enemy[f].x_speed = 0;
break;
}
f += 1;
}
f = 0;
while (f < 100) { //Creating a small enemy and then leaving the loop.
if (array_small_enemy[f].enabled == 0) {
array_small_enemy[f].enabled = 1;
array_small_enemy[f].x = enemy_small_central_ship_x - (32*64);
array_small_enemy[f].y = 0-(48*64);
array_small_enemy[f].hitbox.x1 = 1000*1000;
array_small_enemy[f].hitbox.y1 = 1000*1000;
array_small_enemy[f].hitbox.x2 = 1000*1002;
array_small_enemy[f].hitbox.y2 = 1000*1002;
array_small_enemy[f].pattern = 0;
array_small_enemy[f].x_speed = 0;
break;
}
f += 1;
}
f = 0;
while (f < 100) { //Creating a small enemy and then leaving the loop.
if (array_small_enemy[f].enabled == 0) {
array_small_enemy[f].enabled = 1;
array_small_enemy[f].x = enemy_small_central_ship_x + (16*64);
array_small_enemy[f].y = 0-(32*64);
array_small_enemy[f].hitbox.x1 = 1000*1000;
array_small_enemy[f].hitbox.y1 = 1000*1000;
array_small_enemy[f].hitbox.x2 = 1000*1002;
array_small_enemy[f].hitbox.y2 = 1000*1002;
array_small_enemy[f].pattern = 0;
array_small_enemy[f].x_speed = 0;
break;
}
f += 1;
}
f = 0;
while (f < 100) { //Creating a small enemy and then leaving the loop.
if (array_small_enemy[f].enabled == 0) {
array_small_enemy[f].enabled = 1;
array_small_enemy[f].x = enemy_small_central_ship_x + (32*64);
array_small_enemy[f].y = 0-(48*64);
array_small_enemy[f].hitbox.x1 = 1000*1000;
array_small_enemy[f].hitbox.y1 = 1000*1000;
array_small_enemy[f].hitbox.x2 = 1000*1002;
array_small_enemy[f].hitbox.y2 = 1000*1002;
array_small_enemy[f].pattern = 0;
array_small_enemy[f].x_speed = 0;
break;
}
f += 1;
}
}

if (d == 1) { //Setting values that is used for spawning small enemies in a waving pattern over time.
timer_enemy_small_spawner = 20; //20 frame timer.
enemy_small_spawn_x = randint(64*64, (270*64)-(80*64));
enemy_small_spawn_amount = randint(4, 8); //Spawn anywhere between 4 and 8 enemies.
}



} //Small enemy spawn. 

//Counting small enemy timer and spawning enemy each time it ticks 0.
if (timer_enemy_small_spawner > 0) {
if (enemy_small_spawn_amount > 0) {
timer_enemy_small_spawner -= 1;
}
}

if (timer_enemy_small_spawner == 0) { //This is the part where we actually spawn small enemies each time the timer runs out.
if (enemy_small_spawn_amount > 0) {
timer_enemy_small_spawner = 25;
enemy_small_spawn_amount -= 1;


//Pattern 1.
f = 0;
while (f < 100) { 

if (array_small_enemy[f].enabled == 0) {

array_small_enemy[f].enabled = 1;
array_small_enemy[f].x = enemy_small_spawn_x;
array_small_enemy[f].y = 0-(16*64);
array_small_enemy[f].hitbox.x1 = 1000*1000;
array_small_enemy[f].hitbox.y1 = 1000*1000;
array_small_enemy[f].hitbox.x2 = 1000*1002;
array_small_enemy[f].hitbox.y2 = 1000*1002;
array_small_enemy[f].pattern = 1;
array_small_enemy[f].timer_speed_change = 90;
array_small_enemy[f].x_speed = -45;
array_small_enemy[f].x_direction = 1;

break;
}

f += 1;
}





}
} //If spawn timer has run out.



} //Checking if game is paused.
} //Checking if cutscene is over.