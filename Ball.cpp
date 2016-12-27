#include "Ball.hpp"


Ball::Ball(SDL_Window* window, SDL_Renderer* renderer, int x, int y, int size)
    : window_ptr(window),
    renderer_ptr(renderer),
	rect({x, y, size, size}),
    dx(1), dy(0),
    init_x(x), init_y(y),
    x(rect.x), y(rect.y),
    w(rect.w), h(rect.h)
{
    
}

void Ball::reset()
{
    x = init_x;
    y = init_y;
}

void Ball::render()
{
	SDL_SetRenderDrawColor( renderer_ptr, 0xFF, 0x52, 0x47, 0xFF );	
	SDL_RenderFillRect( renderer_ptr, &rect );
}
