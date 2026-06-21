// addr: 0x014e3690
// name: PropertyArchive_deserializeStringMember
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PropertyArchive_deserializeStringMember(int * this, void * archive) */

uint __thiscall PropertyArchive_deserializeStringMember(void *this,void *archive)

{
  void *this_00;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint uVar2;
  
                    /* Deserializes one string-like member between virtual archive begin/end
                       callbacks. Evidence is the vtable calls at 0x10/0x14 and the call to
                       FUN_013c24d0 on this+1, matching the common string read helper. */
  this_00 = archive;
  (**(code **)(*(int *)this + 0x10))(archive,&archive);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 4));
    uVar3 = extraout_var_00;
    if (bVar1) {
      uVar2 = (**(code **)(*(int *)this + 0x14))(this_00);
      return uVar2;
    }
  }
  return (uint)uVar3 << 8;
}

