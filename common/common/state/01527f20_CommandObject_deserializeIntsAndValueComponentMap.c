// addr: 0x01527f20
// name: CommandObject_deserializeIntsAndValueComponentMap
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeIntsAndValueComponentMap(void * this, void *
   reader) */

bool __thiscall CommandObject_deserializeIntsAndValueComponentMap(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs hooks, reads integer/base data, two integer fields, and a ValueData
                       component-pair map. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readIntegerWithHooks(this,reader);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x14));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x18));
        if (bVar2) {
          local_4 = reader;
          bVar2 = ValueData_deserializeComponentPairMap(&local_4);
          if (bVar2) {
            uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
            return (bool)uVar3;
          }
        }
      }
    }
  }
  return false;
}

