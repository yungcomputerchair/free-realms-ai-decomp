// addr: 0x004132c5
// name: FUN_004132c5
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint compute_available_time_budget(int thisObj_) */

uint __fastcall compute_available_time_budget(int thisObj_)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
                    /* Computes a bounded remaining time/tick budget using current timer values and
                       child/object timestamps, returning zero or the smaller available interval.
                       Class identity is not evident. */
  local_8 = FUN_005220b3();
  if (*(int *)(thisObj_ + 0x16c) != 0) {
    local_8 = 0;
  }
  if (*(int **)(thisObj_ + 0x124) != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(thisObj_ + 0x124) + 0x20))();
    uVar3 = (**(code **)(*piVar2 + 0x120))();
    if ((uVar3 < local_8) && (uVar3 != 0xffffffff)) {
      local_8 = uVar3;
    }
  }
  if (local_8 != 0) {
    local_14 = thisObj_ + 0x1d0;
    iVar4 = FUN_0040a4e3();
    if (iVar4 != 0) {
      puVar5 = (uint *)FUN_004f9372(&local_24);
      local_1c = 0xffffffff;
      local_24 = *puVar5;
      *(uint *)(thisObj_ + 0x1c8) = local_24;
      *(uint *)(thisObj_ + 0x1cc) = puVar5[1];
      local_20 = *(uint *)(thisObj_ + 0x1cc);
      uVar3 = 0xffffffff;
      local_c = 0;
      iVar4 = FUN_0040a4e3();
      if (iVar4 != 0) {
        do {
          piVar2 = (int *)FUN_0040a4f6(local_c);
          if (*(int *)(*piVar2 + 0xd8) != 0) {
            local_10 = FUN_0040a821();
            uVar6 = 0;
            if (local_10 != 0) {
              do {
                puVar5 = (uint *)FUN_0040a834(uVar6);
                uVar1 = puVar5[1];
                if ((uVar1 <= uVar3) && ((uVar1 < uVar3 || (*puVar5 <= local_1c)))) {
                  uVar3 = uVar1;
                  local_1c = *puVar5;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < local_10);
            }
          }
          local_c = local_c + 1;
          uVar6 = FUN_0040a4e3();
        } while (local_c < uVar6);
      }
      if ((local_20 < uVar3) || ((local_20 <= uVar3 && (local_24 < local_1c)))) {
        bVar7 = local_1c < local_24;
        local_1c = local_1c - local_24;
        iVar4 = (uVar3 - local_20) - (uint)bVar7;
      }
      else {
        iVar4 = 0;
        local_1c = 0;
      }
      if ((iVar4 == 0) && (local_1c < local_8)) {
        local_8 = local_1c;
      }
    }
  }
  return local_8;
}

