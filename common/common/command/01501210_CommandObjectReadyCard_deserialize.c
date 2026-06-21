// addr: 0x01501210
// name: CommandObjectReadyCard_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectReadyCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectReadyCard_deserialize(void * this, void * stream) */

void __thiscall CommandObjectReadyCard_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes a ReadyCard command by wrapping stream begin/end around the
                       shared SetProperty-style command deserializer. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectReadyCard.cpp",0x59);
  }
  CommandObjectSetProperty_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectReadyCard.cpp",0x5c);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

