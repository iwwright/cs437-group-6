#ifndef CSCI437_PLAYER_VIEW_STORY_H
#define CSCI437_PLAYER_VIEW_STORY_H

#include "macros.h"
#include "player_view.h"

class StoryView : public PlayerView
{

private:
    void process_input(float delta) override;
    void handle_event(sf::Event event) override;
    int selectionIndex;	//represents current highlighted option on screen

public:
    StoryView(GameLogic *state, sf::RenderWindow *App);
    void update(float delta) override;
    void draw(float delta) override;

};


#endif //CSCI437_PLAYER_VIEW_STORY_H
