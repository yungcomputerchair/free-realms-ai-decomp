// addr: 0x015263d0
// name: CommandObject_deserializeSevenStringValueBlocks
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeSevenStringValueBlocks(void * this, void *
   reader) */

bool __thiscall CommandObject_deserializeSevenStringValueBlocks(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs hooks, reads an integer/base field, then deserializes seven string/value
                       component blocks. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readIntegerWithHooks(this,reader);
    if (bVar2) {
      FUN_012aa320();
      bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 8));
      if (bVar2) {
        FUN_012aa320();
        bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 0x18));
        if (bVar2) {
          FUN_012aa320();
          bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 0x28));
          if (bVar2) {
            FUN_012aa320();
            bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 0x38));
            if (bVar2) {
              FUN_012aa320();
              bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 0x48));
              if (bVar2) {
                FUN_012aa320();
                bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 0x58));
                if (bVar2) {
                  FUN_012aa320();
                  bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 0x68));
                  if (bVar2) {
                    uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
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
  }
  return false;
}

