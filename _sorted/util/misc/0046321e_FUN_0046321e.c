// addr: 0x0046321e
// name: FUN_0046321e
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint build_transposed_tiled_surface_layout(void * this, undefined4 width_,
   undefined4 height_, undefined4 columns_, undefined4 rows_) */

uint __thiscall
build_transposed_tiled_surface_layout(void *this,int width_,int height_,int columns_,uint rows_)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
                    /* Builds a tiled surface layout via 00462f15 and then transposes row/tile
                       dimensions, reciprocals, and rectangle coordinates. Class identity is not
                       evident. */
  uVar2 = build_tiled_surface_layout(this,height_,width_,rows_,columns_);
  uVar4 = 0;
  if ((char)uVar2 == '\0') {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    iVar3 = *(int *)((int)this + 0x44);
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x48);
    *(int *)((int)this + 0x48) = iVar3;
    uVar1 = *(undefined4 *)((int)this + 0x50);
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x54);
    *(undefined4 *)((int)this + 0x54) = uVar1;
    if (*(int *)((int)this + 0x3c) != 0) {
      iVar5 = 0;
      do {
        iVar3 = *(int *)((int)this + 0x40) + iVar5;
        uVar1 = *(undefined4 *)(iVar3 + 4);
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = uVar1;
        uVar1 = *(undefined4 *)(iVar3 + 0xc);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x14;
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(iVar3 + 0x10) = uVar1;
      } while (uVar4 < *(uint *)((int)this + 0x3c));
    }
    iVar5 = 0;
    uVar2 = 0;
    if (*(int *)((int)this + 0x48) != 0) {
      do {
        iVar3 = *(int *)((int)this + 0x4c) + iVar5;
        uVar1 = *(undefined4 *)(iVar3 + 4);
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = uVar1;
        uVar1 = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(iVar3 + 0x10) = uVar1;
        uVar1 = *(undefined4 *)(iVar3 + 0x14);
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 0x18);
        *(undefined4 *)(iVar3 + 0x18) = uVar1;
        uVar1 = *(undefined4 *)(iVar3 + 0x1c);
        uVar2 = uVar2 + 1;
        iVar5 = iVar5 + 0x3c;
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x20);
        *(undefined4 *)(iVar3 + 0x20) = uVar1;
        uVar1 = *(undefined4 *)(iVar3 + 0x24);
        *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x28);
        *(undefined4 *)(iVar3 + 0x28) = uVar1;
        uVar1 = *(undefined4 *)(iVar3 + 0x2c);
        *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar3 + 0x30);
        *(undefined4 *)(iVar3 + 0x30) = uVar1;
        uVar1 = *(undefined4 *)(iVar3 + 0x34);
        *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar3 + 0x38);
        *(undefined4 *)(iVar3 + 0x38) = uVar1;
      } while (uVar2 < *(uint *)((int)this + 0x48));
    }
    *(undefined4 *)((int)this + 0x1c) = 2;
    uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return uVar2;
}

