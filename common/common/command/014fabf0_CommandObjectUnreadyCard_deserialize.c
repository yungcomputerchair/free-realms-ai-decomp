// addr: 0x014fabf0
// name: CommandObjectUnreadyCard_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectUnreadyCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectUnreadyCard_deserialize(void * this, void * stream) */

void __thiscall CommandObjectUnreadyCard_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes an UnreadyCard command by wrapping stream open/close around the
                       shared SetProperty-style command deserializer. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUnreadyCard.cpp",0x4a);
  }
  CommandObjectSetProperty_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUnreadyCard.cpp",0x4d);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

