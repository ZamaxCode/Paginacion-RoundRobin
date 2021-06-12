#include "frame.h"

Frame::Frame()
{

}

int Frame::getId() const
{
    return id;
}

void Frame::setId(int newId)
{
    id = newId;
}

int Frame::getNumPages() const
{
    return numPages;
}

void Frame::setNumPages(int newNumPages)
{
    numPages = newNumPages;
}

const QString &Frame::getState() const
{
    return state;
}

void Frame::setState(const QString &newState)
{
    state = newState;
}
