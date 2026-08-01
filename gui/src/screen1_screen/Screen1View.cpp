#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
: keyCallback(this, &Screen1View::handleKeyInput),currentField(FIELD_USER)   // default
{
    add(a_z_Custom_Container1);
    a_z_Custom_Container1.setPosition(19, 91, 443, 181);
    a_z_Custom_Container1.setVisible(false);
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();

    // Initialize USER ID field
        a_z_Custom_Container1.setKeyCallback(new touchgfx::Callback<Screen1View, const char*>(this, &Screen1View::handleKeyInput));
    user_id_input.setWildcard(user_id_inputBuffer);
    user_id_inputBuffer[0] = '\0';

    // Initialize PASSWORD field
    pass_input.setWildcard(pass_inputBuffer);
    pass_inputBuffer[0] = '\0';

    // Set ONLY ONE callback
    a_z_Custom_Container1.setKeyCallback(&keyCallback);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

// USER ID button click
void Screen1View::input_button_1()
{   user_id_inputBuffer[0] = '\0'; 
     user_id_input.invalidate(); 
      a_z_Custom_Container1.clear_button_click();  
      
    currentField = FIELD_USER;   // select USER input
    a_z_Custom_Container1.setVisible(true);
    invalidate();
}

// PASSWORD button click
void Screen1View::pass_button_click()
{
    currentField = FIELD_PASS;   // select PASSWORD input 
        pass_inputBuffer[0] = '\0';
    pass_input.invalidate();
         a_z_Custom_Container1.clear_button_click();  
    a_z_Custom_Container1.setVisible(true);  

    invalidate(); 
}
void Screen1View::visible_button_click()
{
	if(  currentField == FIELD_PASS)
	{
		pass_input.setVisible(false);
		pass_input.invalidate();
		non_visible_buttom.setVisible(true);
		non_visible_buttom.invalidate();
		visible_button.setVisible(false);
		visible_button.invalidate();

	}
}
void Screen1View::non_visible_button_click()
{
	if(  currentField == FIELD_PASS)
		{
	     	pass_input.setVisible(true);
			pass_input.invalidate();
			non_visible_buttom.setVisible(false);
			non_visible_buttom.invalidate();
			visible_button.setVisible(true);
			visible_button  .invalidate();

		}
}

// SINGLE input handler





void Screen1View::handleKeyInput(const char* text)
{
    if (currentField == FIELD_USER)
    { 
       
        Unicode::strncpy(user_id_inputBuffer, text, USER_ID_INPUT_SIZE);
        user_id_inputBuffer[USER_ID_INPUT_SIZE - 1] = '\0';
        user_id_input.invalidate();
    }
    else // PASSWORD
    {
        Unicode::strncpy(pass_inputBuffer, text, PASS_INPUT_SIZE);
        pass_inputBuffer[PASS_INPUT_SIZE - 1] = '\0';
        pass_input.invalidate(); 
    }
}

