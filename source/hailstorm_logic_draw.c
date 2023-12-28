if (current_cutscene_part == -1) {
if (game_paused == 0) {



//Counting down start timer, once it hits 0, the hailstorm begins and the enemies stop spawning.
if (timer_hailstorm_start > 0) {
timer_hailstorm_start -= 1;
}


//Increasing and decreasing the speed of the music dynamically. 
if (music_speed_change == 1) {
music_speed += 0.01;
}
if (music_speed_change == 0) {
music_speed -= 0.01;
}

//Clamping music speed.
if (music_speed > 2.0) {
music_speed = 2.0;
}
if (music_speed < 1.0) {
music_speed = 1.0;
}

//If the player is dead, music speed change chould be 0.
if (player_durability == 0) {
music_speed_change = 0;
}

//Setting music speed.
al_set_sample_instance_speed(array_sample_instance[131], music_speed);

//If timer has run out, start hailstorm, select a random duration. Possible durations of the storm are 15, 20, and 25 seconds.
if (timer_hailstorm_start == 0) {
f = randint(0, 2);
music_speed_change = 1;
switch (f) {


case 0:
timer_hailstorm_duration = 15*60;
break;



case 1: 
timer_hailstorm_duration = 20*60;
break;



case 2:
timer_hailstorm_duration = 25*60;
break;


};




timer_hailstorm_start = -1;
} //Timer has run out, starting hailstorm.


if (timer_hailstorm_duration == 0) {
if (timer_hailstorm_start == -1) {
f = randint(0, 4);
music_speed_change = 0;
switch (f) {

case 0:
timer_hailstorm_start = 50*60;
break;

case 1:
timer_hailstorm_start = 60*60;
break;

case 2:
timer_hailstorm_start = 90*60;
break;

case 3:
timer_hailstorm_start = 120*60;
break;

case 4:
timer_hailstorm_start = 150*60;
break;

};

}}



//Count down the duration of the hailstorm. Once the duration is over the timer_hailstorm_start will start over.
if (timer_hailstorm_duration > 0) {
timer_hailstorm_duration -= 1;
}

//When the duration is over we increment the hailstorms survived value.
if (timer_hailstorm_duration == 1) {
hailstorms_survived += 1;
}


///// Everything above this line is about the duration of the hailstorm and the time left of it.
///// Everything below this line is about the plasma balls/particles that hit you from the sides.





//Spawning plasma balls randomly.
if (timer_hailstorm_duration > 0) {
f = randint(0, 5); 
if (f == 0) {

//Will the ball spawn on the left or the right side of the screen.
i = 0;
while (i < 100) {

if (array_plasma_hail[i].enabled == 0) {
array_plasma_hail[i].enabled = 1;

p = randint(0, 1);
if (p == 0) {
array_plasma_hail[i].x_start = 0;
}
if (p == 1) {
array_plasma_hail[i].x_start = 270*64;
}

//Choosing starting position of ball on y axis.
array_plasma_hail[i].y_start = randint(0, 270*64);


//Choosing target position of ball on y axis.
array_plasma_hail[i].y_target = randint(0, 270*64);


//Setting current x position.
array_plasma_hail[i].x = array_plasma_hail[i].x_start;

//Setting current y position.
array_plasma_hail[i].y = array_plasma_hail[i].y_start;

//Hitbox.
array_plasma_hail[i].hitbox.x1 = 1000*1000;
array_plasma_hail[i].hitbox.y1 = 1000*1000;
array_plasma_hail[i].hitbox.x2 = 1000*1002;
array_plasma_hail[i].hitbox.y2 = 1000*1002;


//Playing sound effect when spawning plasma hail.
d = 16;
while (d < 32) {
if (al_get_sample_instance_playing(array_sample_instance[d]) == 0) {
al_play_sample_instance(array_sample_instance[d]);
break;
}
d += 1;
}


i = 101;
break;
}

i += 1;
}


} //A ball spawns if the right random number is chosen.
}



//What happens to existing balls after they have already spawned.
//This logic also includes the code behind trail spawning.
f = 0;
while (f < 100) {

if (array_plasma_hail[f].enabled == 1) {

//Switching value between 0 and 1 all the time.
switcher = !switcher;


//Moving towards goal position x axis.
if (array_plasma_hail[f].x_start < 10) { //Spawn on left side move right.
array_plasma_hail[f].x += (int)((float)128/1.4); //Speed was 96.
}
if (array_plasma_hail[f].x_start > 200) { //Spawn on left side move right.
array_plasma_hail[f].x -= (int)((float)128/1.4); //Speed was 96.
}


//Moving towards goal position y axis.
i = 0; //This will represent the difference between the starting position and the target position.
if (array_plasma_hail[f].y_start > array_plasma_hail[f].y_target) {
i = array_plasma_hail[f].y_start - array_plasma_hail[f].y_target;
array_plasma_hail[f].y -= (int)((float)(i/135)/1.4);
}
if (array_plasma_hail[f].y_target > array_plasma_hail[f].y_start) {
i = array_plasma_hail[f].y_target - array_plasma_hail[f].y_start;
array_plasma_hail[f].y += (int)((float)(i/135)/1.4);
}

//Despawning plasma balls once they leave the screen.
if (array_plasma_hail[f].x < (-8*64)) {
array_plasma_hail[f].enabled = 0;
}
if (array_plasma_hail[f].x > (270*64)) {
array_plasma_hail[f].enabled = 0;
}

//Updating hitbox.
array_plasma_hail[f].hitbox.x1 = array_plasma_hail[f].x;
array_plasma_hail[f].hitbox.y1 = array_plasma_hail[f].y;
array_plasma_hail[f].hitbox.x2 = array_plasma_hail[f].x + (8*64);
array_plasma_hail[f].hitbox.y2 = array_plasma_hail[f].y + (8*64);


//Every other frame we spawn a new trail behind the ball.
if (switcher == 0) {
i = 0;
while (i < 500) {
if (array_plasma_trail[i].enabled == 0) {

array_plasma_trail[i].enabled = 1;
array_plasma_trail[i].x = array_plasma_hail[f].x+256;
array_plasma_trail[i].y = array_plasma_hail[f].y+256;
array_plasma_trail[i].timer_disable = 20;
array_plasma_trail[i].size = 4;

break;
}
i += 1;
}
}



}

f += 1;
}



//Plasma trail logic and drawing..
f = 0;
while (f < 500) {

if (array_plasma_trail[f].enabled == 1) {

//Counting down disable timer. When this has run out the struct will be disabled.
array_plasma_trail[f].timer_disable -= 1;

//Disabling struct after timer has run out.
if (array_plasma_trail[f].timer_disable < 1) {
array_plasma_trail[f].enabled = 0;
}

//Changing the size of the trail based on how much time is left of the timer.
if (array_plasma_trail[f].timer_disable < 15) {
array_plasma_trail[f].size = 3;
}
if (array_plasma_trail[f].timer_disable < 10) {
array_plasma_trail[f].size = 2;
}
if (array_plasma_trail[f].timer_disable < 5) {
array_plasma_trail[f].size = 1;
}



//Drawing trail.
al_draw_filled_circle(array_plasma_trail[f].x/64, array_plasma_trail[f].y/64, array_plasma_trail[f].size, al_map_rgb(108, 157, 61));


} //Is the struct enabled?



f += 1;
}




} //Is the game paused?

//Setting target bitmap to draw on.
al_set_target_bitmap(bitmap_gameplay_display);



//Drawing warning text right before hailstorm.
if (timer_hailstorm_start < 60*3) {
if (timer_hailstorm_start > 0) {
draw_text(text_warning, 94, 110, 1, 0, 0, 1);
draw_text(text_plasma_hailstorm_imminent, 5, 135, 1, 0, 0, 1);
}}


//Drawing plasma ball.
f = 0; 
while (f < 100) {

//Drawing plasma ball.
if (array_plasma_hail[f].enabled == 1) {
al_draw_bitmap(bitmap_plasma_ball, array_plasma_hail[f].x/64, array_plasma_hail[f].y/64, 0);
}

//Hitbox.
if (array_plasma_hail[f].enabled == 1) {
if (draw_hitboxes == 1) {
al_draw_rectangle(array_plasma_hail[f].hitbox.x1/64, array_plasma_hail[f].hitbox.y1/64, array_plasma_hail[f].hitbox.x2/64, array_plasma_hail[f].hitbox.y2/64, al_map_rgb(255, 0, 255), 0);
}}

f += 1;    
}





} //Are we in gameplay mode?


