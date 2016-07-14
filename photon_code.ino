Servo myservo;

int pos = 0;

void setup() {
	myservo.attach(0)
	Spark.function("checkConnection", checkConnection);
	Spark.function("setpos", setPosition);

}

void loop() {

}

String checkConnection() {
	return "ok";
}

int setPosition(String myPos) {
	pos = myPos.toInt();
	myservo.write(pos);
	return 0;
}