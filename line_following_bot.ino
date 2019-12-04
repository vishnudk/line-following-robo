// 0 for black and 1 for white
int moto_1_left;
int moto_2_left;
int moto_1_right;
int moto_2_right;
int colour_value_colo_l;
int colour_value_colo_r;
void setup() {
  // put your setup code here, to run once:
  pinMode(moto_1_left,OUTPUT);
  pinMode(moto_2_left,OUTPUT);
  pinMode(moto_1_right,OUTPUT);
  pinMode(moto_2_right,OUTPUT);
  pinMode(colour_value_colo_r,INPUT);
  pinMode(colour_value_colo_l,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int colour_val_r=check_colour(colour_value_colo_r);
  int colour_val_l=check_colour(colour_value_colo_l);
  if(colour_val_l==0 && colour_val_r==1)
  {
    turn_left();
  }
  if(colour_val_l==1 && colour_val_r==0)
  {
    turn_right();
  }
  if(colour_val_l==1 && colour_val_r==1)
  {
    stop_bot();
  }
}
public void stop_bot(){
  moto_1_left=0;
  moto_1_right=0;
  moto_2_left=0;
  moto_2_right=0;
  
}
public void turn_left(){
  
}
public void turn_right(){
  
}
public void go_straight(){
  
}
public int check_colour(int x){
  if(x<1200)
  return 0;
  else 
  return 1;
}
