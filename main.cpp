#include <SFML/Graphics.hpp>
using sf::RenderWindow; 
using sf::VideoMode;
using sf::Color;
using sf::Event;

int main(){
  RenderWindow window(VideoMode(200, 200), "Hello World"); //Set window dimensions and title

   sf::Vertex line[] =
         {
             sf::Vertex(sf::Vector2f(50, 0)),
             sf::Vertex(sf::Vector2f(50, 50))
         };
   sf::Vertex line2[] =
         {
             sf::Vertex(sf::Vector2f(50, 50)),
             sf::Vertex(sf::Vector2f(50, 75))
         };

  while(window.isOpen()){

    Event event;
    while(window.pollEvent(event)){
      if(event.type == Event::Closed)
        window.close();
    }

    window.clear();

    line2.setRotation(45);
    line2.rotate(10);

    window.draw(line, 2, sf::Lines);
    window.draw(line2, 2, sf::Lines);
    window.display();
  }

  return 0;

}

