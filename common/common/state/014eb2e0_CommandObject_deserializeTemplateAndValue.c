// addr: 0x014eb2e0
// name: CommandObject_deserializeTemplateAndValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeTemplateAndValue(void * this, void * reader) */

bool __thiscall CommandObject_deserializeTemplateAndValue(void *this,void *reader)

{
  char cVar1;
  undefined1 uVar2;
  void *local_4;
  
                    /* Runs hooks, deserializes command template/base, then deserializes a value
                       field with FUN_01300540 before post-hook. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_01407cf0(reader);
    if (cVar1 != '\0') {
      local_4 = reader;
      Deserializer_readIntegerVector(&local_4,(void *)((int)this + 8));
      uVar2 = (**(code **)(*(int *)this + 0x14))(reader);
      return (bool)uVar2;
    }
  }
  return false;
}

