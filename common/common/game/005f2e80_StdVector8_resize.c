// addr: 0x005f2e80
// name: StdVector8_resize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector8_resize(void * this, uint newSize, uint fillLo, uint fillHi) */

void __thiscall StdVector8_resize(void *this,uint newSize,uint fillLo,uint fillHi)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Resizes an 8-byte-element vector, appending fill entries when growing and
                       erasing the tail when shrinking. */
  uVar1 = StdVector8_size(this);
  if (uVar1 < newSize) {
    FUN_005e25b9(*(undefined4 *)((int)this + 8),this);
    puVar4 = &fillLo;
    iVar2 = StdVector8_size(this);
    StdVectorPair_insertFillRange(local_c,local_8,newSize - iVar2,puVar4);
  }
  else {
    uVar1 = StdVector8_size(this);
    if (newSize < uVar1) {
      FUN_005e25b9(*(undefined4 *)((int)this + 8),this);
      FUN_005e25b9(*(undefined4 *)((int)this + 4),this);
      puVar3 = (undefined4 *)FUN_005e4e22(local_14,newSize);
      FUN_005ea779(&fillLo,*puVar3,puVar3[1],fillLo,fillHi);
    }
  }
  return;
}

