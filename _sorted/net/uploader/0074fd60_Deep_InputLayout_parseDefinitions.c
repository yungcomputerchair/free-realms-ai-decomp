// addr: 0x0074fd60
// name: Deep_InputLayout_parseDefinitions
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Deep_InputLayout_parseDefinitions(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *semanticValue_;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  void *pvVar12;
  char *pcVar13;
  char *local_38;
  int iStack_30;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Parses InputLayout/Entry XML-like definitions and creates
                       Deep_InputLayoutEntry records. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0155444b;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_c;
  iVar5 = FUN_0073ef30("InputLayout",0,1);
  do {
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return;
    }
    iVar5 = FUN_0073a200(&DAT_017ea850,0,1);
    if (iVar5 == 0) {
      local_38 = (char *)0x0;
    }
    else {
      local_38 = *(char **)(iVar5 + 4);
      if (local_38 == (char *)0x0) {
        local_38 = &DAT_01bdfb74;
      }
    }
    uVar6 = 0;
    cVar3 = *local_38;
    pcVar13 = local_38;
    while (cVar3 != '\0') {
      uVar6 = ((int)cVar3 + uVar6) * 0x401;
      pcVar13 = pcVar13 + 1;
      uVar6 = uVar6 ^ (int)uVar6 >> 6;
      cVar3 = *pcVar13;
    }
    uVar6 = (uVar6 * 9 ^ (int)(uVar6 * 9) >> 0xb) * 0x8001;
    uVar7 = uVar6 % 100;
    for (iVar5 = *(int *)(param_1 + 0x1e8 + uVar7 * 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
      if (*(uint *)(iVar5 + 8) == uVar6) goto LAB_007500a9;
    }
    semanticValue_ = (int *)(**(code **)(**(int **)(param_1 + 0x1d0) + 0x88))(uVar4);
    iVar5 = 0;
    iVar8 = FUN_0073ef30("Entry",0,1);
    while (iVar8 != 0) {
      iVar5 = iVar5 + 1;
      iVar8 = FUN_0073b7b0("Entry",0,1);
    }
    (**(code **)(*semanticValue_ + 8))(iVar5);
    iStack_30 = 0;
    iVar8 = FUN_0073ef30("Entry",0,1);
    while ((iVar8 != 0 && (iVar8 = FUN_0073a200("Stream",0,1), iVar8 != 0))) {
      puVar9 = *(undefined1 **)(iVar8 + 4);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_01bdfb74;
      }
      puVar10 = (undefined4 *)FUN_0072d5d0(puVar9,auStack_18);
      uVar1 = *puVar10;
      iVar8 = FUN_0073a200("Offset",0,1);
      if (iVar8 == 0) break;
      puVar9 = *(undefined1 **)(iVar8 + 4);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_01bdfb74;
      }
      puVar10 = (undefined4 *)FUN_0072d5d0(puVar9,auStack_14);
      uVar2 = *puVar10;
      iVar8 = FUN_0073a200(&DAT_017ea910,0,1);
      if (iVar8 == 0) break;
      pcVar13 = *(char **)(iVar8 + 4);
      if (pcVar13 == (char *)0x0) {
        pcVar13 = &DAT_01bdfb74;
      }
      iVar8 = Deep_InputLayoutEntry_parseFormat(pcVar13);
      iVar11 = FUN_0073a200("Usage",0,1);
      if (iVar11 == 0) break;
      pcVar13 = *(char **)(iVar11 + 4);
      if (pcVar13 == (char *)0x0) {
        pcVar13 = &DAT_01bdfb74;
      }
      cVar3 = Deep_InputLayoutEntry_parseSemantic(pcVar13);
      iVar11 = FUN_0073a200("UsageIndex",0,1);
      if (iVar11 == 0) break;
      puVar9 = *(undefined1 **)(iVar11 + 4);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_01bdfb74;
      }
      puVar10 = (undefined4 *)FUN_0072d5d0(puVar9,auStack_10);
      (**(code **)(*semanticValue_ + 0xc))(iStack_30,uVar1,uVar2,iVar8,cVar3,*puVar10);
      iStack_30 = iStack_30 + 1;
      iVar8 = FUN_0073b7b0("Entry",0,1);
    }
    if (iStack_30 < iVar5) {
      LOCK();
      iVar5 = semanticValue_[1] + -1;
      semanticValue_[1] = iVar5;
      UNLOCK();
      if (iVar5 != 0) {
        ExceptionList = local_c;
        return;
      }
      (**(code **)(*semanticValue_ + 4))();
      ExceptionList = local_c;
      return;
    }
    (**(code **)(*semanticValue_ + 0x10))();
    pvVar12 = Mem_Alloc(0x1c);
    uStack_4 = 0;
    if (pvVar12 == (void *)0x0) {
      pvVar12 = (void *)0x0;
    }
    else {
      pvVar12 = Deep_InputLayoutEntry_ctor(pvVar12,local_38,(int)semanticValue_);
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)((int)pvVar12 + 0xc) = *(undefined4 *)(param_1 + 0x1e0);
    if (*(int *)(param_1 + 0x1e0) == 0) {
      *(void **)(param_1 + 0x1dc) = pvVar12;
    }
    else {
      *(void **)(*(int *)(param_1 + 0x1e0) + 0x10) = pvVar12;
    }
    *(void **)(param_1 + 0x1e0) = pvVar12;
    *(uint *)((int)pvVar12 + 8) = uVar6;
    *(undefined4 *)((int)pvVar12 + 4) = *(undefined4 *)(param_1 + 0x1e8 + uVar7 * 4);
    *(void **)(param_1 + 0x1e8 + uVar7 * 4) = pvVar12;
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
LAB_007500a9:
    iVar5 = FUN_0073b7b0("InputLayout",0,1);
  } while( true );
}

