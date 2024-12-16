/* user and group to drop privileges to */
static const char *user  = "rs";
static const char *group = "rs";

static const char *colorname[NUMCOLS] = {
	[BG] =     "black",     /* background */
	[INIT] =   "#2d2d2d",   /* after initialization */
	[INPUT] =  "#3b4252",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*
* Shapes:
* 0: square
* 1: circle
*/
static const int shape = 0;
/* size of square in px */
static const int shapesize = 40;
static const int shapegap = 30;
