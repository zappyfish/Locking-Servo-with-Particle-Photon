Servo myservo;

int pos = 0;

void setup() {
	myservo.attach(0);
	Spark.function("checkConnect", checkConnection);
	Spark.function("setpos", setPosition);

}

void loop() {

}
int checkConnect(String garbage) {
	return 1;
}

int setPosition(String myPos) {
	pos = myPos.toInt();
	myservo.write(pos);
	return 0;
}