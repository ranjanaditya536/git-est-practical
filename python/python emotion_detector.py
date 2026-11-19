import cv2
import serial
import time
from fer import FERDetector

# Connect to Arduino (update COM port if needed)
arduino = serial.Serial('COM3', 9600)
time.sleep(2)

# Initialize FER detector
detector = FERDetector()

# Open webcam
cap = cv2.VideoCapture(0)
print("🎥 Emotion Detection Started. Press 'q' to quit.")

while True:
    ret, frame = cap.read()
    if not ret:
        break

    # Detect emotions
    result = detector.detect_emotions(frame)
    if result:
        dominant_emotion = result[0]['dominant_emotion']
        print("Detected Emotion:", dominant_emotion)

        # Send to Arduino
        if dominant_emotion == "happy":
            arduino.write(b'H')
        elif dominant_emotion == "sad":
            arduino.write(b'S')
        elif dominant_emotion == "angry":
            arduino.write(b'A')
        elif dominant_emotion == "surprise":
            arduino.write(b'U')
        else:
            arduino.write(b'N')

    # Show frame
    cv2.imshow("Emotion Detection", frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
arduino.close()
