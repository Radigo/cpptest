#include "sdltest.hpp"

#include "src/SDLTest_OnCleanup.cpp"
#include "src/SDLTest_OnEvent.cpp"
#include "src/SDLTest_OnInit.cpp"
#include "src/SDLTest_OnLoop.cpp"
#include "src/SDLTest_OnRender.cpp"

SDLTest::SDLTest() {
    _running = true;
}
 
int SDLTest::OnExecute() {
    if(OnInit() == false) {
        return -1;
    }
 
    SDL_Event event;
 
    while(_running) {
        while(SDL_PollEvent(&event)) {
            OnEvent(&event);
        }
 
        OnLoop();
        OnRender();
    }
 
    OnCleanup();
 
    return 0;
}

int main(int /*argc*/, char** /*argv[]*/) {
    SDLTest theApp;

    Uint32 flags = SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE;

    /*SDL_Window *window = */SDL_CreateWindow("Hello Window", 100, 100, 800, 600, flags);
 
    return theApp.OnExecute();
}