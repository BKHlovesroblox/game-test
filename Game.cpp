#include "Game.hpp"

Game::Game()
{}
Game::~Game()
{}

void Game::init(const char *title, int xpos, int ypos, int widt, int height, bool fullscreen);
{
    int flags = 0;
    if(fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }


    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "Subsystems Initialised!..." << std::endl;
        
        window = SDL_CreateWindow(tittle, xpos, ypos, width, height, flags);
    }
}

void Game::handleEvents()
{}

void Game::update()
{}

void Game::render()
{}

void Game::clean()
{}
