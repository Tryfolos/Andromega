if (current_cutscene_part == -1) {
//Setting draw target.
al_set_target_bitmap(bitmap_gameplay_display);



//Logic and drawing for particles.
f = 0;
while (f < 100000) {

if (array_particle[f].enabled == 1) {
if (game_paused == 0 & current_cutscene_part == -1) { //Only run in game and if not paused.


//Moving particles based on x and y speed variables.
array_particle[f].x += array_particle[f].x_speed;
array_particle[f].y += array_particle[f].y_speed;


//Changing shade of particle.
array_particle[f].r -= 64*3;
array_particle[f].g -= 128*3;


//Making sure colors can't go below 0.
if (array_particle[f].r < 0) {
array_particle[f].r = 0;
}
if (array_particle[f].g < 0) {
array_particle[f].g = 0;
}
if (array_particle[f].b < 0) {
array_particle[f].b = 0;
}

//Randomly despawn to counter the screen getting so cluttered.
if (randint(0, 60) == 0) {
array_particle[f].enabled = 0;
}

//Despawning particle when outside screen.
if (array_particle[f].x > (270*64) || array_particle[f].x < 0 || array_particle[f].y > (270*64) || array_particle[f].y < 0) {
array_particle[f].enabled = 0;
}

}
//Drawing particle.
al_draw_pixel(array_particle[f].x/64, array_particle[f].y/64, al_map_rgb(array_particle[f].r/64, array_particle[f].g/64, array_particle[f].b/64));


//Disabling particle if the shade has turned black. We don't want black particles.
if (array_particle[f].r < 10 && array_particle[f].g < 10 && array_particle[f].b < 10) {
array_particle[f].enabled = 0;
}


} //Is particle enabled.




f += 1;
}

}