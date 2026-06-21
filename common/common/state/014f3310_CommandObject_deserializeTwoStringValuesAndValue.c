// addr: 0x014f3310
// name: CommandObject_deserializeTwoStringValuesAndValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeTwoStringValuesAndValue(void * this, void *
   reader) */

bool __thiscall CommandObject_deserializeTwoStringValuesAndValue(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs hooks, deserializes two string/value blocks with FUN_01301640 and one
                       value with FUN_01300540. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    local_4 = reader;
    bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 4));
    if (bVar2) {
      bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 0x14));
      if (bVar2) {
        bVar2 = Deserializer_readIntegerVector(&stack0xfffffff0,(void *)((int)this + 0x24));
        if (bVar2) {
          uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

