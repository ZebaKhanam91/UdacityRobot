#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginHumanRobot : public WorldPlugin
  {
    public: WorldPluginHumanRobot() : WorldPlugin()
            {
              printf("Welcome to Zeba's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginHumanRobot)
}
