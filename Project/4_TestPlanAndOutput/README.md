# 1.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| HLR1 | Rain Sensor | Sensor value <5  | Servo motor rotates 180 degrees| Servo motor rotates 180 degrees | ✅ |
| HLR1 | LDR Sensor | Sensor value <5 | Servo motor rotates 90 degrees | Servo motor rotates 90 degrees | ✅ |
| HLR2 | Ultrasonic Sensor | Distance > 30cm | Display message | Display message | ✅ |
| HLR3 | Ultrasonic Sensor | Distance < 30cm |  Servo motor rotates 180 degrees |  Servo motor rotates 180 degrees | ✅ |

# 1.2 LOW LEVEL TEST PLAN
| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| LLR1 | Rain Sensor | Sensor value <5  | Dump the waste in wet bin| Dump the waste in wet bin | ✅ |
| HLR1 | LDR Sensor | Sensor value <5 | Dump the waste in dry bin | Dump the waste in dry bin | ✅ |
| HLR2 | Ultrasonic Sensor | Distance > 30cm | Bin is full | Bin is full | ✅ |
| HLR3 | Ultrasonic Sensor | Distance < 30cm |  Open the lid of the bin|  Open the lid of the bin | ✅ |



