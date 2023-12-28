//If the player has pressed the play button and the title has faded away the cutscene will start running.
if (chosen_option == 0) {
if (title_alpha == 800) { //Temporarily disabling cutscene.
if (current_cutscene_part == 0) {

//Counting down part1 timer.
timer_cutscene_part1 -= delta_time;

//Adding more letters to text that is drawn over time.
if (timer_cutscene_part1 < sec*5.5) {
text_cutscene_part1[0] = '2'; 
}
if (timer_cutscene_part1 < sec*5.4) {
text_cutscene_part1[1] = '1'; 
}
if (timer_cutscene_part1 < sec*5.3) {
text_cutscene_part1[2] = 'S'; 
}
if (timer_cutscene_part1 < sec*5.2) {
text_cutscene_part1[3] = 'T'; 
}
if (timer_cutscene_part1 < sec*5.1) {
text_cutscene_part1[4] = ' ';
text_cutscene_part1[5] = 'J'; 
}
if (timer_cutscene_part1 < sec*5.0) {
text_cutscene_part1[6] = 'U'; 
}
if (timer_cutscene_part1 < sec*4.9) {
text_cutscene_part1[7] = 'N'; 
}
if (timer_cutscene_part1 < sec*4.8) {
text_cutscene_part1[8] = 'E'; 
}
if (timer_cutscene_part1 < sec*4.7) {
text_cutscene_part1[9] = ' '; 
text_cutscene_part1[10] = '2'; 
}
if (timer_cutscene_part1 < sec*4.6) {
text_cutscene_part1[11] = '1'; 
}
if (timer_cutscene_part1 < sec*4.5) {
text_cutscene_part1[12] = '6'; 
}
if (timer_cutscene_part1 < sec*4.4) {
text_cutscene_part1[13] = '6'; 
}

//Drawing text.
draw_text(text_cutscene_part1, cutscene_part1_draw_x, cutscene_part1_draw_y, 1, 1, 1, 1);

//Changing to part 2 once the timer is up.
if (timer_cutscene_part1 < sec*1.5) {
current_cutscene_part = 1;
}


}}
}