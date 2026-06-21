// addr: 0x0150f9e0
// name: CommandObjectAddAttrModFilter_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAddAttrModFilter.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectAddAttrModFilter_deserialize(void * this, void * stream) */

void __thiscall CommandObjectAddAttrModFilter_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  undefined4 unaff_ESI;
  void *local_4;
  
                    /* Deserializes AddAttrModFilter command state, reading common command data, a
                       member value/filter object, and an integer stored near offset 0x128.
                       Assertions cite CommandObjectAddAttrModFilter.cpp. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddAttrModFilter.cpp",0x42);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddAttrModFilter.cpp",0x45);
  }
  cVar2 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddAttrModFilter.cpp",0x48);
  }
  bVar3 = Deserializer_readInteger(stream,(int *)&stack0xfffffff8);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddAttrModFilter.cpp",0x4b);
  }
  pcVar1 = *(code **)(*(int *)this + 0x14);
  *(undefined4 *)((int)this + 0x128) = unaff_ESI;
  (*pcVar1)(stream);
  return;
}

