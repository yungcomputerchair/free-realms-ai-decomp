// addr: 0x0047a92b
// name: FUN_0047a92b
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void draw_line_or_span_command(int gfx_, int x1_, int y1_, int x2_, int y2_,
   undefined4 a_, undefined4 b_, uint color_, char extended_) */

void __thiscall
draw_line_or_span_command
          (void *this,int gfx_,int x1_,int y1_,int x2_,int y2_,undefined4 a_,uint b_,uint color_,
          char extended_)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Ensures a command context exists, builds a draw command for either a simple
                       span or extended line/segment, emits it, and updates a rolling pattern/phase
                       field. Class identity is not evident. */
  piVar1 = (int *)((int)this + 0x1cc);
  if (*piVar1 == 0) {
    local_18 = 0;
    local_c = 0;
    local_8 = 0;
    local_1c = 1;
    FUN_00459784(&local_1c,(int)this + 0xf0);
    cVar2 = FUN_00476e88(piVar1,&local_1c);
    if (cVar2 == '\0') {
      return;
    }
  }
  if ((char)color_ == '\0') {
    local_20 = gfx_;
    local_1c = x1_;
    local_18 = y1_;
    local_14 = x2_;
    local_10 = y2_;
    local_c = a_;
    local_8 = CONCAT31(local_8._1_3_,(undefined1)b_);
    emit_clipped_draw_command(*(void **)((int)this + 0x44),*piVar1,DAT_01bc45d0,&local_20,unaff_EDI)
    ;
  }
  else {
    local_28 = gfx_;
    local_24 = x1_;
    local_20 = y1_;
    local_1c = x2_;
    local_18 = y2_;
    local_14 = a_;
    local_8 = CONCAT31(local_8._1_3_,(undefined1)b_);
    if ((*(uint *)((int)this + 0x104) & 0x2000) == 0) {
      local_c = *(undefined4 *)((int)this + 0x1e0);
    }
    else {
      local_c = *(undefined4 *)((int)this + 0x120);
    }
    iVar3 = FUN_004760fd(*(undefined4 *)((int)this + 0x11c));
    local_10 = iVar3;
    emit_clipped_draw_command
              (*(void **)((int)this + 0x44),*(int *)((int)this + 0x1cc),DAT_01bc45d4,&local_28,
               unaff_EBX);
    if ((*(uint *)((int)this + 0x104) & 0x2000) == 0) {
      if (y1_ < gfx_) {
        iVar4 = gfx_ - y1_;
      }
      else {
        iVar4 = y1_ - gfx_;
      }
      if (x2_ < x1_) {
        iVar5 = x1_ - x2_;
      }
      else {
        iVar5 = x2_ - x1_;
      }
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
      *(uint *)((int)this + 0x1e0) = (b_ & 0xff) + iVar5 + *(uint *)((int)this + 0x1e0) & 0x1f;
    }
    if (iVar3 != 0) {
      FUN_00459af8();
    }
  }
  return;
}

