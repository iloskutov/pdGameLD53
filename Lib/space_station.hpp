#pragma once

#include <vector>

#include "PdSymphony/all_symphony.hpp"
#include "asteroid.hpp"
#include "camera.hpp"
#include "pd_api.h"
#include "space_object.hpp"

class SpaceStation : public SpaceObject {
 public:
  SpaceStation(PlaydateAPI* playdate) : playdate_(playdate) {
    createAsteroids();
  }

  void Update(float dt);
  void Draw(const Camera& camera);

 private:
  void drawDebug(const Point2d& position);
  void createAsteroids();

  PlaydateAPI* playdate_{nullptr};

  std::vector<Asteroid> asteroids_;
};
