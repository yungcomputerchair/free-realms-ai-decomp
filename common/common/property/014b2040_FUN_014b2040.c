// addr: 0x014b2040
// name: FUN_014b2040
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_014b2040(void * this, void * stream) */

bool __thiscall FUN_014b2040(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Scoped deserialization wrapper using FUN_014ae550 for field reads. It
                       propagates nested read failures and masks the return to a boolean false on
                       failure. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = AccountCommand_deserializeWithNestedCommand(this,stream_00);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(stream_00);
      return (bool)uVar3;
    }
  }
  return false;
}

