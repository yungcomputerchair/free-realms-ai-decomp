// addr: 0x01506470
// name: CommandObjectIntroduceCard_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectIntroduceCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectIntroduceCard_deserialize(void * this, void * stream) */

void __thiscall CommandObjectIntroduceCard_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes IntroduceCard command data by reading base CommandObject state
                       inside stream begin/end calls. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectIntroduceCard.cpp",0x39);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectIntroduceCard.cpp",0x3c);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

