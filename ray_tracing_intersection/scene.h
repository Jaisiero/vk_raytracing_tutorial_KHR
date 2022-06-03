#pragma once

#include "octree.h"
#include "config.h"
//#include <gl/glew.h>
//#define GLFW_DLL
//#include <GLFW/glfw3.h>
//#include "FPSCamera.hpp"
//#include "GLChunk.hpp"
//#include "Frustum.hpp"
//#include "Texture.hpp"

#include <thread>
#include <mutex>

class Scene
{
  int    last_space : 1;
  bool   outline_visible;
  int    fillmode;
  bool   cull;
  bool   quads;
  bool   smooth_shading;
  bool   flat_quads;
  bool   gui_visible;
  bool   world_visible;
  bool   update_focus;
  float  line_width;
  float  line_color[4];
  float  fill_color[4];
  float  clear_color[4];
  float  specular_power;
  /*GLuint points_vbo;
  GLuint colors_vbo;
  GLuint vao;
  GLuint ibo;

  GLuint vertex_shader;
  GLuint fragment_shader;
  GLuint shader_program;

  GLuint outline_vs;
  GLuint outline_fs;
  GLuint outline_sp;

  GLint shader_projection;
  GLint shader_view;
  GLint shader_mul_clr;
  GLint shader_eye_pos;
  GLint shader_smooth_shading;
  GLint shader_specular_power;
  GLint shader_camera_pos;
  GLint shader_chunk_pos;
  GLint shader_chunk_depth;

  GLint shader_rock_texture;
  GLint shader_rock2_texture;
  GLint shader_grass_texture;
  GLint shader_noise_texture;

  GLint outline_shader_projection;
  GLint outline_shader_view;
  GLint outline_shader_mul_clr;
  GLint outline_shader_camera_pos;
  GLint outline_shader_chunk_pos;

  class FPSCamera camera;
  Frustum         frustum;
  GLChunk         gl_chunk;*/
  WorldOctree     world;

  class DMCChunk* dmc_chunk;

  std::mutex gl_mutex;
  clock_t    last_extraction;

  /*Texture rock_texture;
  Texture rock2_texture;
  Texture grass_texture;
  Texture noise_texture;*/

public:
  Scene(struct RenderInput* input);
  ~Scene();

  /*bool create_texture(std::string filename, Texture& out);
  bool create_shader(std::string data, GLuint* out, GLenum type, const char* name);
  bool create_shader_from_file(std::string filename, GLuint* out, GLenum type, const char* name);*/

  void load_main_shader();

  void init_dmc_chunk();
  void init_world();
  int  update(struct RenderInput* input);
  int  render(struct RenderInput* input);

  void render_dmc_chunk();
  void render_world();

  void key_callback(int key, int scancode, int action, int mods);
  void render_gui();
  void reload_shaders();
};