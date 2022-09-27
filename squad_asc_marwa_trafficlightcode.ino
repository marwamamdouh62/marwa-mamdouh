int red = 3;
int yellow = 4;
int green = 5;
int button = 7;
int count = 0;
void setup()
{
  pinMode(button, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop() {
  if (digitalRead(button) == HIGH)
    count++;
  if (count == 1)
  { digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
  }
  else if (count == 2)
  { digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
  }
  else if (count == 3)
  { digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
  } 
  else if (count == 4)
  { digitalWrite(green, LOW); 
    digitalWrite(yellow, HIGH);
  }  
  else if (count == 5)
  { digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    count = 1;
  }
  delay(250);
}
