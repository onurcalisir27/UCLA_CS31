//
//  Score.cpp
// CS 31 Howard Stalh
// Onur Calisir Project 7
//605489394

#include "Score.h"
#include <stdexcept>

namespace cs31
{

    // setup a default score - all WRONG ANSWER's
    Score::Score()
    {
        for (int i = 0; i < REQUIREDLENGTH; i++)
        {
            array[i] = WRONG;
        }
    }

    // TODO comparing the played move to the answer move,
    //      build the ANSWER array of this Score
    Score::Score(Move move, Move answer) : Score()
    {
        for (int i = 0; i < REQUIREDLENGTH; i++) // looping and setting rights
        {
            Piece m = move.getPiece(i);
            Piece a = answer.getPiece(i);
            std::string s = m.getColorAsString();
            std::string t = a.getColorAsString();
            if (s == t)
            {
                array[i] = RIGHT;
            }
        }
        int k[4] = { -1, -1, -1, -1 };   // keeping track of the maybe's

        for (int i = 0; i < REQUIREDLENGTH; i++) //looping to set the maybes
        {
            
            for (int j = 0; j < REQUIREDLENGTH; j++)
            {
                Piece m = move.getPiece(i);
                Piece a = answer.getPiece(j);
                std::string s = m.getColorAsString();
                std::string t = a.getColorAsString();
                if (array[i] != RIGHT && array[j] != RIGHT && i!=j && k[j] == -1)
                {
                    if (s == t)
                    {
                        array[i] = MAYBE;
                        k[j] = 1;  // update the index the maybe was found

                    }
                }
            }
        }
    }

    // trivial getter but throw logic_error if the index is out of range
    ANSWER Score::getAnswer(int i)
    {
        if (i >= 0 && i < REQUIREDLENGTH)
            return(array[i]);
        else
            throw std::logic_error("invalid i value");
    }

    // stringify this Score
    std::string Score::to_string() const
    {
        std::string s = "";
        int mCount = 0;
        int rCount = 0;
        for (int i = 0; i < REQUIREDLENGTH; i++)
        {
            switch (array[i])
            {
            case WRONG:
                // wrongs should not be printed at all
                s += "_";
                break;
            case RIGHT:
                rCount++;
                s += "R";
                break;
            case MAYBE:
                mCount++;
                s += "M";
                break;
            }
        }
        return(s);
    }

    // TODO is the ANSWER array all RIGHT ANSWER's?
    bool Score::isExactMatch() const
    {
        bool retValue = true;
        for (int i(0); i < REQUIREDLENGTH; i++)
        {
            if (array[i] != RIGHT)
            {
                retValue = false;
            }
        }

        return (retValue);
    }

}

