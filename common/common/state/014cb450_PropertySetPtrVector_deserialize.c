// addr: 0x014cb450
// name: PropertySetPtrVector_deserialize
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall PropertySetPtrVector_deserialize(undefined4 *param_1,void *param_2)

{
  void *this;
  uint extraout_EAX;
  uint uVar1;
  int iVar2;
  int local_8;
  void *local_4;
  
                    /* Reads a bounded/count-prefixed list of integer/property-set pointers and
                       appends each element through StdVector_PropertySetPtr_pushBackSlow, then
                       closes the read block. Used by bulk join/account introduce deserializers. */
  FUN_013c2690(&local_8);
  this = param_2;
  FUN_014ca9a0(local_8);
  iVar2 = 0;
  if (0 < local_8) {
    do {
      Deserializer_readIntegerThunk((void *)*param_1,&param_2);
      if ((char)extraout_EAX == '\0') {
        return extraout_EAX & 0xffffff00;
      }
      local_4 = param_2;
      StdVector_PropertySetPtr_pushBackSlow(this,&local_4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_8);
  }
  uVar1 = FUN_013c26d0();
  return uVar1;
}

