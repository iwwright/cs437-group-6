#include "graphics/graphics_inventory.h"
#include "views/player_view_inventory.h"
#include "engine.h"

InventoryView::InventoryView(GameLogic *state, sf::RenderWindow *App) : PlayerView(state, App)
{
  graphics = std::make_shared<InventoryGraphics>(this);
  App->setView(App->getDefaultView());
}
 
void InventoryView::process_input(float delta)
{
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) Engine::getInstance().set_mode(MODE_MENU);
}

void InventoryView::handle_event(sf::Event event)
{
  if (event.type == sf::Event::EventType::MouseButtonPressed)
  {

  } else if (event.type == sf::Event::EventType::MouseButtonReleased)
  {
  	
  }
}

void InventoryView::update(float delta)
{
  //Process input
  sf::Event event;
  while (app->pollEvent(event))
  {
    handle_event(event);
  }
  process_input(delta);
}

void InventoryView::draw(float delta)
{
  app->clear(sf::Color::Black);
  app->draw(*graphics);
  app->display();
}