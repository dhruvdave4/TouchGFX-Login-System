#include <gui/containers/a_z_Custom_Container.hpp> 

a_z_Custom_Container::a_z_Custom_Container()
{


}


void a_z_Custom_Container::initialize()
{
    a_z_Custom_ContainerBase::initialize();
}
 
const char* a_z_Custom_Container::getBuffer()
{ 

   return buffer;
}

void a_z_Custom_Container::speace_button_click()
{
	uint16_t len = Unicode::strlen(buffer);

		    if (len > 0)
		    {
		        buffer[len + 1] = '\0';
		        buffer[len] = ' ';
          }  

           if (keyCallback && keyCallback->isValid())
{
    keyCallback->execute(buffer);
}

}

void a_z_Custom_Container:: back_button_click()
   {
	uint16_t len = Unicode::strlen(buffer);

	    if (len > 0)
	    {
	        buffer[len - 1] = '\0';
	    } 
          if (keyCallback && keyCallback->isValid())
{
    keyCallback->execute(buffer);
}

	    invalidate();// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container::addCharacter(char c)
{
    uint16_t len = Unicode::strlen(buffer);

    if (len < BUFFER_SIZE - 1)
    {
        buffer[len] = c;
        buffer[len + 1] = '\0';
    } 
     if (keyCallback && keyCallback->isValid())
{ 
   
    keyCallback->execute(buffer); 
      //  clear_button_click();
}


    invalidate();
}

 


void a_z_Custom_Container::enter_button_click()
{
//  
   // clear_button_click(); 

	setVisible(false);
//    a_z_Custom_Container.setVisible(false);
    invalidate();
}

void a_z_Custom_Container::up_case_button_click()
{
    a_z_container.setVisible(false);
    A_Z_container.setVisible(true);
    num_key_container.setVisible(false);
    abc_button_container.setVisible(false);
    upper_case_button_1.setVisible(false);
    upper_case_button_2.setVisible(true);


    invalidate();
}
void a_z_Custom_Container:: upper_case_button_2_click()
{

	 	 upper_case_button_1.setVisible(true);
	 	 upper_case_button_2.setVisible(false);

	     a_z_container.setVisible(true);
	     A_Z_container.setVisible(false);
//	     num_key_button_container.setVisible(true);

	    invalidate();


}
void a_z_Custom_Container::  abc_button_clcik()
{

	 num_key_container.setVisible(false);
	 num_key_button_container.setVisible(true);
     A_Z_container.setVisible(false);
     a_z_container.setVisible(true);
     upper_case_button_1.setVisible(true);
     upper_case_button_2.setVisible(false);
	 abc_button_container.setVisible(false);
	 invalidate();

}



void a_z_Custom_Container:: num_key_button_click()
{

	 a_z_container.setVisible(false);
	 A_Z_container.setVisible(false);
	 num_key_container.setVisible(true);
	 abc_button_container.setVisible(true);
	 num_key_button_container.setVisible(false);
	 upper_case_button_1.setVisible(false);
	 upper_case_button_2.setVisible(false);
	 invalidate();




// Override and implement this function in a_z_Custom_Container
 }

void a_z_Custom_Container::clear_button_click()
{

	  buffer[0]='\0';
	    invalidate(); 
          if (keyCallback && keyCallback->isValid())
{
    keyCallback->execute(buffer);
}
}
void a_z_Custom_Container::q_button_click()
{
    addCharacter('q');
}
void a_z_Custom_Container:: w_button_click()
   {
	addCharacter('w'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: e_button_click()
   {
	addCharacter('e');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: r_button_click()
   {
	addCharacter('r');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: t_button_click()
   {
	addCharacter('t');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: y_button_click()
   {
	addCharacter('y'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: u_button_click()
   {
	addCharacter('u'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: i_button_click()
   {
	addCharacter('i'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: o_button_click()
   {
	addCharacter('o');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: p_button_click()
   {
	addCharacter('p');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: a_button_click()
   {
	addCharacter('a');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: s_button_click()
   {
	addCharacter('s'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: f_button_click()
   {
	addCharacter('f'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: g_button_click()
   {
	addCharacter('g');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: h_button_click()
   {
	addCharacter('h');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: j_button_click()
   {
	addCharacter('j'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: k_button_click()
   {
	addCharacter('k'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: l_button_click()
   {
	addCharacter('l');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: z_button_click()
   {
	addCharacter('z');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: x_button_click()
   {
	addCharacter('x'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: c_button_click()
   {
	addCharacter('c');// Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: v_button_click()
   {
	addCharacter('v'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: b_button_click()
   {
	addCharacter('b'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: n_button_click()
   {
	addCharacter('n'); // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: m_button_click()
   {
	addCharacter('m');  // Override and implement this function in a_z_Custom_Container
   }
void a_z_Custom_Container:: d_button_click()
{
	addCharacter('d');
}
void a_z_Custom_Container::  Z_button_click()
{
	addCharacter('Z');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  Q_button_click()
{
	addCharacter('Q');
    // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  Y_button_click()
{

	addCharacter('Y');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  U_button_click()
{
	addCharacter('U');
    // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  W_button_click()
{
	addCharacter('W');
    // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  R_button_click()
{
	addCharacter('R');
    // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  T_button_click()
{
	addCharacter('T');
    // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  E_button_click()
{
	addCharacter('E');
    // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  O_button_click()
{
	addCharacter('O');
	// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  P_button_click()
{
	addCharacter('P');
    // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  I_button_click()
{
	addCharacter('I');
    // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  J_button_click()
{
	addCharacter('J');
    // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  D_button_click()
{

	addCharacter('D');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  G_button_click()
{

	addCharacter('G');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  H_button_click()
{
	addCharacter('H'); // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  L_button_click()
{
	addCharacter('L');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  M_button_click()
{
	addCharacter('M');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  N_button_click()
{
	addCharacter('N');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  X_button_click()
{
	addCharacter('X'); // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  B_button_click()
{
	addCharacter('B'); // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  C_button_click()
{
	addCharacter('C');   // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  V_button_click()
{
	addCharacter('V'); // Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  A_button_click()
{
	addCharacter('A');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  F_button_click()
{
	addCharacter('F');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::  S_button_click()
{
	addCharacter('S');// Override and implement this function in a_z_Custom_Container
}
void a_z_Custom_Container::K_button_click()
{
	addCharacter('K');
}

void a_z_Custom_Container:: one_button_click()
   {
	addCharacter('1');
       // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: two_button_click()
   {
	   addCharacter('2');
       // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: six_button_click()
   {

	   addCharacter('6');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: seven_button_click()
   {

	   addCharacter('7');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: four_button_click()
   {

	   addCharacter('4');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: five_button_click()
   {
	   addCharacter('5');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: three_button_click()
   {
	   addCharacter('3');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: nine_button_click()
   {
	   addCharacter('9'); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: zero_button_click()
   {
	   addCharacter('0'); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: eight_button_click()
   {
	   addCharacter('8'); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: multiplie_button_click()
   {
	   addCharacter('*');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: equal_button_click()
   {
	   addCharacter('='); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: plussign_button()
   {
	   addCharacter('+'); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: minussign_button()
   {
	   addCharacter('-'); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: anglebracketsright_button()
   {
	   addCharacter('<');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: anglebracketsleft_button()
   {
	   addCharacter('>');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: atsymbol_button()
   {
	   addCharacter('@');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: squarebracket_right_button()
   {
	   addCharacter('['); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: squarebracket_left_button()
   {
	   addCharacter(']'); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: questionmark_button_click()
   {
	   addCharacter('?'); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: coma_button_click()
   {
	   addCharacter(','); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: semicolon_button_click()
   {
	   addCharacter(';');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: hashtage_button_click()
   {
	   addCharacter('#'); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: fullstop_button_click()
   {
	   addCharacter('.'); // Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: undersuad_button()
   {
	   addCharacter('_');// Override and implement this function in a_z_Custom_Container
   }
   void a_z_Custom_Container:: and_button()
   {
	   addCharacter('&');// Override and implement this function in a_z_Custom_Container
   }
  void a_z_Custom_Container:: div_button_click()
   {
      addCharacter('/');// Override and implement this function in a_z_Custom_Container
   } 
   void  a_z_Custom_Container:: colon_button_click()
   {

      addCharacter(':');// Override and implement this function in a_z_Custom_Container
   } 