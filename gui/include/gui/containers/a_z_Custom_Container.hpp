#ifndef A_Z_CUSTOM_CONTAINER_HPP
#define A_Z_CUSTOM_CONTAINER_HPP

#include <gui_generated/containers/a_z_Custom_ContainerBase.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp> 
#include <touchgfx/Callback.hpp>
class a_z_Custom_Container : public a_z_Custom_ContainerBase
{
public:
    a_z_Custom_Container();
    virtual ~a_z_Custom_Container() {}

    virtual void initialize();
static const int BUFFER_SIZE = 20;

char buffer[BUFFER_SIZE];
int length;
touchgfx::GenericCallback<const char*>* keyCallback;

void setKeyCallback(touchgfx::GenericCallback<const char*>* cb)
{
    keyCallback = cb;
}

//     virtual void q_button_click();s
    const char* getBuffer();
    virtual void enter_button_click();
    virtual void up_case_button_click();
    virtual void upper_case_button_2_click();
    virtual void num_key_button_click();
    virtual void abc_button_clcik();
    // virtual void input_button_click();//
    virtual void q_button_click();
    virtual void back_button_click(); 
    void addCharacter(char c); 
       void systemcall(); 
       
 
      virtual void w_button_click(); 
       virtual void e_button_click();

       virtual void r_button_click();

       virtual void t_button_click();

       virtual void y_button_click();

       virtual void u_button_click();

       virtual void i_button_click();

       virtual void o_button_click();

       virtual void p_button_click();

       virtual void a_button_click();

       virtual void s_button_click();

       virtual void f_button_click();

       virtual void g_button_click();

       virtual void h_button_click();

       virtual void j_button_click();

       virtual void k_button_click();

       virtual void l_button_click();

       virtual void z_button_click();

       virtual void x_button_click();

       virtual void c_button_click();

       virtual void v_button_click();

       virtual void b_button_click();

       virtual void n_button_click();

       virtual void m_button_click();

       virtual void d_button_click();

       virtual void clear_button_click();
       virtual void speace_button_click();
       virtual void Z_button_click();

       virtual void Q_button_click();


       virtual void Y_button_click();

       virtual void U_button_click();

       virtual void W_button_click();

       virtual void R_button_click();

       virtual void T_button_click();

       virtual void E_button_click();

       virtual void O_button_click();

       virtual void P_button_click();
       virtual void I_button_click();

       virtual void J_button_click();

       virtual void D_button_click();

       virtual void G_button_click();

       virtual void H_button_click();

       virtual void L_button_click();

       virtual void M_button_click();

       virtual void N_button_click();

       virtual void X_button_click();

       virtual void B_button_click();

       virtual void C_button_click();

       virtual void V_button_click();

       virtual void A_button_click();

       virtual void F_button_click();

       virtual void S_button_click();
       virtual void K_button_click();




       virtual void one_button_click();

          virtual void two_button_click();

          virtual void six_button_click();

          virtual void seven_button_click();

          virtual void four_button_click();
          virtual void colon_button_click();

          virtual void five_button_click();

          virtual void three_button_click();

          virtual void nine_button_click();

          virtual void zero_button_click();

          virtual void eight_button_click();

          virtual void multiplie_button_click();

          virtual void equal_button_click();

          virtual void plussign_button();

          virtual void minussign_button();

          virtual void anglebracketsright_button();

          virtual void anglebracketsleft_button();

          virtual void atsymbol_button();

          virtual void squarebracket_right_button();

          virtual void squarebracket_left_button();

          virtual void questionmark_button_click();

          virtual void coma_button_click();

          virtual void semicolon_button_click();

          virtual void hashtage_button_click();

          virtual void fullstop_button_click();

          virtual void undersuad_button();

          virtual void and_button(); 
          virtual void div_button_click();

protected:
// touchgfx::GenericCallback<const char*>* keyCallback;

// void setKeyCallback(touchgfx::GenericCallback<const char*>* cb)
// {
//     keyCallback = cb;
// }
private:



};

#endif // A_Z_CUSTOM_CONTAINER_HPP
