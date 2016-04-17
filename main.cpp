#include <SFML/Graphics.hpp>

int main() {
  sf::RenderWindow window(
    sf::VideoMode(200, 200),
    "travis_qmake_gcc_cpp98_sfml"
  );
  double angle = 0.0;

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        window.close();
      }
    }
    window.clear(sf::Color::Black);

    sf::RectangleShape r(sf::Vector2f(100.0,100.0));
    r.setOrigin(sf::Vector2f(40.0,40.0));
    r.setPosition(100.0,100.0);
    r.rotate(angle);
    r.setFillColor(sf::Color(100, 250, 50));
    window.draw(r);

    window.display();

    angle += 0.01;
    if (angle > 100.0) break;
  }
}
