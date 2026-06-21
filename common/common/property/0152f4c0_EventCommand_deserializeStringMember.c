// addr: 0x0152f4c0
// name: EventCommand_deserializeStringMember
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint EventCommand_deserializeStringMember(int * this, void * archive) */

uint __thiscall EventCommand_deserializeStringMember(void *this,void *archive)

{
  void *value;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint uVar2;
  
                    /* Deserializes one string-like member in an event command/archive object. It
                       wraps FUN_014474d0 with virtual begin/end calls, and FUN_014474d0 reads one
                       string field. */
  value = archive;
  (**(code **)(*(int *)this + 0x10))(archive,&archive);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StreamAdapter_readThenCommit(this,value);
    uVar3 = extraout_var_00;
    if (bVar1) {
      uVar2 = (**(code **)(*(int *)this + 0x14))(value);
      return uVar2;
    }
  }
  return (uint)uVar3 << 8;
}

