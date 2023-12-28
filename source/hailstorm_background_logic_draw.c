if (current_cutscene_part == -1) {


//Increasing and decreasing tint of background depending on hailstorm timer.
//Also clamping tint variable.
if (timer_hailstorm_duration > 0) {
if (hailstorm_background_tint < 1.0) {
hailstorm_background_tint += 0.01;
}
}
if (timer_hailstorm_duration == 0) {
if (hailstorm_background_tint > 0.0) {
hailstorm_background_tint -= 0.01;
}
}


//Capping hailstorm tint value so it cant go below 0 or above 1.
if (hailstorm_background_tint > 1.0) {
hailstorm_background_tint = 1.0;
}

if (hailstorm_background_tint < 0.0) {
hailstorm_background_tint = 0.0;
}


//Logic loop. This logic is applied to each line individually.
f = 0;
while (f < 91) {

//array_hailstorm_background_x[f] += f/2;

//If line goes below the screen it will return to the top.
if (array_hailstorm_background_y[f] > 269) {
array_hailstorm_background_y[f] = -3;
}


//Moving line downwards each frame.
array_hailstorm_background_y[f] += 1;


f += 1;
} //End of hailstorm background logic.


//Setting target bitmap;
al_set_target_bitmap(bitmap_gameplay_display);


//Drawing loop.
f = 0;
while (f < 91) {


//Drawing horizontal line (bitmap).
al_draw_tinted_bitmap(array_bitmap_horizontal_line[f], al_map_rgba_f(hailstorm_background_tint, hailstorm_background_tint, hailstorm_background_tint, hailstorm_background_tint), 0, array_hailstorm_background_y[f], 0);


f += 1;
}

} //Are we in gameplay mode?