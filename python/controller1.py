import os
os.environ["OPENCV_VIDEOIO_MSMF_DISABLE_HW_TRANSFORMS"] = "1"
os.environ["OPENCV_VIDEOIO_PRIORITY_MSMF"] = "0"

import cv2
from cvzone.HandTrackingModule import HandDetector
# import controller as cnt  # Uncomment once tested

# Initialize Hand Detector
detector = HandDetector(detectionCon=0.6, maxHands=2)

# Start camera
video = cv2.VideoCapture(0, cv2.CAP_DSHOW)
video.set(3, 640)
video.set(4, 480)

while True:
    ret, frame = video.read()
    if not ret:
        break

    frame = cv2.flip(frame, 1)  # Keep natural mirror view
    hands, img = detector.findHands(frame, flipType=False)  # Important!

    if hands:
        for hand in hands:
            lmList = hand["lmList"]  # List of 21 landmark points
            if lmList:
                thumb_x = lmList[4][0]   # x-coordinate of thumb tip
                pinky_x = lmList[20][0]  # x-coordinate of pinky tip

                # Determine hand side based on thumb/pinky position
                if thumb_x < pinky_x:
                    handType = "Right"
                else:
                    handType = "Left"

                fingerUp = detector.fingersUp(hand)
                fingerCount = sum(fingerUp)

                # Send to Arduino if needed
                # cnt.led(fingerUp)

                cv2.putText(frame, f"{handType} Hand", (20, 60),
                            cv2.FONT_HERSHEY_COMPLEX, 1, (0, 255, 0), 2)
                cv2.putText(frame, f"Finger count: {fingerCount}", (20, 110),
                            cv2.FONT_HERSHEY_COMPLEX, 1, (255, 255, 255), 2)

                print(f"{handType} Hand → {fingerUp}")

    cv2.imshow("Hand Detection", frame)

    if cv2.waitKey(1) & 0xFF == ord('k'):
        break

video.release()
cv2.destroyAllWindows()


