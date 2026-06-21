// addr: 0x01233d70
// name: StdVector28_pushBack
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector28_pushBack(void * vector, void * element) */

void __thiscall StdVector28_pushBack(void *this,void *vector,void *element)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_8 [2];
  
                    /* Appends one 0x1c-byte element to a vector-like container, constructing
                       in-place when capacity remains or delegating to the reallocation insert
                       helper when full. It performs debug range checks before the growth path. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)((int)this + 8) - uVar1) / 0x1c) <
      (uint)((int)(*(int *)((int)this + 0xc) - uVar1) / 0x1c))) {
    iVar2 = *(int *)((int)this + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_01232a60(iVar2,1,vector,this,vector,local_8[0]);
    *(int *)((int)this + 8) = iVar2 + 0x1c;
    return;
  }
  uVar3 = *(uint *)((int)this + 8);
  if (uVar3 < uVar1) {
    FUN_00d83c2d();
  }
  FUN_01233b50(local_8,this,uVar3,vector);
  return;
}

