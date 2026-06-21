// addr: 0x014da440
// name: FUN_014da440
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_014da440(void * this, void * stream) */

bool __thiscall FUN_014da440(void *this,void *stream)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  
                    /* Deserializes a command that has no visible subclass payload beyond the
                       GameCommand base, but the class identity is not evident from strings or RTTI
                       in this briefing. */
  pvVar1 = stream;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar2 != '\0') {
    cVar2 = GameCommand_deserializeCommon(pvVar1);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*(int *)this + 0x14))(pvVar1);
      return (bool)uVar3;
    }
  }
  return false;
}

