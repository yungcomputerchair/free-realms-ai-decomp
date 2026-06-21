// addr: 0x00462f15
// name: FUN_00462f15
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: uint build_tiled_surface_layout(void * this, int width_, int tileWidth_, uint
   columns_, int height_) */

uint __thiscall
build_tiled_surface_layout(void *this,int width_,int tileWidth_,uint columns_,int height_)

{
  float fVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
                    /* Builds a tiled layout table: allocates per-row and per-tile records, computes
                       reciprocal texture coordinate scales, clips final tiles, and stores
                       float-adjusted bounds. Class identity is not evident. */
  if (((int)columns_ < width_) && (tileWidth_ * 2 <= height_)) {
    local_24 = columns_ - 1;
    uVar2 = (int)((columns_ - 3) + width_) / local_24;
    uVar8 = 1;
    if (0 < (int)uVar2) {
      uVar8 = uVar2;
    }
    local_10 = height_ / tileWidth_;
    local_8 = uVar8 - ((int)uVar8 / local_10) * local_10;
    *(uint *)((int)this + 0x3c) = (uint)(local_8 != 0) + (int)uVar8 / local_10;
    *(uint *)((int)this + 0x44) = uVar8;
    *(undefined4 *)((int)this + 0x48) = 1;
    pvVar3 = Mem_Alloc(-(uint)((int)((ulonglong)uVar8 * 0x3c >> 0x20) != 0) |
                       (uint)((ulonglong)uVar8 * 0x3c));
    *(void **)((int)this + 0x4c) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      uVar2 = *(uint *)((int)this + 0x3c);
      uVar6 = -(uint)((int)((ulonglong)uVar2 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x14)
      ;
      puVar4 = Mem_Alloc(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      else {
        *puVar4 = uVar2;
        puVar4 = puVar4 + 1;
        puVar7 = puVar4;
        while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
          *puVar7 = 0;
          puVar7 = puVar7 + 5;
        }
      }
      *(uint **)((int)this + 0x40) = puVar4;
      if (puVar4 != (uint *)0x0) {
        local_28 = height_ + -1;
        *(float *)((int)this + 0x50) = 1.0 / (float)local_24;
        local_54 = columns_;
        *(float *)((int)this + 0x54) = 1.0 / (float)local_28;
        local_50 = local_10 * tileWidth_;
        puVar4 = (uint *)FUN_00462eee(&local_4c,&local_54);
        local_54 = *puVar4;
        uVar2 = puVar4[1];
        local_34 = 1.0 / (float)(int)local_54;
        local_38 = 1.0 / (float)(int)uVar2;
        local_50 = uVar2;
        if (local_8 != 0) {
          local_48 = local_8 * tileWidth_;
          local_4c = columns_;
          if (local_8 == 1) {
            local_4c = (1 - columns_) * uVar8 + *(int *)((int)this + 0xc) + -1 + columns_;
          }
          puVar4 = (uint *)FUN_00462eee(local_44,&local_4c);
          local_4c = *puVar4;
          uVar2 = puVar4[1];
          local_2c = 1.0 / (float)(int)local_4c;
          local_30 = 1.0 / (float)(int)uVar2;
          local_48 = uVar2;
        }
        uVar8 = 0;
        local_c = 0;
        local_14 = 0;
        if (*(int *)((int)this + 0x3c) != 0) {
          fVar1 = (float)_DAT_01764650;
          local_20 = 0;
          do {
            iVar5 = *(int *)((int)this + 0x40) + local_20;
            if ((local_c == *(int *)((int)this + 0x3c) - 1U) && (local_8 != 0)) {
              *(uint *)(iVar5 + 4) = local_4c;
              *(uint *)(iVar5 + 8) = local_48;
              *(float *)(iVar5 + 0xc) = local_2c;
              *(float *)(iVar5 + 0x10) = local_30;
              local_28 = local_8;
            }
            else {
              *(uint *)(iVar5 + 4) = local_54;
              *(uint *)(iVar5 + 8) = local_50;
              *(float *)(iVar5 + 0xc) = local_34;
              *(float *)(iVar5 + 0x10) = local_38;
              local_28 = local_10;
            }
            local_1c = 0;
            if (local_28 != 0) {
              iVar5 = local_14 * 0x3c;
              local_14 = local_14 + local_28;
              do {
                puVar4 = (uint *)(*(int *)((int)this + 0x4c) + iVar5);
                *puVar4 = local_c;
                puVar4[1] = 0;
                puVar4[2] = local_1c;
                puVar4[4] = 0;
                puVar4[5] = local_24 + uVar8;
                puVar4[6] = tileWidth_ - 1;
                puVar4[3] = uVar8;
                if (width_ <= (int)puVar4[5]) {
                  puVar4[5] = width_ - 1;
                }
                iVar5 = iVar5 + 0x3c;
                puVar4[7] = (uint)(float)(int)puVar4[3];
                puVar4[8] = (uint)(float)(int)puVar4[4];
                puVar4[9] = (uint)(float)(int)(puVar4[5] + 1);
                puVar4[10] = (uint)(float)(int)(puVar4[6] + 1);
                puVar4[0xb] = (uint)((float)puVar4[7] + fVar1);
                puVar4[0xc] = (uint)((float)puVar4[8] + fVar1);
                puVar4[0xd] = (uint)((float)puVar4[9] - fVar1);
                puVar4[0xe] = (uint)((float)puVar4[10] - fVar1);
                local_1c = local_1c + tileWidth_;
                local_28 = local_28 + -1;
                uVar8 = (uVar8 - 1) + columns_;
              } while (local_28 != 0);
            }
            uVar2 = local_c + 1;
            local_20 = local_20 + 0x14;
            local_c = uVar2;
          } while (uVar2 < *(uint *)((int)this + 0x3c));
        }
        *(undefined4 *)((int)this + 0x1c) = 1;
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x4c));
    }
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    columns_ = 0;
  }
  return columns_ & 0xffffff00;
}

