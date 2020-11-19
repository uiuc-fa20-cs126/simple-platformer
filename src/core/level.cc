#include "core/level.h"

namespace game {

Level::Level(const std::vector<AABB>& platforms, const ci::vec2 player_start)
    : platforms_(platforms), player_start_(player_start) {
}

std::vector<AABB> Level::GetPlatforms() {
  return platforms_;
}

ci::vec2 Level::GetPlayerStart() {
  return player_start_;
}
}  // namespace game