// addr: 0x014fe540
// name: CommandObjectReshuffle_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectReshuffle.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectReshuffle_deserialize(void * this, void * stream) */

void __thiscall CommandObjectReshuffle_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes a Reshuffle command by reading base CommandObject state between
                       stream begin/end calls. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectReshuffle.cpp",0x37);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectReshuffle.cpp",0x3a);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

