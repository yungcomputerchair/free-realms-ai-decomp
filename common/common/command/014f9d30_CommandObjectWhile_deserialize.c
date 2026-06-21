// addr: 0x014f9d30
// name: CommandObjectWhile_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectWhile.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectWhile_deserialize(void * this, void * stream) */

void __thiscall CommandObjectWhile_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  int unaff_EDI;
  void *local_4;
  
                    /* Deserializes While command common state and conditionally reads a versioned
                       boolean/int flag stored near offset 0x78. Assertions cite
                       CommandObjectWhile.cpp. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWhile.cpp",0x4b);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWhile.cpp",0x4e);
  }
  if (unaff_EDI == 2) {
    bVar2 = Deserializer_readInteger(stream,(int *)&local_4);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWhile.cpp",0x52);
    }
    *(bool *)((int)this + 0x78) = local_4 != (void *)0x0;
  }
  if (2 < unaff_EDI) {
    bVar2 = Deserializer_readInteger(stream,(int *)&local_4);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWhile.cpp",0x57);
    }
    *(bool *)((int)this + 0x78) = local_4 != (void *)0x0;
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

