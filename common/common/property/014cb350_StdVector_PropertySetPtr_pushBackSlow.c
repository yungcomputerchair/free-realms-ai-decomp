// addr: 0x014cb350
// name: StdVector_PropertySetPtr_pushBackSlow
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_PropertySetPtr_pushBackSlow(void * this, void * value) */

void __thiscall StdVector_PropertySetPtr_pushBackSlow(void *this,void *value)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_8 [2];
  
                    /* Appends a PropertySet pointer to a std::vector-like container, constructing
                       in-place when capacity remains or delegating to the reallocation/insert
                       helper otherwise. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)((int)this + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)((int)this + 0xc) - uVar1) >> 2))) {
    iVar2 = *(int *)((int)this + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_014ca070(iVar2,1,value,this,value,local_8[0]);
    *(int *)((int)this + 8) = iVar2 + 4;
    return;
  }
  uVar3 = *(uint *)((int)this + 8);
  if (uVar3 < uVar1) {
    FUN_00d83c2d();
  }
  FUN_014cb230(local_8,this,uVar3,value);
  return;
}

