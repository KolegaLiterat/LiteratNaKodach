#include <LiquidCrystal.h> //Dołączenie bilbioteki
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
int interruptPinButton1 = 2;
int interruptPinButton2 = 3;
volatile int state = LOW;

//CLASS GAME ELEMENTS
class gameElements
{
    public:

    int player_pos_x = 5, player_pos_y = 1;
    int obs_pos_x, obs_pos_y, obs_x[3], obs_y[3]; 

    char *elements[2] = {"#", "3->"};
    void show_elements(int val_move1, int val_move2, int val_move3);
    
    protected:

    int move (bool player, int val_move);
    int get_obs_y();
};
//FUNCTIONS OF GAME ELEMENTS
void gameElements::show_elements(int val_move1, int val_move2, int val_move3)
{
    
    obs_x[0] = move(false, val_move1); 
    obs_x[1] = move(false, val_move2);
    obs_x[2] = move(false, val_move3);


    if (obs_x[0] == 15) {
        obs_y[0] = get_obs_y();
    }

    if (obs_x[1] + 5 == 15) {
        obs_y[1] = get_obs_y();
    }

    if (obs_x[2] + 10 == 15) {
        obs_y[2] = get_obs_y();
    }

    lcd.clear();

    lcd.setCursor(obs_x[2] + 10, obs_y[2]);
    lcd.print(elements[0]);
 
    lcd.setCursor(obs_x[1] + 5, obs_y[1]);
    lcd.print(elements[0]);
  
    lcd.setCursor(obs_x[0], obs_y[0]);
    lcd.print(elements[0]);

    player_pos_y = move(true, 0);
    
    lcd.setCursor(player_pos_x, player_pos_y);
    lcd.print(elements[1]);
}

int gameElements::move(bool player, int val_move)
{
    obs_pos_x = 15;

    if (player == false) {
        obs_pos_x -= val_move;
        return obs_pos_x;
    } else {
        if (state == 0) {
            obs_pos_x = 0;
            return obs_pos_x;
        } else {
            obs_pos_x = 1;
            return obs_pos_x; 
        }
    }
}
int gameElements::get_obs_y()
{
    int obs_y;

    obs_y = random(0, 2);
    return obs_y;
}
//ARDUINO LOOP
void change_state_low()
{
    state = HIGH;
}
void change_state_high()
{
    state = LOW;
}
void setup()
{
    lcd.begin(16, 2);
    randomSeed(analogRead(0));
    pinMode(interruptPinButton1, INPUT_PULLUP);
    pinMode(interruptPinButton2, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(interruptPinButton1), change_state_low, LOW);
    attachInterrupt(digitalPinToInterrupt(interruptPinButton2), change_state_high, HIGH);
}
void loop()
{
    gameElements game;

    int inf = 1, val_move0 = 0, val_move1 = 0, val_move2 = 0, val_delay = 1000;

    while (inf == 1) {
        game.show_elements(val_move0, val_move1, val_move2);
        delay(300);

        if (val_move0 == 15) {
            val_move0 = 0;
            
            val_move1++;
            val_move2++;
        } else if (val_move1 == 20) {
            val_move1 = 5;
            
            val_move0++;
            val_move2++;
        } else if (val_move2 == 25) {
            val_move2 = 10;
            
            val_move0++;
            val_move1++;
        } else {
            val_move0++;
            val_move1++;
            val_move2++;
        }

        //val_delay -= 10;
    }
}