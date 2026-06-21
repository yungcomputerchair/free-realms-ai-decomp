// addr: 0x014ae550
// name: FUN_014ae550
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AccountCommand_deserializeWithNestedCommand(void * this, void * stream)
    */

bool __thiscall AccountCommand_deserializeWithNestedCommand(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes an account/network command with nested command data, a
                       string-like field, and three integer fields. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeWithNestedCommand(this,stream);
    if (bVar2) {
      local_4 = stream;
      bVar2 = SynchronizationCommand_deserializeInstanceIDList(&local_4);
      if (bVar2) {
        bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x18));
        if (bVar2) {
          bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x1c));
          if (bVar2) {
            bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x14));
            if (bVar2) {
              uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
              return (bool)uVar3;
            }
          }
        }
      }
    }
  }
  return false;
}

