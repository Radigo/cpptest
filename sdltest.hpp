#include <SDL2/SDL.h>

class SDLTest {
    private:
        bool _running;
 
    public:
        SDLTest();
 
        int OnExecute();
 
    public:
 
        bool OnInit();
 
        void OnEvent(SDL_Event* Event);
 
        void OnLoop();
 
        void OnRender();
 
        void OnCleanup();
};