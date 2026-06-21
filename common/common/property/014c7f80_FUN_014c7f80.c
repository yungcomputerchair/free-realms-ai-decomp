// addr: 0x014c7f80
// name: FUN_014c7f80
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AccountCommand_deserializeExtendedAccountData(void * this, void * stream)
    */

bool __thiscall AccountCommand_deserializeExtendedAccountData(void *this,void *stream)

{
  void *deserializer;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int unaff_EDI;
  
                    /* Deserializes an extended account command with several integers, a string/list
                       field, nested component data, and a version-gated boolean. */
  deserializer = stream;
  (**(code **)(*(int *)this + 0x10))(stream,&stream);
  bVar1 = LobbyCommand_deserialize(this,deserializer);
  if (bVar1) {
    bVar1 = Deserializer_readInteger(deserializer,(int *)((int)this + 8));
    if (bVar1) {
      bVar1 = Deserializer_readInteger(deserializer,(int *)((int)this + 0xc));
      if (bVar1) {
        bVar1 = Deserializer_readInteger(deserializer,(int *)((int)this + 0x10));
        if (bVar1) {
          bVar1 = Deserializer_readInteger(deserializer,(int *)((int)this + 0x14));
          if (bVar1) {
            bVar1 = Deserializer_readString(deserializer,(void *)((int)this + 0x18));
            if (bVar1) {
              cVar2 = FUN_01302e20(deserializer,(int)this + 0x34);
              if (cVar2 != '\0') {
                if (1 < (int)this) {
                  Deserializer_readInteger(deserializer,(int *)&stack0xfffffff4);
                  *(bool *)((int)this + 0x38) = unaff_EDI != 0;
                }
                uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer);
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

