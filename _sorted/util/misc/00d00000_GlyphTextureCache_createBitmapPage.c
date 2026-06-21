// addr: 0x00d00000
// name: GlyphTextureCache_createBitmapPage
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GlyphTextureCache_createBitmapPage(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *outEntry;
  uint width_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates a new glyph texture cache page capped at 64x64 source dimensions,
                       initializes bookkeeping fields, and attempts to place the first glyph/bitmap
                       into it. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161160b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = (**(code **)(*param_2 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  width_ = ~-(uint)(0x40 < (int)uVar2) & uVar2 | -(uint)(0x40 < (int)uVar2) & 0x40;
  uVar2 = (**(code **)(*param_2 + 0x20))();
  uVar2 = ~-(uint)(0x40 < (int)uVar2) & uVar2 | -(uint)(0x40 < (int)uVar2) & 0x40;
  puVar3 = Mem_Alloc(0x20);
  outEntry = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = 0xffffffff;
    puVar3[3] = width_;
    puVar3[4] = uVar2;
    puVar3[7] = width_;
    outEntry = puVar3;
  }
  uStack_4 = 0xffffffff;
  bVar1 = GlyphTextureCache_allocateRect(*(void **)(param_1 + 4),outEntry,width_,uVar2,param_2);
  if (!bVar1) {
    if (outEntry != (undefined4 *)0x0) {
      *outEntry = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      _free(outEntry);
    }
    outEntry = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return outEntry;
}

