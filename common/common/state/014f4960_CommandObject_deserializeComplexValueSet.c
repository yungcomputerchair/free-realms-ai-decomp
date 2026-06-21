// addr: 0x014f4960
// name: CommandObject_deserializeComplexValueSet
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeComplexValueSet(void * this, void * reader) */

bool __thiscall CommandObject_deserializeComplexValueSet(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs hooks and deserializes a sequence of value and string/value fields at
                       several offsets. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    local_4 = reader;
    bVar2 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 0x34));
    if (bVar2) {
      bVar2 = Deserializer_readStringVector(&stack0xfffffff0,(void *)((int)this + 0x44));
      if (bVar2) {
        bVar2 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 0x54));
        if (bVar2) {
          bVar2 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 4));
          if (bVar2) {
            bVar2 = Deserializer_readStringVector(&stack0xfffffff0,(void *)((int)this + 0x14));
            if (bVar2) {
              bVar2 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 0x24));
              if (bVar2) {
                uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
                return (bool)uVar3;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

