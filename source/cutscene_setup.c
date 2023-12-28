//Setup for intro cutscene.

//Part1.
char text_cutscene_part1[] = "               ";

//Part2.
char text_cutscene_part2[72];
memset(text_cutscene_part2, ' ', 70);
text_cutscene_part2[71] = '\0';
char text_cutscene_part2_2[72];
memset(text_cutscene_part2_2, ' ', 70);
text_cutscene_part2_2[71] = '\0';

//Part3.
char text_cutscene_part3[] = "                                                     ";

//Part4.
char text_cutscene_part4[] = "                                        ";
char text_cutscene_part4_2[] = "                                        ";

//Skull image.
ALLEGRO_BITMAP * bitmap_skull = al_load_bitmap("assets/skull.png");