// addr: 0x006d0be0
// name: FUN_006d0be0
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void buildAdjustedRangeLists(void * unused, uint * rangeState, void * arg3,
   void * source, int margin_, int side_) */

void __fastcall
buildAdjustedRangeLists(void *unused,uint *rangeState,void *arg3,void *source,int margin_,int side_)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int local_8;
  
                    /* Builds two range lists in a state buffer via FUN_006d0aa0, clamps adjacent
                       ranges, then adjusts endpoints inward by a margin; owning class/module is
                       unknown. */
  if (side_ == 0) {
    puVar7 = rangeState + 0x81;
  }
  else {
    puVar7 = rangeState + 0x183;
    rangeState = rangeState + 0x102;
  }
  *rangeState = 0;
  *puVar7 = 0;
  FUN_006d0aa0(0);
  FUN_006d0aa0(1,source,rangeState,puVar7);
  uVar3 = *rangeState;
  uVar1 = *puVar7;
  if (0 < (int)uVar3) {
    puVar4 = rangeState + 1;
    for (uVar5 = uVar3; uVar5 != 0; uVar5 = uVar5 - 1) {
      if ((1 < uVar5) && ((int)(puVar4[8] - *puVar4) < (int)puVar4[1])) {
        puVar4[1] = puVar4[8] - *puVar4;
      }
      puVar4[3] = *puVar4;
      puVar4[2] = puVar4[1] + *puVar4;
      puVar4 = puVar4 + 8;
    }
  }
  if (0 < (int)uVar1) {
    puVar4 = puVar7 + 1;
    for (uVar5 = uVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
      if ((1 < uVar5) && ((int)puVar4[1] < (int)(*puVar4 - puVar4[8]))) {
        puVar4[1] = *puVar4 - puVar4[8];
      }
      puVar4[2] = *puVar4;
      puVar4[3] = puVar4[1] + *puVar4;
      puVar4 = puVar4 + 8;
    }
  }
  local_8 = 1;
  do {
    puVar4 = rangeState + 1;
    if (uVar3 != 0) {
      rangeState[4] = rangeState[4] - margin_;
      iVar6 = uVar3 - 1;
      uVar3 = rangeState[3];
      if (iVar6 != 0) {
        do {
          iVar2 = puVar4[0xb] - uVar3;
          if (iVar2 < margin_ * 2) {
            uVar3 = iVar2 / 2 + uVar3;
            puVar4[0xb] = uVar3;
            puVar4[2] = uVar3;
          }
          else {
            puVar4[2] = uVar3 + margin_;
            puVar4[0xb] = puVar4[0xb] - margin_;
          }
          uVar3 = puVar4[10];
          puVar4 = puVar4 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      puVar4[2] = uVar3 + margin_;
    }
    local_8 = local_8 + -1;
    uVar3 = uVar1;
    rangeState = puVar7;
  } while (-1 < local_8);
  return;
}

