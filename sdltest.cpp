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
 
    SDL_Event Event;
 
    while(_running) {
        while(SDL_PollEvent(&Event)) {
            OnEvent(&Event);
        }
 
        OnLoop();
        OnRender();
    }
 
    OnCleanup();
 
    return 0;
}

int main(int /*argc*/, char* /*argv[]*/) {
    SDLTest theApp;
 
    return theApp.OnExecute();
}