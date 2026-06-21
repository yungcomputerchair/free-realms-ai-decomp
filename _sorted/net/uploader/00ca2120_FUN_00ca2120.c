// addr: 0x00ca2120
// name: FUN_00ca2120
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00ca2120(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *unaff_ESI;
  undefined4 *puVar3;
  undefined4 uStack_34;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Copies a 16-word block into a large object, refreshes several referenced
                       resources, allocates a 0xb0-byte helper object, stores it at offset 0x29c,
                       then processes entries of type 2. No class or string evidence identifies the
                       object safely. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_016082eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00ca17d0();
  puVar3 = (undefined4 *)(param_1 + 0x470);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(**(int **)(param_1 + 0x194) + 0xc))();
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x19c) + 0x134) + 0x308) != 0) {
    puStack_8 = &stack0xffffffd0;
    uStack_34 = 0xca21b1;
    FUN_00c53c60();
    puStack_8 = &stack0xffffffd0;
    uStack_34 = 0xca21c7;
    FUN_00c53c60();
    puStack_8 = &stack0xffffffd0;
    uStack_34 = 0xca21dd;
    FUN_00c53c60();
    puStack_8 = &stack0xffffffd0;
    uStack_34 = 0xca21f3;
    FUN_00c53c60();
    puStack_8 = &stack0xffffffd0;
    uStack_34 = 0xca2209;
    FUN_00c53c60();
    puStack_8 = &stack0xffffffd0;
    uStack_34 = 0xca221f;
    FUN_00c53c60();
    puStack_8 = &stack0xffffffd0;
    uStack_34 = 0xca2235;
    FUN_00c53c60();
    puStack_8 = &stack0xffffffd0;
    uStack_34 = 0xca224b;
    FUN_00c53c60();
    puStack_8 = &stack0xffffffd0;
    uStack_34 = 0xca2261;
    FUN_00c53c60();
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x14c)) {
      do {
        puStack_8 = &stack0xffffffd0;
        uStack_34 = 0xca228b;
        FUN_00c53c60();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x14c));
    }
  }
  uStack_34 = 0xca22a5;
  FUN_00ca0460();
  FUN_00c9e0c0();
  uStack_34 = 0xca22b6;
  pvStack_4 = Mem_Alloc(0xb0);
  if (pvStack_4 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uStack_34 = *(undefined4 *)(param_1 + 0xfc);
    puStack_8 = (undefined1 *)&uStack_34;
    uVar1 = FUN_00caf150(*(undefined4 *)(param_1 + 0x19c));
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar1;
  for (iVar2 = *(int *)(param_1 + 0x138); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x70)) {
    if (*(int *)(iVar2 + 4) == 2) {
      uStack_34 = 0xca2321;
      FUN_00caf1f0();
    }
  }
  ExceptionList = unaff_ESI;
  return 1;
}

