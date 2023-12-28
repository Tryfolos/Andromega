//Struct that represents the points on the main menu screen.
struct crawler_point {

int x, y; //Position on screen.
float alpha; //Opacity.
int enabled;

};

//Array of crawler points.
struct crawler_point * array_crawler_point = malloc(sizeof(struct crawler_point)*500);

//Random starting position and stuff.
crawler_position_x = randint(0, 480);
crawler_position_y = randint(0, 270);
crawler_direction = randint(0, 3);

crawler_position_x_2 = randint(0, 480);
crawler_position_y_2 = randint(0, 270);
crawler_direction_2 = randint(0, 3);

crawler_position_x_3 = randint(0, 480);
crawler_position_y_3 = randint(0, 270);
crawler_direction_3 = randint(0, 3);

crawler_position_x_4 = randint(0, 480);
crawler_position_y_4 = randint(0, 270);
crawler_direction_4 = randint(0, 3);

f = 0;
while (f < 500) {
array_crawler_point[f].enabled = 0;
f += 1;
}

//