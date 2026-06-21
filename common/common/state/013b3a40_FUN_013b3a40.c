// addr: 0x013b3a40
// name: FUN_013b3a40
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool deserialize_int_and_component(void * cmd, void * in) */

bool __thiscall deserialize_int_and_component(void *this,void *cmd,void *in)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  void *local_4;
  
                    /* Deserializes an integer and another command/component payload; specific class
                       is not identifiable. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(cmd,&local_4);
  if (cVar2 != '\0') {
    bVar3 = MatchCommand_deserializeWithCommonFields(this,cmd);
    if (bVar3) {
      bVar3 = Deserializer_readInteger(cmd,(int *)&local_4);
      if (bVar3) {
        pcVar1 = *(code **)(*(int *)this + 0x14);
        *(bool *)((int)this + 0xc) = local_4 != (void *)0x0;
        uVar4 = (*pcVar1)(cmd);
        return (bool)uVar4;
      }
    }
  }
  return false;
}

