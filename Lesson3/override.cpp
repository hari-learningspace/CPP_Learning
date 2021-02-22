#include <assert.h>
#include <cmath>

// TODO: Define PI
#define PI 3.14159
// TODO: Declare abstract class VehicleModel
// TODO: Declare virtual function Move()
class VehicleModel {
public:
  virtual void Move(double v, double theta) = 0;
};

// TODO: Derive class ParticleModel from VehicleModel
// TODO: Override the Move() function
// TODO: Define x, y, and theta
class ParticleModel : public VehicleModel {
public:
  ParticleModel() {}
  double x{0};
  double y{0};
  double theta{0};
  void Move(double v, double t) override;
};

void ParticleModel::Move(double v, double theta) {
  theta += PI;
  x += v * cos(theta);
  y += v * cos(theta);
}
// TODO: Derive class BicycleModel from ParticleModel
// TODO: Override the Move() function
// TODO: Define L
class BicycleModel : public ParticleModel {
public:
  double x{0};
  double y{0};
  double theta{0};
  double L{0};
  void Move(double v, double) override;
};

void BicycleModel::Move(double v, double t) {
  theta += v / L * tan(PI);
  x += v * cos(theta);
  y += v * cos(theta);
}
// TODO: Pass the tests
int main() {
  // Test function overriding
  ParticleModel particle;
  BicycleModel bicycle;
  particle.Move(10, PI / 9);
  bicycle.Move(10, PI / 9);
  assert(particle.x != bicycle.x);
  assert(particle.y != bicycle.y);
  assert(particle.theta != bicycle.theta);
}