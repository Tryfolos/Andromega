//If the conditions are met, run all the rest of the code in the file. 
if (chosen_option == 0) {
if (current_cutscene_part == 1) {


//Counting down timer.
timer_cutscene_part2 -= delta_time;

//Adding letters to text as time goes on.
if (timer_cutscene_part2 < sec*11.5) {
text_cutscene_part2[0] = 'M';
}
if (timer_cutscene_part2 < sec*11.4) {
text_cutscene_part2[1] = 'A';
}
if (timer_cutscene_part2 < sec*11.3) {
text_cutscene_part2[2] = 'N';
}
if (timer_cutscene_part2 < sec*11.2) {
text_cutscene_part2[3] = 'K';
}
if (timer_cutscene_part2 < sec*11.1) {
text_cutscene_part2[4] = 'I';
}
if (timer_cutscene_part2 < sec*11.0) {
text_cutscene_part2[5] = 'N';
}
if (timer_cutscene_part2 < sec*10.9) {
text_cutscene_part2[6] = 'D';
}
if (timer_cutscene_part2 < sec*10.8) {
text_cutscene_part2[7] = 'S';
}
if (timer_cutscene_part2 < sec*10.7) {
text_cutscene_part2[8] = ' ';
}
if (timer_cutscene_part2 < sec*10.6) {
text_cutscene_part2[9] = 'F';
}
if (timer_cutscene_part2 < sec*10.5) {
text_cutscene_part2[10] = 'I';
}
if (timer_cutscene_part2 < sec*10.4) {
text_cutscene_part2[11] = 'R';
}
if (timer_cutscene_part2 < sec*10.3) {
text_cutscene_part2[12] = 'S';
}
if (timer_cutscene_part2 < sec*10.2) {
text_cutscene_part2[13] = 'T';
}
if (timer_cutscene_part2 < sec*10.1) {
text_cutscene_part2[14] = ' ';
}
if (timer_cutscene_part2 < sec*10.0) {
text_cutscene_part2[15] = 'E';
}
if (timer_cutscene_part2 < sec*9.9) {
text_cutscene_part2[16] = 'X';
}
if (timer_cutscene_part2 < sec*9.8) {
text_cutscene_part2[17] = 'P';
}
if (timer_cutscene_part2 < sec*9.7) {
text_cutscene_part2[18] = 'E';
}
if (timer_cutscene_part2 < sec*9.6) {
text_cutscene_part2[19] = 'D';
}
if (timer_cutscene_part2 < sec*9.5) {
text_cutscene_part2[20] = 'I';
}
if (timer_cutscene_part2 < sec*9.4) {
text_cutscene_part2[21] = 'T';
}
if (timer_cutscene_part2 < sec*9.3) {
text_cutscene_part2[22] = 'I';
}
if (timer_cutscene_part2 < sec*9.2) {
text_cutscene_part2[23] = 'O';
}
if (timer_cutscene_part2 < sec*9.1) {
text_cutscene_part2[24] = 'N';
}
if (timer_cutscene_part2 < sec*9.0) {
text_cutscene_part2[25] = ' ';
}
if (timer_cutscene_part2 < sec*8.9) {
text_cutscene_part2[26] = 'T';
}
if (timer_cutscene_part2 < sec*8.8) {
text_cutscene_part2[27] = 'O';
}
if (timer_cutscene_part2 < sec*8.7) {
text_cutscene_part2[28] = ' ';
}
if (timer_cutscene_part2 < sec*8.6) {
text_cutscene_part2[29] = 'A';
}
if (timer_cutscene_part2 < sec*8.5) {
text_cutscene_part2[30] = 'N';
}
if (timer_cutscene_part2 < sec*8.4) {
text_cutscene_part2[31] = 'D';
}
if (timer_cutscene_part2 < sec*8.3) {
text_cutscene_part2[32] = 'R';
}
if (timer_cutscene_part2 < sec*8.2) {
text_cutscene_part2[33] = 'O';
}
if (timer_cutscene_part2 < sec*8.1) {
text_cutscene_part2[34] = 'M';
}
if (timer_cutscene_part2 < sec*8.0) {
text_cutscene_part2[35] = 'E';
}
if (timer_cutscene_part2 < sec*7.9) {
text_cutscene_part2[36] = 'D';
}
if (timer_cutscene_part2 < sec*7.8) {
text_cutscene_part2[37] = 'A';
}
if (timer_cutscene_part2 < sec*7.7) {
text_cutscene_part2[38] = ' ';
}

if (timer_cutscene_part2 < sec*7.6) {
text_cutscene_part2_2[6] = ' ';
}
if (timer_cutscene_part2 < sec*7.5) {
text_cutscene_part2_2[7] = 'F';
}
if (timer_cutscene_part2 < sec*7.4) {
text_cutscene_part2_2[8] = 'I';
}
if (timer_cutscene_part2 < sec*7.3) {
text_cutscene_part2_2[9] = 'N';
}
if (timer_cutscene_part2 < sec*7.2) {
text_cutscene_part2_2[10] = 'A';
}
if (timer_cutscene_part2 < sec*7.1) {
text_cutscene_part2_2[11] = 'L';
}
if (timer_cutscene_part2 < sec*7.0) {
text_cutscene_part2_2[12] = 'L';
}
if (timer_cutscene_part2 < sec*6.9) {
text_cutscene_part2_2[13] = 'Y';
}
if (timer_cutscene_part2 < sec*6.8) {
text_cutscene_part2_2[14] = ' ';
}
if (timer_cutscene_part2 < sec*6.7) {
text_cutscene_part2_2[15] = 'A';
}
if (timer_cutscene_part2 < sec*6.6) {
text_cutscene_part2_2[16] = 'R';
}
if (timer_cutscene_part2 < sec*6.5) {
text_cutscene_part2_2[17] = 'R';
}
if (timer_cutscene_part2 < sec*6.4) {
text_cutscene_part2_2[18] = 'I';
}
if (timer_cutscene_part2 < sec*6.3) {
text_cutscene_part2_2[19] = 'V';
}
if (timer_cutscene_part2 < sec*6.2) {
text_cutscene_part2_2[20] = 'E';
}
if (timer_cutscene_part2 < sec*6.1) {
text_cutscene_part2_2[21] = 'S';
}

//Drawing text.
draw_text(text_cutscene_part2, cutscene_part2_draw_x, cutscene_part2_draw_y, 1, 1, 1, 1);
draw_text(text_cutscene_part2_2, cutscene_part2_draw_x + 50, cutscene_part2_draw_y + 12, 1, 1, 1, 1);

//three seconds after the text is completed the cutscene will move on.
if (timer_cutscene_part2 < ((sec*6.1)-(sec*3))) {
current_cutscene_part = 2;
}

}
}