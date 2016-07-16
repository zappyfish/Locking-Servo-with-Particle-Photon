Servo myservo;

int pos = 0;
int connect = 1;

void setup() {
	myservo.attach(0);
	Spark.function("checkConnect", &connect, INT);
	Spark.function("setpos", setPosition);

}

void loop() {

}


int setPosition(String myPos) {
	pos = myPos.toInt();
	myservo.write(pos);
	return 0;
}