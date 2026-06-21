// addr: 0x01534b30
// name: EventCommand_deserializeStringMemberAlt
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint EventCommand_deserializeStringMemberAlt(int * this, void * archive) */

uint __thiscall EventCommand_deserializeStringMemberAlt(void *this,void *archive)

{
  void *value;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint uVar2;
  
                    /* Alternate duplicate of the one-string event command deserializer. It wraps
                       FUN_014474d0 with archive begin/end virtual callbacks. */
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

