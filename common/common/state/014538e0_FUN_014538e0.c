// addr: 0x014538e0
// name: FUN_014538e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool read_validate_and_finalize(void * this, void * buffer) */

bool __thiscall read_validate_and_finalize(void *this,void *buffer)

{
  void *reader;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Calls a virtual read/deserialize step, validates the buffer/object with
                       another helper, then calls a virtual finalize/write step; exact class is not
                       known. */
  reader = buffer;
  cVar1 = (**(code **)(*(int *)this + 0x10))(buffer,&buffer);
  if (cVar1 != '\0') {
    bVar2 = CommandObject_deserializeTargetQueryPayload(this,reader);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
      return (bool)uVar3;
    }
  }
  return false;
}

