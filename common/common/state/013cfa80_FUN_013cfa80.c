// addr: 0x013cfa80
// name: FUN_013cfa80
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool deserialize_command_with_string(void * cmd, void * in) */

bool __thiscall deserialize_command_with_string(void *this,void *cmd,void *in)

{
  void *reader;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Runs network-command deserialize hooks and reads a string field. Specific
                       command class is not identifiable. */
  reader = cmd;
  cVar1 = (**(code **)(*(int *)this + 0x10))(cmd,&cmd);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeWithHooks(this,reader);
    if (bVar2) {
      bVar2 = Deserializer_readString(reader,(void *)((int)this + 4));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

