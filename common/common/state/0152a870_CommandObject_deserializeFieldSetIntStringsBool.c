// addr: 0x0152a870
// name: CommandObject_deserializeFieldSetIntStringsBool
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeFieldSetIntStringsBool(void * this, void *
   reader) */

bool __thiscall CommandObject_deserializeFieldSetIntStringsBool(void *this,void *reader)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  void *local_4;
  
                    /* Runs hooks, reads a base block, one integer, two strings, and an
                       integer-backed boolean. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar2 != '\0') {
    cVar2 = FUN_013bcf60(reader);
    if (cVar2 != '\0') {
      bVar3 = Deserializer_readInteger(reader,(int *)((int)this + 0x44));
      if (bVar3) {
        bVar3 = Deserializer_readString(reader,(void *)((int)this + 0x4c));
        if (bVar3) {
          bVar3 = Deserializer_readString(reader,(void *)((int)this + 0x68));
          if (bVar3) {
            bVar3 = Deserializer_readInteger(reader,(int *)&local_4);
            if (bVar3) {
              pcVar1 = *(code **)(*(int *)this + 0x14);
              *(bool *)((int)this + 0x48) = local_4 != (void *)0x0;
              uVar4 = (*pcVar1)(reader);
              return (bool)uVar4;
            }
          }
        }
      }
    }
  }
  return false;
}

