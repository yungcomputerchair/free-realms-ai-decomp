// addr: 0x014e5d10
// name: CommandObject_deserializeBaseAndValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeBaseAndValue(void * this, void * reader) */

bool __thiscall CommandObject_deserializeBaseAndValue(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs virtual deserialize hooks, reads the base/integer field via
                       Deserializer_readIntegerField, then deserializes an additional value field
                       with FUN_01300540. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    cVar1 = Deserializer_readIntegerField(reader);
    if (cVar1 != '\0') {
      local_4 = reader;
      bVar2 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 8));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

