// addr: 0x014f35c0
// name: PropertyArchive_deserializeTwoStringMembers
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PropertyArchive_deserializeTwoStringMembers(int * this, void * archive)
    */

uint __thiscall PropertyArchive_deserializeTwoStringMembers(void *this,void *archive)

{
  void *this_00;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint uVar2;
  
                    /* Deserializes two string-like members inside a virtual archive begin/end pair.
                       Evidence is two sequential FUN_013c24d0 calls on this+1 and this+2 after the
                       begin callback. */
  this_00 = archive;
  (**(code **)(*(int *)this + 0x10))(archive,&archive);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 4));
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 8));
      uVar3 = extraout_var_01;
      if (bVar1) {
        uVar2 = (**(code **)(*(int *)this + 0x14))(this_00);
        return uVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

