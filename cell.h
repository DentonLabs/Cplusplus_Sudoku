#ifndef CELL_H
#define CELL_H

#include <vector>

class cell
{

private:

    int value;

    bool isStarting;

    std::vector<bool> notes;

    int row;
    int col;
    int box;

public:

    cell();

    cell(int value, bool isStarting, int row, int col, int box);

    int get_row();

    int get_col();

    int get_box();

    int get_value();

    std::vector<bool> get_notes();

    void set_notes(std::vector<bool> notes);

    void set_value(int value);


};


#endif // CELL_H
