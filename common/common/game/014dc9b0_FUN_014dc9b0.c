// addr: 0x014dc9b0
// name: FUN_014dc9b0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_014dc9b0(void * this, void * stream) */

bool __thiscall FUN_014dc9b0(void *this,void *stream)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  
                    /* Deserializes a command using only the base GameCommand fields and stream
                       begin/end hooks; class identity is not evident in the briefing. */
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

