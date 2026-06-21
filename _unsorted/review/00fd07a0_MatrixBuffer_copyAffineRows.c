// addr: 0x00fd07a0
// name: MatrixBuffer_copyAffineRows
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void MatrixBuffer_copyAffineRows(void * dst, void * src) */

void __thiscall MatrixBuffer_copyAffineRows(void *this,void *dst,void *src)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* Copies vector/matrix rows from src to dst, inserts homogeneous w values of
                       1.0 for several rows and 0 for one row, then copies trailing metadata fields.
                        */
  uVar1 = *(undefined4 *)((int)dst + 4);
  uVar2 = *(undefined4 *)((int)dst + 8);
  *(undefined4 *)this = *(undefined4 *)dst;
  *(undefined4 *)((int)this + 4) = uVar1;
  uVar3 = _DAT_0175b420;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar1 = *(undefined4 *)((int)dst + 0x14);
  uVar2 = *(undefined4 *)((int)dst + 0x18);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)dst + 0x10);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)((int)dst + 0x24);
  uVar2 = *(undefined4 *)((int)dst + 0x28);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)dst + 0x20);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)((int)dst + 0x34);
  uVar2 = *(undefined4 *)((int)dst + 0x38);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)dst + 0x30);
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)((int)dst + 0x44);
  uVar2 = *(undefined4 *)((int)dst + 0x48);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)dst + 0x40);
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x48) = uVar2;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)dst + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)dst + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)dst + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)dst + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)dst + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)dst + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)dst + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)dst + 0x70);
  return;
}

