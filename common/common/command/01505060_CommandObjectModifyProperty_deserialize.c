// addr: 0x01505060
// name: CommandObjectModifyProperty_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectModifyProperty.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectModifyProperty_deserialize(void * this, void * stream) */

void __thiscall CommandObjectModifyProperty_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  void *local_4;
  
                    /* Deserializes ModifyProperty command data: common fields, integer property id,
                       value members, and version-gated extra member data. Assertions cite
                       CommandObjectModifyProperty.cpp. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectModifyProperty.cpp",0x11f);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectModifyProperty.cpp",0x122);
  }
  bVar3 = Deserializer_readInteger(stream,(int *)&local_4);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectModifyProperty.cpp",0x125);
  }
  pcVar1 = *(code **)(*(int *)((int)this + 0x120) + 0x24);
  *(void **)((int)this + 0x11c) = local_4;
  cVar2 = (*pcVar1)(stream);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectModifyProperty.cpp",0x129);
  }
  bVar3 = Deserializer_readInteger(stream,(int *)((int)this + 300));
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectModifyProperty.cpp",300);
  }
  if (2 < (int)&local_4) {
    cVar2 = (**(code **)(*(int *)((int)this + 0x130) + 0x24))(stream);
    if (cVar2 == '\0') {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectModifyProperty.cpp",0x130);
    }
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

