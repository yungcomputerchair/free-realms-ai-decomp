// addr: 0x014e4db0
// name: FUN_014e4db0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchCommand_deserializeWithObjects(void * this, void * stream) */

bool __thiscall ArchCommand_deserializeWithObjects(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_ESI;
  int iVar4;
  int local_4;
  
                    /* Deserializes an archetype/network command with command hooks, object/list
                       data, integers, and nested component data. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeWithHooks(this,stream);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(stream,(int *)&stack0xfffffff0);
      if (bVar2) {
        FUN_014e4370();
        iVar4 = 0;
        if (0 < unaff_ESI) {
          do {
            local_4 = 0;
            cVar1 = FUN_01302e20(stream,&local_4);
            if (cVar1 == '\0') {
              return false;
            }
            if (local_4 != 0) {
              FUN_014e4b90(&local_4);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < unaff_ESI);
        }
        uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

