#include "App/App.h"

int main() 
{
    App app(utils::APP_TITLE_WINDOW, utils::APP_WIDTH, utils::APP_HEIGHT);
    app.run();

    return 0;
}