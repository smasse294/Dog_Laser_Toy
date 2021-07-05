# Dog_Laser_Toy
<p>A Pan/Tilt Dog Laser Toy</p>
<p><br /><strong>Features:</strong></p>
<ul>
<li>Controls two servo motors to move a laser pointer module via a pan/tilt module</li>
<li><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Movements of the laser are randomly genererated</span></li>
<li><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Buzzer to grab dogs attention that goes off after a set number of moves of the laser</span></li>
<li><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">An automatic sytandby mode to give dogs (and humans) a rest that can be sent in the sketch or adjusted with a pot</span></li>
<li><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">LED to know when the system is in standby mode &amp; has power</span></li>
<li><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Sketch has constants that can be adjsuted prior to uploading for all the major functions including: </span>
<ol>
<li><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Number of Laser moves between beeps</span></li>
<li><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> How may moves if programed, can also be set to 0 to use the pot instead to set the number of moves</span></li>
<li><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Delay between moves of the laser pointer</span></li>
<li><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Min and Max degrees of rotation of both axises</span></li>
</ol>
</li>
</ul>
<p>&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br /><strong>Bill of Materials:</strong></p>
<ul>
<li>Arduino (Uno, Nano or comparable will suffice)
<ul>
<li>Uno: &nbsp;<a href="https://smile.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU">https://smile.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU</a></li>
<li>Nano: &nbsp;<a href="https://smile.amazon.com/ELEGOO-Arduino-ATmega328P-Without-Compatible/dp/B0713XK923">https://smile.amazon.com/ELEGOO-Arduino-ATmega328P-Without-Compatible/dp/B0713XK923</a></li>
</ul>
</li>
<li>Micro-Servos (2x) (may also be included with the Pan/Tilt kit)
<ul>
<li><a href="https://smile.amazon.com/Micro-Servos-Helicopter-Airplane-Controls/dp/B07MLR1498">https://smile.amazon.com/Micro-Servos-Helicopter-Airplane-Controls/dp/B07MLR1498</a></li>
</ul>
</li>
<li>Pan/Tilt Assembly
<ul>
<li>Generic (w/ Servos): &nbsp;<a href="https://smile.amazon.com/Camera-Platform-Anti-Vibration-Servos-Aircraft/dp/B0775R6JFF">https://smile.amazon.com/Camera-Platform-Anti-Vibration-Servos-Aircraft/dp/B0775R6JFF</a></li>
<li>Adafruit (w/ Servos): &nbsp;<a href="https://smile.amazon.com/Adafruit-Mini-Pan-Tilt-Kit-Assembled/dp/B00PY3LQ2Y">https://smile.amazon.com/Adafruit-Mini-Pan-Tilt-Kit-Assembled/dp/B00PY3LQ2Y</a></li>
</ul>
</li>
<li>Laser Pointer Module
<ul>
<li><a href="https://smile.amazon.com/Laser-Transmitter-Module-Arduino-10pcs/dp/B07FQ6696X">https://smile.amazon.com/Laser-Transmitter-Module-Arduino-10pcs/dp/B07FQ6696X</a></li>
</ul>
</li>
<li>Power Supply capable of powering the arduino and electroncis (can be USB as testing shows the whole package can be powered off the board</li>
<li>Laser Pointer Module
<ul>
<li><a href="https://smile.amazon.com/Laser-Transmitter-Module-Arduino-10pcs/dp/B07FQ6696X">https://smile.amazon.com/Laser-Transmitter-Module-Arduino-10pcs/dp/B07FQ6696X</a></li>
</ul>
</li>
<li>Basic Electronic Components:
<ul>
<li>2 LEDs (One for Power (optional) and one for Standby)</li>
<li>Resistors (Sized to protect the LEDs &amp; to pull-up/pulldown the Standby button)</li>
<li>Buzzer</li>
<li>2 Buttons (Reset and Standby)</li>
<li>Potentiometer (Optional)</li>
<li>Switch (optional) to allow manual shutting off of the buzzer (for when it becomes too much)<br />&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</li>
</ul>
</li>
</ul>
<p><strong>See it in action:</strong></p>
<p>&nbsp;</p>
https://www.youtube.com/8UpC5gDLtuk
