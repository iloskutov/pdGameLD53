#pragma once

#include <stddef.h>

#include <array>

#include "asteroid_type.hpp"
#include "game_state.hpp"

constexpr float kSpaceCraftRadius = 34.0f;
constexpr float kSpaceCraftPosX = 0.0f;
constexpr float kSpaceCraftPosY = 100.0f;
constexpr float kSpaceCraftAcceleration = 40.0f;
constexpr float kSpaceCraftDeceleration = 10.0f;
constexpr float kSpaceCraftVelocityMax = 80.0f;
constexpr float kSpaceCraftRotationAcceleration = 360.0f;  // Deg
constexpr float kSpaceCraftRotationSpeedMax = 180.0f;      // Deg
constexpr float kSpaceCraftRotationDeceleration = 180.0f;  // Deg
constexpr float kSpaceCraftAsteroidHitVelocityReduction = 0.1f;
constexpr float kSpaceCraftAsteroidHitRotationVelocityReduction = 0.15f;
constexpr float kSpaceCraftCameraOffset = 50.0f;
constexpr bool kSpaceCraftCrankControlsRotation = false;
constexpr float kSpaceCraftFieldAnimationLength = 0.5f;
constexpr float kSpaceCraftFieldAnimationNumFrames = 5;

constexpr float kSpaceStationSize = 60.0f;

constexpr size_t kAsteroidsNum = 700;
constexpr size_t kAsteroidMinSize = 10;
constexpr size_t kAsteroidMaxSize = 30;
constexpr size_t kAsteroidToBaseAreaDistance = 200;
constexpr size_t kAsteroidAreaDistance = 3000;
constexpr size_t kAsteroidInitCollisionCheckNum = 3;

inline std::vector<AsteroidType> GetAsteroidTypes() {
  return std::vector<AsteroidType>{{
                                       .models{"data/met_01.png"},
                                       .bitmaps{},
                                       .radius = 62.0f,
                                       .breaks_on_collision = false,
                                   },
                                   {
                                       .models{"data/met_02.png"},
                                       .bitmaps{},
                                       .radius = 48.0f,
                                       .breaks_on_collision = false,
                                   },
                                   {
                                       .models{"data/met_03.png"},
                                       .bitmaps{},
                                       .radius = 38.0f,
                                       .breaks_on_collision = false,
                                   },
                                   {
                                       .models{"data/met_04.png"},
                                       .bitmaps{},
                                       .radius = 23.0f,
                                       .breaks_on_collision = true,
                                   },
                                   {
                                       .models{"data/met_05.png"},
                                       .bitmaps{},
                                       .radius = 11.0f,
                                       .breaks_on_collision = true,
                                   }};
}

constexpr size_t kStarsNum = 20;
constexpr float kStarsVelocitySlowDown = 100.0f;

constexpr bool kDrawDebugAsteroids = false;
constexpr bool kDrawDebugSpaceCraft = false;

constexpr size_t kStationsNum = 5;
const std::array<Point2d, kStationsNum> kStationPos = {
    Point2d(0, 0), Point2d(2 * 1000, 2 * 1000), Point2d(-2 * 1000, 4 * 1000),
    Point2d(-4 * 1000, -3 * 1000), Point2d(3 * 1000, 1 * 1000)};
