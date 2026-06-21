// addr: 0x00543a4c
// name: FUN_00543a4c
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_00543a4c(int param_1,undefined4 *param_2)

{
  void *this;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *extraout_EAX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *unaff_EDI;
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  undefined4 *local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
                    /* Looks up or creates a connection/callback object in several associative
                       containers, allocates small owner records, and returns a pointer to an
                       embedded object when registration succeeds. The surrounding class and
                       callback purpose are unclear from this context. */
  if (*(char *)(param_1 + 0xf) != '\0') {
    return 0;
  }
  local_8 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 0xb4);
  local_10 = param_1;
  uVar3 = FUN_004ecf3f(param_2,&local_8);
  FUN_00510c25(local_2c,uVar3);
  iVar4 = FUN_004debb4();
  puVar6 = *(undefined4 **)(iVar4 + 4);
  FUN_004dc61b();
  iVar4 = *(int *)(param_1 + 0x38);
  param_2 = puVar6;
  if (iVar4 != 0) {
    this = (void *)(iVar4 + 4);
    StdRbTreeInt_find(this,local_28,&param_2,unaff_EDI);
    local_c = *extraout_EAX;
    local_8 = (undefined4 *)extraout_EAX[1];
    CheckedTreeIterator_ctor(*(undefined4 *)(iVar4 + 8),this);
    bVar1 = CheckedTreeIterator_equals(&local_c,&local_18);
    if (bVar1) {
      local_8 = (undefined4 *)FUN_004ce330();
      piVar7 = IntDefaultMap_getOrInsert(this,(int *)&param_2);
      puVar5 = local_8;
      local_14 = 0;
      *piVar7 = (int)local_8;
      local_1c = 0;
      local_18 = 0x12;
      local_20 = puVar6;
      FUN_0051ffc3(&local_20);
    }
    else {
      iVar4 = CheckedTreeIterator_derefValue_nodeFlag15();
      iVar4 = FUN_004ce343(*(undefined4 *)(iVar4 + 4));
      if (((*(int *)(iVar4 + 8) == 0x12) && (*(char *)(iVar4 + 4) == '\0')) &&
         (*(int *)(iVar4 + 0xc) == 0)) {
        iVar4 = CheckedTreeIterator_derefValue_nodeFlag15();
        puVar5 = *(undefined4 **)(iVar4 + 4);
      }
      else {
        puVar5 = (undefined4 *)0xffffffff;
      }
    }
    param_1 = local_10;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0xffffffff) {
      return 0;
    }
  }
  FUN_004d0be3(*(undefined4 *)(param_1 + 0x50),param_1 + 0x4c);
  FUN_004fa32c(local_28,&param_2);
  cVar2 = FUN_004cf929(&local_18);
  if (cVar2 != '\0') {
    local_8 = &DAT_01bc7e28;
    uVar3 = FUN_0051eda6(&local_8,0,0);
    FUN_00540a94(&param_2);
    FUN_0051f07b(uVar3);
    FUN_00502bcb();
    FUN_004d83ba();
    FUN_004d83ba();
    puVar6 = Mem_Alloc(4);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = &DAT_01bc7e28;
    }
    if (puVar6 != (undefined4 *)0x0) {
      piVar7 = Mem_Alloc(0x10);
      if (piVar7 == (int *)0x0) {
        FUN_004d83ba();
                    /* WARNING: Subroutine does not return */
        _free(puVar6);
      }
      iVar4 = FUN_004e6340(0x30);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0052e65b(puVar6,FUN_00541b8e,piVar7);
      }
      if (iVar4 == 0) {
        FUN_004d83ba();
                    /* WARNING: Subroutine does not return */
        _free(puVar6);
      }
      piVar7[1] = 0;
      piVar7[2] = (int)param_2;
      piVar7[3] = iVar4;
      *piVar7 = param_1 + -0x14;
      param_2 = (undefined4 *)(iVar4 + 0x18);
      FUN_00511378(local_2c,&param_2);
      return iVar4 + 0x18;
    }
  }
  return 0;
}

