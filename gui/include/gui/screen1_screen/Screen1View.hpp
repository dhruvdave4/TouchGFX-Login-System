#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui_generated/containers/a_z_Custom_ContainerBase.hpp>
#include <touchgfx/Callback.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen(); 
    virtual void input_button_1();  
    virtual void pass_button_click();  
    virtual void visible_button_click();
    virtual void non_visible_button_click();
    void handleKeyInput(const char* text);   

protected:

    enum Field
    {
        FIELD_USER,
        FIELD_PASS
    };
 
      touchgfx::Callback<Screen1View, const char*> keyCallback;
    Field currentField;   // ✅ track active input

  
static const int BUFFER_SIZE = 20;

char buffer[BUFFER_SIZE]; 

    a_z_Custom_Container a_z_Custom_Container1;
    touchgfx::Container a_z_container; 

};

#endif
