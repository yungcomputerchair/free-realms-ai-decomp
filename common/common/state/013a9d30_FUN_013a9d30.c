// addr: 0x013a9d30
// name: FUN_013a9d30
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool deserialize_nested_network_command_with_int(void * cmd, void * in) */

bool __thiscall deserialize_nested_network_command_with_int(void *this,void *cmd,void *in)

{
  void *reader;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes an integer followed by a nested network command; specific
                       command class is not identifiable. */
  reader = cmd;
  cVar1 = (**(code **)(*(int *)this + 0x10))(cmd,&cmd);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeWithNestedCommand(this,reader);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 4));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 8));
        if (bVar2) {
          uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

