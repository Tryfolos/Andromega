//Counting down twinkling timer. 
if (chosen_option != 0) { //If you have not yet pressed the play button the title will be shown.
if (ignore_title_screen_logic == 0) {
if (title_fade_back == 0) {

//Setting target bitmap
al_set_target_bitmap(internal_display);


//Start of loop.
f = 0;
while (f < 40) {


//Counting down timer and resetting it when it runs out.
if (array_twinkling_star[f].timer_twinkle > 0) {
array_twinkling_star[f].timer_twinkle -= 1;
} else {
array_twinkling_star[f].timer_twinkle = randint(90, 360);
}


//Drawing star.
if (array_twinkling_star[f].timer_twinkle >= 31) { //Weak dot.
al_draw_tinted_bitmap_region(bitmap_twinkling_star, al_map_rgba(150, 150, 150, 150), 0, 0, 5, 5, array_twinkling_star[f].x, array_twinkling_star[f].y, 0);
}
if (array_twinkling_star[f].timer_twinkle >= 25) { //Dot.
if (array_twinkling_star[f].timer_twinkle <= 30) {
al_draw_tinted_bitmap_region(bitmap_twinkling_star, al_map_rgba(255, 255, 255, 255), 0, 0, 5, 5, array_twinkling_star[f].x, array_twinkling_star[f].y, 0);
}}
if (array_twinkling_star[f].timer_twinkle >= 19) {//Almost full star.
if (array_twinkling_star[f].timer_twinkle <= 24) {
al_draw_tinted_bitmap_region(bitmap_twinkling_star, al_map_rgba(255, 255, 255, 255), 5, 0, 5, 5, array_twinkling_star[f].x, array_twinkling_star[f].y, 0);
}}
if (array_twinkling_star[f].timer_twinkle >= 13) { //Full star.
if (array_twinkling_star[f].timer_twinkle <= 18) {
al_draw_tinted_bitmap_region(bitmap_twinkling_star, al_map_rgba(255, 255, 255, 255), 10, 0, 5, 5, array_twinkling_star[f].x, array_twinkling_star[f].y, 0);
}}
if (array_twinkling_star[f].timer_twinkle >= 7) {//Almost full star.
if (array_twinkling_star[f].timer_twinkle <= 12) {
al_draw_tinted_bitmap_region(bitmap_twinkling_star, al_map_rgba(255, 255, 255, 255), 5, 0, 5, 5, array_twinkling_star[f].x, array_twinkling_star[f].y, 0);
}}
if (array_twinkling_star[f].timer_twinkle >= 1) { //Dot.
if (array_twinkling_star[f].timer_twinkle <= 6) {
al_draw_tinted_bitmap_region(bitmap_twinkling_star, al_map_rgba(255, 255, 255, 255), 0, 0, 5, 5, array_twinkling_star[f].x, array_twinkling_star[f].y, 0);
}}






f += 1;
}





}}}