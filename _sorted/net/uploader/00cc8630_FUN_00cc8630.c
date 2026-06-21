// addr: 0x00cc8630
// name: FUN_00cc8630
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00cc8630(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a list/hash table of small nodes from an input array of pairs, storing
                       each pair and indexing nodes by id & 0x1f. The behavior is clear, but no
                       class, file, or vtable evidence names the owning type. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160c0cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00cc75e0(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  uVar5 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      puVar2 = Mem_Alloc(0x20);
      puVar6 = (uint *)0x0;
      if (puVar2 != (uint *)0x0) {
        puVar2[1] = 0;
        iVar4 = 0;
        do {
          puVar2[iVar4 + 2] = DAT_01b83900;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 2);
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar6 = puVar2;
      }
      local_4 = 0xffffffff;
      *puVar6 = uVar5;
      if ((*(int *)(param_2 + 8) <= (int)uVar5) && (*(int *)(param_2 + 8) < (int)(uVar5 + 1))) {
        FUN_00cc71a0(uVar5);
      }
      iVar4 = *(int *)(param_2 + 4);
      puVar6[2] = *(uint *)(iVar4 + uVar5 * 8);
      puVar6[3] = *(uint *)(iVar4 + 4 + uVar5 * 8);
      puVar6[1] = 0;
      uVar1 = *puVar6;
      puVar6[7] = *(uint *)(param_1 + 0x144);
      if (*(int *)(param_1 + 0x144) == 0) {
        *(uint **)(param_1 + 0x148) = puVar6;
      }
      else {
        *(uint **)(*(int *)(param_1 + 0x144) + 0x18) = puVar6;
      }
      *(uint **)(param_1 + 0x144) = puVar6;
      uVar3 = uVar1 & 0x1f;
      puVar6[5] = uVar1;
      puVar6[4] = *(uint *)(param_1 + 0x150 + uVar3 * 4);
      *(uint **)(param_1 + 0x150 + uVar3 * 4) = puVar6;
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(param_2 + 8));
  }
  ExceptionList = local_c;
  return;
}

