import cv2
import mediapipe as mp
import time

mp_hands = mp.solutions.hands
hands = mp_hands.Hands(
    max_num_hands=1,
    static_image_mode=False,
    min_detection_confidence=0.7,
    min_tracking_confidence=0.7
)
mp_drawing = mp.solutions.drawing_utils

cap = cv2.VideoCapture(0)
cap.set(3, 320)
cap.set(4, 240)

prev_time = 0

while True:
    ret, frame = cap.read()
    if not ret:
        break

    frame = cv2.flip(frame, 1)
    rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    # only process every 2nd frame to reduce load
    curr_time = time.time()
    if curr_time - prev_time > 0.05:  # ~20 FPS
        results = hands.process(rgb)
        prev_time = curr_time

    if results and results.multi_hand_landmarks:
        for lm in results.multi_hand_landmarks:
            mp_drawing.draw_landmarks(frame, lm, mp_hands.HAND_CONNECTIONS)

    cv2.imshow("Hand Tracking (Light)", frame)
    if cv2.waitKey(5) & 0xFF == 27:
        break

cap.release()
cv2.destroyAllWindows()