// addr: 0x0047ae37
// name: FUN_0047ae37
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 draw_rect_outline(int gfx_, int x1_, int y1_, int x2_, int y2_) */

uint __thiscall draw_rect_outline(void *this,int gfx_,int x1_,int y1_,int x2_,int y2_)

{
  int *piVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 extraout_EAX;
  int iVar3;
  char unaff_DI;
  int iVar4;
  int y2__00;
  int a_;
  undefined4 local_8;
  
                    /* Draws a rectangle outline using the current color, special-casing
                       horizontal/vertical/point cases and otherwise emitting four line segments.
                       Class identity is not evident. */
  if ((*(byte *)((int)this + 0x10) & 0xc) == 0) {
    uVar2 = in_EAX & 0xffffff00;
  }
  else {
    piVar1 = (int *)(*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 0x14) + 0x50) + 0xa4);
    *piVar1 = *piVar1 + 1;
    local_8._1_3_ = (undefined3)((uint)this >> 8);
    local_8 = CONCAT31(local_8._1_3_,(char)(*(uint *)((int)this + 0x104) >> 0xc)) & 0xffffff01;
    iVar4 = x1_;
    if (x1_ == x2_) {
      piVar1 = (int *)((int)this + 0x114);
      a_ = *piVar1;
      if (gfx_ == y1_) {
        y2__00 = *piVar1;
        iVar3 = gfx_ + 1;
        y1_ = gfx_;
        x1_ = x1_ + 1;
      }
      else {
        y2__00 = *piVar1;
        if (gfx_ < y1_) {
          iVar3 = y1_ + 1;
          y1_ = gfx_;
        }
        else {
          iVar3 = y1_ + -1;
          y1_ = gfx_;
        }
      }
    }
    else if (gfx_ == y1_) {
      a_ = *(int *)((int)this + 0x114);
      y2__00 = *(int *)((int)this + 0x114);
      iVar3 = y1_;
      if (x1_ < x2_) {
        x1_ = x2_ + 1;
      }
      else {
        x1_ = x2_ + -1;
      }
    }
    else {
      draw_line_or_span_command
                (this,gfx_,x1_,y1_,x1_,*(int *)((int)this + 0x114),
                 *(undefined4 *)((int)this + 0x114),0,local_8,unaff_DI);
      draw_line_or_span_command
                (this,y1_,x1_,y1_,x2_,*(int *)((int)this + 0x114),*(undefined4 *)((int)this + 0x114)
                 ,0,local_8,unaff_DI);
      draw_line_or_span_command
                (this,y1_,x2_,gfx_,x2_,*(int *)((int)this + 0x114),
                 *(undefined4 *)((int)this + 0x114),0,local_8,unaff_DI);
      a_ = *(int *)((int)this + 0x114);
      y2__00 = *(int *)((int)this + 0x114);
      y1_ = gfx_;
      iVar4 = x2_;
      iVar3 = gfx_;
    }
    draw_line_or_span_command(this,y1_,iVar4,iVar3,x1_,y2__00,a_,0,local_8,unaff_DI);
    uVar2 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  return uVar2;
}

