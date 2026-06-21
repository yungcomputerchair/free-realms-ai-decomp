// addr: 0x01508a30
// name: CommandObjectGetTopCard_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectGetTopCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectGetTopCard_deserialize(void * this, void * stream) */

void __thiscall CommandObjectGetTopCard_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes GetTopCard command data by reading base CommandObject fields
                       between stream begin/end calls. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectGetTopCard.cpp",0x35);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectGetTopCard.cpp",0x38);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

