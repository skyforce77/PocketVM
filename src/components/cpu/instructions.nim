const
  #Basic set
  #todo
  INSTRUCTION_BEEP*: uint8 = 0x01 #Need two byte

  #Registers
  INSTRUCTION_MOVE*: uint8 = 0x10 #Need arg1 (byte/int/long/register) and arg2 register
  #todo
  INSTRUCTION_PUSH*: uint8 = 0x11
  INSTRUCTION_POP*: uint8 = 0x12

  #Loops
  #todo
  INSTRUCTION_GOTO*: uint8 = 0x20
  INSTRUCTION_IF_EQ*: uint8 = 0x21
  INSTRUCTION_IF_NE*: uint8 = 0x22
  INSTRUCTION_IF_GT*: uint8 = 0x23
  INSTRUCTION_IF_LW*: uint8 = 0x24
  INSTRUCTION_IF_GE*: uint8 = 0x25
  INSTRUCTION_IF_LE*: uint8 = 0x26

  #Operations
  INSTRUCTION_ADD*: uint8 = 0x31 #Need two args (byte/int/long/register) and arg3 register
  INSTRUCTION_SUB*: uint8 = 0x32 #Same as above
  INSTRUCTION_MUL*: uint8 = 0x33 #Same too
  INSTRUCTION_DIV*: uint8 = 0x34 #Too
  INSTRUCTION_MOD*: uint8 = 0x35 #Too...

  #Binary operations
  #todo
  INSTRUCTION_SHIFT_LEFT*: uint8 = 0x40
  INSTRUCTION_SHIFT_RIGHT*: uint8 = 0x41
  INSTRUCTION_AND*: uint8 = 0x42
  INSTRUCTION_OR*: uint8 = 0x43
  INSTRUCTION_XOR*: uint8 = 0x44

  #Debug
  INSTRUCTION_GET_CHAR*: uint8 = 0xfd #Need one byte or register #todo
  INSTRUCTION_PUT_CHAR*: uint8 = 0xfe #Need one register
  INSTRUCTION_PRINT*: uint8 = 0xff #Need one string, byte or register
