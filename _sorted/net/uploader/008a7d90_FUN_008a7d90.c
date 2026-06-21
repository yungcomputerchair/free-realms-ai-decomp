// addr: 0x008a7d90
// name: FUN_008a7d90
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool copyNestedVector4_610(void * this, void * outVector4) */

bool __thiscall copyNestedVector4_610(void *this,void *outVector4)

{
  int iVar1;
  
                    /* Copies four 32-bit values from a nested object at this+0xc8, offsets
                       0x610..0x61c, into the output buffer and returns false if the nested object
                       is absent. Class identity is unknown. */
  iVar1 = *(int *)((int)this + 200);
  if (iVar1 != 0) {
    *(undefined4 *)outVector4 = *(undefined4 *)(iVar1 + 0x610);
    *(undefined4 *)((int)outVector4 + 4) = *(undefined4 *)(iVar1 + 0x614);
    *(undefined4 *)((int)outVector4 + 8) = *(undefined4 *)(iVar1 + 0x618);
    *(undefined4 *)((int)outVector4 + 0xc) = *(undefined4 *)(iVar1 + 0x61c);
    return true;
  }
  return false;
}

