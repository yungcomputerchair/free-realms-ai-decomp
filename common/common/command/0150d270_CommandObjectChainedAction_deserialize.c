// addr: 0x0150d270
// name: CommandObjectChainedAction_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectChainedAction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectChainedAction_deserialize(void * this, void * stream) */

void __thiscall CommandObjectChainedAction_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  int unaff_EDI;
  void *local_4;
  
                    /* Deserializes ChainedAction command state, including common command data and
                       version-gated boolean/integer flag storage near offset 0x78. Assertions cite
                       CommandObjectChainedAction.cpp. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectChainedAction.cpp",0x51);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectChainedAction.cpp",0x54);
  }
  if (unaff_EDI == 2) {
    bVar2 = Deserializer_readInteger(stream,(int *)&local_4);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectChainedAction.cpp",0x58);
    }
    *(bool *)((int)this + 0x78) = local_4 != (void *)0x0;
  }
  if (2 < unaff_EDI) {
    bVar2 = Deserializer_readInteger(stream,(int *)&local_4);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectChainedAction.cpp",0x5d);
    }
    *(bool *)((int)this + 0x78) = local_4 != (void *)0x0;
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

