# Sign-Language-to-Text-Conversion-using-Arduino
Sign Language to text Conversion using Arduino and Combinational Circuits

The project's main objective is to create an assistive technology device for individuals with
disabilities, particularly aimed at the deaf and dumb community. The project seems to focus on
converting sign language gestures into corresponding voice or text output. In this section, we'll
provide a brief overview of the project's components and its objectives, followed by a
discussion of the importance of developing assistive technologies for individuals with
disabilities.

**Components and Technologies Involved:**
1. Arduino Board: An Arduino board serves as the central microcontroller responsible for processing sensor data and executing the software logic.
2. Sensors: The project uses sensors to capture hand movements. In the provided code, an MPU6050 sensor is employed. This sensor combines both an accelerometer and a
gyroscope, enabling the detection of hand gestures and orientation changes.
3. Software Logic: The software logic includes algorithms for gesture recognition, gesture-to-text conversion, and potentially text-to-speech (TTS) conversion. The code uses conditional statements to recognize gestures and display corresponding text.
4. User Interface: The LiquidCrystal display in the code provides a basic user interface for displaying recognized text. A more advanced project might incorporate a graphical user interface (GUI) or voice output.
5. Communication Technology: To enable communication, the project may employ technologies for transmitting the recognized text. This could include connecting to
external devices, sending text messages, or generating voice output.
6. Accessibility Features: The system may incorporate accessibility features, such as customizable font sizes and contrast settings, to make it user-friendly for individuals with different needs.

![image](https://github.com/PoojaMulbagal/Sign-Language-to-Text-Conversion-using-Arduino/assets/139887877/7d558e40-66e5-4d1b-8c00-40ad1cc516e8)

![image](https://github.com/PoojaMulbagal/Sign-Language-to-Text-Conversion-using-Arduino/assets/139887877/cc54f479-1afd-449f-9199-56fc7fe03f40)

**Limitations and problems:-**
This project in under testing and yet to be called fully functioning sign to voice converter and the biggest problem is the cost at which it is made. It is around 1 Lakh rupees which cannot be affordable for anyone. This project can eliminate the problem of dumb and deaf but to a certain extent with a high cost which cannot be affordable to all.
The biggest problem of the project are the components that are used are if high cost which cannot be acceptable. And the availability of the components at a large number is difficult and won’t be easy to implement. As the main aim of the project is to help society and these projects cost a lot and wont be beneficial for society

**Scope ****:-**
We went through all the projects and found the main problem of cost as all the project consisted of similar flex sensor which are at a high cost and are not at all applicable if we want to create help for society we have to eliminate the use of flex sensor which we did by introducing our own combinational circuit which is combination of resistors and metal contact plates which will be connected and deconnected according to the movement of the fingures and will send signal to aurdino for futher processing.

![image](https://github.com/PoojaMulbagal/Sign-Language-to-Text-Conversion-using-Arduino/assets/139887877/17bfe265-cc59-45b7-b186-4ea68316113f)

**References:**
[1] https://www.kaggle.com/datasets/datamunge/sign-language-mnist
[2] Journal of deaf studies and deaf education
[3] Chattoraj, Subhankar & Vishwakarma, Karan & Paul, Tanmay. (2017). Assistive system for physically disabled people using gesture recognition. 60-65.
10.1109/SIPROCESS.2017.8124506.
[4] K. Rau et al., "Gesture-Based Communication for People with Severe Speech and Physical Impairments: A Review,"
[5] T. Crnovrsanin et al., "Human-Computer Interaction for Deaf People Using Sign Language,"
