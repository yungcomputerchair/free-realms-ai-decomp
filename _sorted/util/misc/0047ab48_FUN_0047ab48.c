// addr: 0x0047ab48
// name: FUN_0047ab48
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 draw_polyline_commands(int gfx_, int mode_, uint count_, undefined4
   * points, uint * colors) */

uint __thiscall
draw_polyline_commands(void *this,int gfx_,int mode_,uint count_,undefined4 *points,uint *colors)

{
  int *piVar1;
  int iVar2;
  uint in_EAX;
  undefined4 *extraout_EAX;
  undefined4 *extraout_EAX_00;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char extended_;
  undefined4 unaff_EDI;
  int local_20;
  uint *local_c;
  
                    /* Draws connected line segments or paired segments from an array of points,
                       applying optional per-segment color overrides before calling the line command
                       helper. Class identity is not evident. */
  extended_ = (char)unaff_EDI;
  if ((((*(byte *)((int)this + 0x10) & 0xc) == 0) || (count_ == 0)) || (mode_ < 2)) {
    uVar4 = in_EAX & 0xffffff00;
  }
  else {
    piVar7 = (int *)(*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 0x14) + 0x50) + 0xa4);
    *piVar7 = *piVar7 + 1;
    iVar2 = *(int *)((int)this + 0x114);
    uVar4 = *(uint *)((int)this + 0x118);
    local_c = points;
    puVar3 = points;
    if (gfx_ == 1) {
      local_20 = mode_ >> 1;
      piVar7 = (int *)count_;
      mode_ = iVar2;
      count_ = uVar4;
      if (0 < local_20) {
        do {
          if (points != (undefined4 *)0x0) {
            uVar4 = *(uint *)((int)this + 0x104) & 0x10;
            if (uVar4 == 0) {
              mode_ = mode_ & 0xff000000U | *local_c & 0xffffff;
            }
            uVar5 = *(uint *)((int)this + 0x104) & 0x20;
            if (uVar5 == 0) {
              mode_ = mode_ & 0xffffffU | *local_c & 0xff000000;
            }
            if (uVar4 == 0) {
              count_ = count_ & 0xff000000 | local_c[1] & 0xffffff;
            }
            if (uVar5 == 0) {
              count_ = count_ & 0xffffff | local_c[1] & 0xff000000;
            }
            local_c = local_c + 2;
          }
          iVar2 = *piVar7;
          piVar6 = piVar7 + 1;
          piVar1 = piVar7 + 3;
          piVar8 = piVar7 + 2;
          piVar7 = piVar7 + 4;
          draw_line_or_span_command
                    (this,iVar2,*piVar6,*piVar8,*piVar1,mode_,count_,1,
                     *(uint *)((int)this + 0x104) >> 0xc & 0xffffff01,(char)unaff_EDI);
          local_20 = local_20 + -1;
          puVar3 = extraout_EAX_00;
        } while (local_20 != 0);
      }
    }
    else if (gfx_ == 2) {
      piVar7 = (int *)count_;
      if (1 < mode_ + -1) {
        local_20 = mode_ + -2;
        piVar6 = (int *)count_;
        mode_ = iVar2;
        count_ = uVar4;
        do {
          piVar7 = piVar6 + 2;
          if (points != (undefined4 *)0x0) {
            uVar4 = *(uint *)((int)this + 0x104) & 0x10;
            if (uVar4 == 0) {
              mode_ = mode_ & 0xff000000U | *local_c & 0xffffff;
            }
            uVar5 = *(uint *)((int)this + 0x104) & 0x20;
            if (uVar5 == 0) {
              mode_ = mode_ & 0xffffffU | *local_c & 0xff000000;
            }
            if (uVar4 == 0) {
              count_ = count_ & 0xff000000 | local_c[1] & 0xffffff;
            }
            if (uVar5 == 0) {
              count_ = count_ & 0xffffff | local_c[1] & 0xff000000;
            }
            local_c = local_c + 2;
          }
          draw_line_or_span_command
                    (this,*piVar6,piVar6[1],*piVar7,piVar6[3],mode_,count_,0,
                     *(uint *)((int)this + 0x104) >> 0xc & 0xffffff01,(char)unaff_EDI);
          extended_ = (char)unaff_EDI;
          local_20 = local_20 + -1;
          piVar6 = piVar7;
          iVar2 = mode_;
          uVar4 = count_;
        } while (local_20 != 0);
      }
      count_ = uVar4;
      mode_ = iVar2;
      if (points != (undefined4 *)0x0) {
        uVar4 = *(uint *)((int)this + 0x104) & 0x10;
        if (uVar4 == 0) {
          mode_ = mode_ & 0xff000000U | *local_c & 0xffffff;
        }
        uVar5 = *(uint *)((int)this + 0x104) & 0x20;
        if (uVar5 == 0) {
          mode_ = mode_ & 0xffffffU | *local_c & 0xff000000;
        }
        if (uVar4 == 0) {
          count_ = count_ & 0xff000000 | local_c[1] & 0xffffff;
        }
        if (uVar5 == 0) {
          count_ = count_ & 0xffffff | local_c[1] & 0xff000000;
        }
      }
      draw_line_or_span_command
                (this,*piVar7,piVar7[1],piVar7[2],piVar7[3],mode_,count_,1,
                 *(uint *)((int)this + 0x104) >> 0xc & 0xffffff01,extended_);
      puVar3 = extraout_EAX;
    }
    uVar4 = CONCAT31((int3)((uint)puVar3 >> 8),1);
  }
  return uVar4;
}

