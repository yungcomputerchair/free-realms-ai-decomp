// addr: 0x01502230
// name: CommandObjectPlayCard_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectPlayCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectPlayCard_deserialize(void * this, void * stream) */

void __thiscall CommandObjectPlayCard_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes PlayCard command data by reading base CommandObject fields
                       between stream begin/end calls. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPlayCard.cpp",0x9a);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPlayCard.cpp",0x9d);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

