// addr: 0x0047a4e9
// name: FUN_0047a4e9
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: byte draw_tiled_or_stretched_rect(int gfx_, int x_, int y_, uint width_, int
   height_, int src_, uint flags_, int * clipRect) */

byte __thiscall
draw_tiled_or_stretched_rect
          (void *this,int gfx_,int x_,int y_,uint width_,int height_,int src_,uint flags_,
          int *clipRect)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EDI;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
                    /* Draws a rectangle/texture region, optionally splitting into repeated tiles
                       for horizontal/vertical tiling flags and dispatching each tile to
                       emit_clipped_draw_command. Class identity is not evident. */
  iVar1 = height_;
  piVar3 = (int *)(*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 0x14) + 0x50) + 0xac);
  *piVar3 = *piVar3 + 1;
  local_48 = gfx_;
  local_14 = *(undefined4 *)((int)this + 0x148);
  local_44 = x_;
  local_10 = height_;
  local_18 = 0;
  if ((src_ & 0xc000U) == 0) {
    if (flags_ == 0) {
      local_38 = *(int *)(height_ + 0x34);
      local_34 = *(int *)(height_ + 0x38);
      local_2c = *(int *)(height_ + 0x10);
      local_30 = *(int *)(height_ + 0xc);
    }
    else {
      local_34 = *(int *)(height_ + 0x38) + *(int *)(flags_ + 4);
      local_38 = *(int *)(height_ + 0x34) + *(int *)flags_;
      local_30 = (*(int *)(flags_ + 8) - *(int *)flags_) + 1;
      local_2c = (*(int *)(flags_ + 0xc) - *(int *)(flags_ + 4)) + 1;
    }
    if ((src_ & 0x1000U) == 0) {
      piVar3 = &local_30;
    }
    else {
      local_c = y_;
      local_8 = width_;
      piVar3 = &local_c;
    }
    local_3c = piVar3[1];
    local_40 = *piVar3;
    height_._3_1_ =
         emit_clipped_draw_command
                   (*(void **)((int)this + 0x44),*(int *)((int)this + 0x1d4),DAT_01bc45e0,&local_48,
                    unaff_EDI);
  }
  else {
    height_ = 0x1000000;
    height_._3_1_ = true;
    if (flags_ == 0) {
      local_38 = *(int *)(iVar1 + 0x34);
      iVar4 = *(int *)(iVar1 + 0xc);
      iVar5 = *(int *)(iVar1 + 0x10);
      local_34 = *(int *)(iVar1 + 0x38);
    }
    else {
      local_38 = *(int *)(iVar1 + 0x34) + *(int *)flags_;
      local_34 = *(int *)(iVar1 + 0x38) + *(int *)(flags_ + 4);
      iVar4 = (*(int *)(flags_ + 8) - *(int *)flags_) + 1;
      iVar5 = (*(int *)(flags_ + 0xc) - *(int *)(flags_ + 4)) + 1;
    }
    if ((iVar4 < 1) || (iVar5 < 1)) {
      height_._3_1_ = true;
    }
    else {
      if ((src_ & 0x4000U) == 0) {
        y_ = 0;
        x_ = 1;
      }
      else {
        x_ = y_ / iVar4;
        y_ = x_ * iVar4 - y_;
        if (y_ < 0) {
          y_ = (y_ ^ y_ >> 0x1f) - (y_ >> 0x1f);
        }
        else if (0 < y_) {
          x_ = x_ + -1;
        }
      }
      if ((src_ & 0x8000U) == 0) {
        src_ = 0;
        flags_ = 1;
      }
      else {
        flags_ = (int)width_ / iVar5;
        src_ = flags_ * iVar5 - width_;
        if (src_ < 0) {
          src_ = (src_ ^ src_ >> 0x1f) - (src_ >> 0x1f);
          flags_ = flags_ + 1;
        }
      }
      width_ = 0;
      if (0 < (int)flags_) {
        do {
          local_48 = gfx_;
          if ((src_ != 0) && (width_ + 1 == flags_)) {
            iVar5 = src_ + -1;
          }
          if (0 < x_) {
            local_8 = x_;
            local_40 = iVar4;
            local_3c = iVar5;
            local_30 = iVar4;
            local_2c = iVar5;
            do {
              bVar2 = emit_clipped_draw_command
                                (*(void **)((int)this + 0x44),*(int *)((int)this + 0x1d4),
                                 DAT_01bc45e0,&local_48,unaff_EDI);
              height_ = (uint)(height_._3_1_ & bVar2) << 0x18;
              local_48 = local_48 + iVar4;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_8 = 0;
          }
          if (y_ != 0) {
            local_40 = y_ + -1;
            local_3c = iVar5;
            local_30 = local_40;
            local_2c = iVar5;
            bVar2 = emit_clipped_draw_command
                              (*(void **)((int)this + 0x44),*(int *)((int)this + 0x1d4),DAT_01bc45e0
                               ,&local_48,unaff_EDI);
            height_ = (uint)(height_._3_1_ & bVar2) << 0x18;
          }
          local_44 = local_44 + iVar5;
          width_ = width_ + 1;
        } while ((int)width_ < (int)flags_);
      }
    }
  }
  return height_._3_1_;
}

