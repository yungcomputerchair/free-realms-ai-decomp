// addr: 0x015035c0
// name: CommandObjectMultiAction_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectMultiAction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectMultiAction_deserialize(void * this, void * stream) */

void __thiscall CommandObjectMultiAction_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  int unaff_EDI;
  
                    /* Deserializes MultiAction command state, reading common command data and a
                       version-gated boolean/integer flag. Assertions cite
                       CommandObjectMultiAction.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMultiAction.cpp",0x8f);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMultiAction.cpp",0x92);
  }
  if (3 < (int)this) {
    bVar2 = Deserializer_readInteger(stream_00,(int *)&stack0xfffffff4);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMultiAction.cpp",0x96);
    }
    *(bool *)((int)this + 0x11c) = unaff_EDI != 0;
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

