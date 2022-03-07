# 1.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| HLR1 | Rain Sensor | Sensor value <5  | Servo motor rotates 180 degrees| Servo motor rotates 180 degrees | ✅ |
| HLR1 | LDR Sensor | Sensor value>=650 && Sensor value <=750 | Servo motor rotates 90 degrees | Servo motor rotates 90 degrees | ✅ |
| HLR2 | Ultrasonic Sensor | Distance>10cm | Display message | Display message | ✅ |



# 1.2 LOW LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |

| Test ID (for LCD)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for LCD_Char() | A  | A |  A | ✅ |
| 02 | Check for LCD_String() | Manjunadh | Manjunadh | Manjunadh | ✅ |
| 03 | Check for LCD_String() | Home | Home | Home | ✅ |


| Test ID (for ADC)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ADC_Read() | 0V | 0 | 0 | ✅ |
| 02 | Check for ADC_Read() | 5V | 1023 |  1023 | ✅ |

| Test ID (for mapping, map)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for map() | map(20, 492, 478, 20, 35) | 525 |  525 | ✅ |
| 02 | Check for map() | map(25, 492, 478, 20, 35) | 520 |  520 | ✅ |
| 03 | Check for map() | map(30, 492, 478, 20, 35) | 515 |  515 | ✅ |
| 04 | Check for map() | map(35, 492, 478, 20, 35) | 509 |  509 | ✅ |
---

