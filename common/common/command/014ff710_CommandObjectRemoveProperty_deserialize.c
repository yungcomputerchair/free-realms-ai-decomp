// addr: 0x014ff710
// name: CommandObjectRemoveProperty_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectRemoveProperty.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectRemoveProperty_deserialize(void * this, void * stream) */

void __thiscall CommandObjectRemoveProperty_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  int unaff_ESI;
  void **ppvStack_10;
  
                    /* Deserializes RemoveProperty command data: common fields, property/value
                       member data, and version-gated integer/boolean fields. Assertions cite
                       CommandObjectRemoveProperty.cpp. */
  stream_00 = stream;
  ppvStack_10 = &stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveProperty.cpp",0x87);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveProperty.cpp",0x8a);
  }
  cVar1 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveProperty.cpp",0x8d);
  }
  if (2 < unaff_ESI) {
    cVar1 = (**(code **)(*(int *)((int)this + 300) + 0x24))(stream_00);
    if (cVar1 == '\0') {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveProperty.cpp",0x91);
    }
    bVar2 = Deserializer_readInteger(stream_00,(int *)&ppvStack_10);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveProperty.cpp",0x94);
    }
    *(bool *)((int)this + 0x128) = ppvStack_10 != (void **)0x0;
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

