//Struct representing hitbox.
struct hitbox {

int x1, y1, x2, y2; //Top left and bottom right corners of the hitbox.

};


//Function for creating hitboxes.
struct hitbox create_hitbox(int x1, int y1, int x2, int y2) {

struct hitbox hitboxx;

hitboxx.x1 = x1;
hitboxx.y1 = y1;
hitboxx.x2 = x2;
hitboxx.y2 = y2;

return hitboxx;
}


//Function for checking if two hitboxes are intersecting.
int hitbox_colliding(struct hitbox hitbox1, struct hitbox hitbox2) {

if (hitbox1.x2 > hitbox2.x1) {
if (hitbox1.x1 < hitbox2.x2) {
if (hitbox1.y2 > hitbox2.y1) {
if (hitbox1.y1 < hitbox2.y2) {
return 1;
}
}
}
}


return 0;
}