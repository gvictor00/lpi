#ifndef DESENHOS_H_INCLUDED
#define DESENHOS_H_INCLUDED

#define row1 7
#define column1 16
#define row2 8
#define column2 10

const int desenho[row1][column1] = {
{0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0},
{0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0},
{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
{0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{0,0,1,1,1,0,0,1,1,0,0,1,1,1,0,0},
{0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0}
};

int desenho2[row2][column2] = {
{0,0,0,0,1,1,0,0,0,0},
{0,0,0,1,1,1,1,0,0,0},
{0,0,1,1,1,1,1,1,0,0},
{0,1,1,0,1,1,0,1,1,0},
{0,1,1,1,1,1,1,1,1,0},
{0,0,1,0,1,1,0,1,0,0},
{0,1,0,0,0,0,0,0,1,0},
{0,0,1,0,0,0,0,1,0,0}
};


#endif // DESENHOS_H_INCLUDED
