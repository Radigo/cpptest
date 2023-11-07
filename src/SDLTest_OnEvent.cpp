void SDLTest::OnEvent(SDL_Event* p_event) {
    switch (p_event->type) {

        case SDL_KEYDOWN:

            switch (p_event->key.keysym.sym) {

                //case SDLK_m:// enter menu state
                case SDLK_ESCAPE:
                    _running = false;
                    break;

                default:
                    break;
            }
            break;

        case SDL_WINDOWEVENT:

            switch (p_event->window.event) {

                case SDL_WINDOWEVENT_CLOSE:   // exit game
                    _running = false;
                    break;

                default:
                    break;
            }
            break;

        default:
            // logFileStderr("TutorialState unknown event...\n");
            break;
    }
}