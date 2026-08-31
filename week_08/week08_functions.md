# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                    | ทำหน้าที่                                                 | Returns                      |
| ------------------------------------------- | ------------------------------------------------------------------ | ---------------------------- |
| `int clamp(int value, int min, int max)`  | จำกัดค่า value ให้อยู่ระหว่าง min และ max | ค่าที่ clamp แล้ว  |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่าง a และ b ตาม t            | ค่าที่คำนวณได้ |
| `int randomRange(int min, int max)`       | สุ่มตัวเลขระหว่าง min และ max                  | ค่าสุ่ม               |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์                                   | ค่าเปอร์เซ็นต์ |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

**คำตอบ: HP=150 เป็นค่าต้นที่เกินเงื่อนไข เมื่อเข้าclampจึงถูกเอาไปไว้ในvalue(เก็บเป็น150)แต่แสดงออกไหม่เป็น100ตามเงื่อนไข** 

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ: resultถูกประกาศในlerp ทำให้maimเอามาใช้ไม่ได้เพราะอยู่นอก local scope**

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ: min ในrandomrangeเป็นตัวก็อปปี้ของ dicemin ที่ส่งเข้าไปในฟังชัน diceminอยู่ใน main เมื่อเปลี่ยนminจึงไม่มีผลต่อdicemin**

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ: current ในpercentofเป็นตัวก็อปปี้ของ score ที่ส่งเข้าไปในฟังชัน เมื่อแก้ค่าcurrentภายในฟังก์ชัน จะกระทบเฉพาะตัวแปรภายในฟังก์ชันเท่านั้น ไม่ได้เปลี่ยนค่าของscoreในmain
