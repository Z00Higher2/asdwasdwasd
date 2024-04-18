/*
Simulate a circuit for controlling a halway light that has switches at both ends of the hallway.
Each switch can be up or down, and the light can be on or off.
Toggling either switch turns the lamp on or off. Provide member functions:
- int get_first_switch_state() // 0 for down, 1 for up
- int get_second_switch_state() 
- int get_lamp_state() // 0 for off, 1 for on
- void toggle_first_switch()
- void toggle_second_switch()
*/
#include <iostream>
class Circuit{
public:
int get_first_switch_state(){
    return first_switch_state;
}
int get_second_switch_state(){
    return second_switch_state;
}
int get_lamp_state(){ // 0 for off, 1 for on
    return lamp_state;
}
void toggle_first_switch(){
    first_switch_state = !first_switch_state;
    if (first_switch_state && second_switch_state == 1){
        lamp_state = 0;
    }else{
        lamp_state = first_switch_state || second_switch_state;
    }
}
void toggle_second_switch(){
    second_switch_state =!second_switch_state;
    if (first_switch_state && second_switch_state == 1){
        lamp_state = 0;
    }else{
        lamp_state = first_switch_state || second_switch_state;
    }
}
private:
int first_switch_state;
int second_switch_state;
int lamp_state;
};
