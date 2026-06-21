// addr: 0x014fc370
// name: CommandObjectSetProperty_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectSetProperty.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectSetProperty_deserialize(void * this, void * stream) */

void __thiscall CommandObjectSetProperty_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  int unaff_ESI;
  void **ppvStack_10;
  
                    /* Deserializes SetProperty command data: common fields, an integer property id,
                       a member value object, and a version-gated boolean flag. Assertions cite
                       CommandObjectSetProperty.cpp. */
  stream_00 = stream;
  ppvStack_10 = &stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectSetProperty.cpp",0x1e8);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectSetProperty.cpp",0x1eb);
  }
  bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0x11c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectSetProperty.cpp",0x1ee);
  }
  cVar1 = (**(code **)(*(int *)((int)this + 0x120) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectSetProperty.cpp",0x1f1);
  }
  if (2 < unaff_ESI) {
    bVar2 = Deserializer_readInteger(stream_00,(int *)&ppvStack_10);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectSetProperty.cpp",0x1f5);
    }
    *(bool *)((int)this + 300) = ppvStack_10 != (void **)0x0;
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

