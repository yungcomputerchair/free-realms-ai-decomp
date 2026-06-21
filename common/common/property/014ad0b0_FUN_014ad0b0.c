// addr: 0x014ad0b0
// name: FUN_014ad0b0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_014ad0b0(void * this, void * stream) */

bool __thiscall FUN_014ad0b0(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a scoped object by delegating to FUN_014ae550, which reads a
                       base state block plus several scalar fields. It returns false if the delegate
                       or scope finalization fails. */
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

