// addr: 0x00d04650
// name: GlyphTextureCache_allocateRect
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GlyphTextureCache_allocateRect(void * this, void * outEntry, int width_,
   uint height_, void * source) */

bool __thiscall
GlyphTextureCache_allocateRect(void *this,void *outEntry,int width_,uint height_,void *source)

{
  short sVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  
                    /* Allocates space for a glyph rectangle on the current bitmap row, records x/y
                       in the output entry, advances row state, and wraps to a new row with a
                       GlyphTextureCache.log message when needed. */
  iVar3 = *(int *)((int)this + 0x18);
  bVar4 = false;
  if ((uint)(iVar3 + 2 + width_) < 0x200) {
    if (*(int *)((int)this + 0x1c) + 2 + height_ < 0x400) {
      FUN_00d04600(iVar3,*(int *)((int)this + 0x1c),width_,height_,source);
      sVar1 = *(short *)((int)this + 0x18);
      sVar2 = *(short *)((int)this + 0x1c);
      *(undefined4 *)outEntry = 0;
      *(int *)((int)outEntry + 4) = (int)sVar1;
      *(int *)((int)outEntry + 8) = (int)sVar2;
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + width_ + 2;
      if (*(uint *)((int)this + 0x20) < height_) {
        *(uint *)((int)this + 0x20) = height_;
      }
      bVar4 = true;
    }
    return bVar4;
  }
  FUN_00704db0("GlyphTextureCache.log",
               "GlyphTextureCache: Not enough space on current bitmap row.  Leaving a hole %d x %d",
               0x200 - iVar3,*(undefined4 *)((int)this + 0x20));
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + *(int *)((int)this + 0x20) + 2;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar4 = GlyphTextureCache_allocateRect(this,outEntry,width_,height_,source);
  return bVar4;
}

