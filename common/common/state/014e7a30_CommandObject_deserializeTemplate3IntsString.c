// addr: 0x014e7a30
// name: CommandObject_deserializeTemplate3IntsString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeTemplate3IntsString(void * this, void * reader)
    */

bool __thiscall CommandObject_deserializeTemplate3IntsString(void *this,void *reader)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Runs hooks, deserializes a command template/base block, then reads three
                       integer fields and one string field. */
  this_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar1 != '\0') {
    cVar1 = FUN_01407cf0(this_00);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 8));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0xc));
        if (bVar2) {
          bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x10));
          if (bVar2) {
            bVar2 = Deserializer_readString(this_00,(void *)((int)this + 0x14));
            if (bVar2) {
              uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
              return (bool)uVar3;
            }
          }
        }
      }
    }
  }
  return false;
}

