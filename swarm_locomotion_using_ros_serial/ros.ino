
void messageCb( const std_msgs::String& toggle_msg){
if(toggle_msg.data[0]=='F')  //check 1st letter of the string
 forward();
else if(toggle_msg.data[0]=='B')  //check 1st letter of the string
 backward();
else if(toggle_msg.data[0]=='R')  //check 1st letter of the string
 rightTurn();
else if(toggle_msg.data[0]=='L')  //check 1st letter of the string
 leftTurn();
else if(toggle_msg.data[0]=='S')  //check 1st letter of the string
 brake(); 
else
 freeRun();
}

ros::Subscriber<std_msgs::String> sub("motion", &messageCb );
