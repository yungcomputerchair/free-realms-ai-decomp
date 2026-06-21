// addr: 0x014e9190
// name: CommandObject_deserializeTemplateIntegerVector
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeTemplateIntegerVector(void * this, void *
   reader) */

bool __thiscall CommandObject_deserializeTemplateIntegerVector(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs hooks, deserializes command template/base, then reads an integer
                       vector/value-list field. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_01407cf0(reader);
    if (cVar1 != '\0') {
      local_4 = reader;
      FUN_00420fb6();
      bVar2 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 8));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

