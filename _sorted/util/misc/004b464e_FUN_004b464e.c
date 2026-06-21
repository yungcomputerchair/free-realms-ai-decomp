// addr: 0x004b464e
// name: FUN_004b464e
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int update_text_or_glyph_range(int layout_, undefined4 begin_, undefined4
   end_, int dst_, int start_, int count_) */

int __thiscall
update_text_or_glyph_range
          (void *this,int layout_,undefined4 begin_,int end_,int dst_,int start_,int count_)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [32];
  
                    /* Updates a range in a text/glyph-like layout cache, either creating a cache
                       object and copying entries or adjusting an existing cached range. Class
                       identity is not evident. */
  iVar2 = FUN_004afbc2(layout_,begin_,dst_,start_);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_0045c1b7();
    if (uVar3 <= (uint)(dst_ + start_)) {
      iVar4 = FUN_0045c1b7();
      start_ = iVar4 - dst_;
    }
    if (*(int *)((int)this + 0x78) == 0) {
      puVar8 = (undefined4 *)((int)this + 0x74);
      uVar7 = *puVar8;
      uVar5 = FUN_004829ee(uVar7);
      cVar1 = FUN_00486c7e(end_,0,uVar5,uVar7);
      if (cVar1 == '\0') {
        pvVar6 = Mem_Alloc(0x10);
        if (pvVar6 == (void *)0x0) {
          pvVar6 = (void *)0x0;
        }
        else {
          uVar7 = FUN_0045c1b7(puVar8);
          FUN_004b0767(uVar7,puVar8);
        }
        *(void **)((int)this + 0x78) = pvVar6;
        if (iVar2 < start_ + iVar2) {
          iVar4 = iVar2;
          do {
            puVar8 = (undefined4 *)FUN_00482a01((dst_ - iVar2) + iVar4);
            puVar9 = (undefined4 *)FUN_00482a22(iVar4);
            iVar4 = iVar4 + 1;
            *puVar9 = *puVar8;
          } while (iVar4 < start_ + iVar2);
        }
      }
    }
    else {
      FUN_0049235a(*(undefined4 *)(end_ + 4),end_);
      FUN_0049235a(*(undefined4 *)(end_ + 4),end_);
      FUN_0049235a(*(undefined4 *)(*(int *)((int)this + 0x78) + 4),*(int *)((int)this + 0x78));
      puVar8 = (undefined4 *)FUN_00491f7e(local_24,dst_ + start_);
      puVar9 = (undefined4 *)FUN_00491f7e(local_2c,dst_);
      puVar10 = (undefined4 *)FUN_004a048c(local_34,iVar2);
      FUN_004af9c4(*puVar10,puVar10[1],*puVar9,puVar9[1],*puVar8,puVar8[1]);
    }
  }
  return iVar2;
}

