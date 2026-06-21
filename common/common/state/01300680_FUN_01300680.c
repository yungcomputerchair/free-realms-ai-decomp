// addr: 0x01300680
// name: FUN_01300680
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01300680(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  void *pvVar6;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 auStack_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_01675b4e;
  local_14 = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  if (*(int *)(param_1 + 4) == param_2) {
    return;
  }
  ExceptionList = &local_14;
  switch(*(int *)(param_1 + 4)) {
  case 3:
    if (*(int *)(param_1 + 8) != 0) {
      FUN_01231d90(1);
    }
    break;
  case 6:
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      ValueData_case6Payload_dtor(*(void **)(param_1 + 8),'\x01');
    }
  case 5:
    *(undefined4 *)(param_1 + 8) = 0;
    break;
  case 7:
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      StdStringVector_dtor(*(void **)(param_1 + 8),1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    break;
  case 8:
    piVar4 = (int *)FUN_012fbdd0(local_30);
    iVar2 = *piVar4;
    piVar4 = (int *)piVar4[1];
    piVar5 = (int *)FUN_012fbda0(local_28);
    iVar1 = *piVar5;
    piVar5 = (int *)piVar5[1];
    while( true ) {
      if ((iVar1 == 0) || (iVar1 != iVar2)) {
        FUN_00d83c2d();
      }
      if (piVar5 == piVar4) break;
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if (*(int **)(iVar1 + 8) <= piVar5) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
      }
      FUN_012fb5f0(auStack_20,0);
    }
    FUN_012fcb70();
    pvVar6 = *(void **)(param_1 + 8);
    if (pvVar6 != (void *)0x0) {
      if (*(void **)((int)pvVar6 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)pvVar6 + 4));
      }
      *(undefined4 *)((int)pvVar6 + 4) = 0;
      *(undefined4 *)((int)pvVar6 + 8) = 0;
      *(undefined4 *)((int)pvVar6 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      _free(pvVar6);
    }
    goto LAB_01300713;
  case 9:
  case 10:
  case 0xb:
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 8))(1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    break;
  case 0xc:
    pvVar6 = *(void **)(param_1 + 8);
    if (pvVar6 != (void *)0x0) {
      FUN_012c2de0();
                    /* WARNING: Subroutine does not return */
      _free(pvVar6);
    }
    goto LAB_01300713;
  case 0xd:
    pvVar6 = *(void **)(param_1 + 8);
    if (pvVar6 != (void *)0x0) {
      FUN_00521a9c();
                    /* WARNING: Subroutine does not return */
      _free(pvVar6);
    }
LAB_01300713:
    *(undefined4 *)(param_1 + 8) = 0;
    break;
  case 0xe:
    iVar2 = *(int *)(param_1 + 8);
    piVar4 = *(int **)(iVar2 + 4);
    piVar5 = (int *)*piVar4;
    while( true ) {
      if (iVar2 == 0) {
        FUN_00d83c2d(uVar3);
      }
      if (piVar5 == piVar4) break;
      if (iVar2 == 0) {
        FUN_00d83c2d(uVar3);
      }
      if (piVar5 == (int *)*(int *)(iVar2 + 4)) {
        FUN_00d83c2d(uVar3);
      }
      if ((undefined4 *)piVar5[4] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar5[4])(1);
      }
      FUN_012af3e0();
    }
    FUN_012b2870();
    pvVar6 = *(void **)(param_1 + 8);
    if (pvVar6 != (void *)0x0) {
      PropertyTree_destroyNodesAndStorage(pvVar6);
                    /* WARNING: Subroutine does not return */
      _free(pvVar6);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  switch(param_2) {
  case 3:
    pvVar6 = Mem_Alloc(0x1c);
    if (pvVar6 != (void *)0x0) {
      *(undefined4 *)((int)pvVar6 + 0x18) = 0xf;
      *(undefined4 *)((int)pvVar6 + 0x14) = 0;
      *(undefined1 *)((int)pvVar6 + 4) = 0;
      break;
    }
    goto LAB_01300a4a;
  default:
    goto switchD_013008da_caseD_4;
  case 5:
    *(undefined4 *)(param_1 + 8) = 0;
    goto switchD_013008da_caseD_4;
  case 6:
    pvVar6 = Mem_Alloc(0x10);
    goto LAB_0130092c;
  case 7:
    pvVar6 = Mem_Alloc(0x10);
    goto LAB_0130092c;
  case 8:
    pvVar6 = Mem_Alloc(0x10);
    goto LAB_0130092c;
  case 9:
    pvVar6 = Mem_Alloc(0x10);
    uStack_c = 5;
    if (pvVar6 == (void *)0x0) goto LAB_01300a4a;
    pvVar6 = PropertySet_ctor(pvVar6);
    break;
  case 10:
    pvVar6 = Mem_Alloc(0x1c);
    uStack_c = 6;
    if (pvVar6 == (void *)0x0) goto LAB_01300a4a;
    pvVar6 = (void *)MessageText_ctor();
    break;
  case 0xb:
    pvVar6 = Mem_Alloc(0x10);
    uStack_c = 7;
    if (pvVar6 == (void *)0x0) goto LAB_01300a4a;
    pvVar6 = (void *)InstanceID_ctor();
    break;
  case 0xc:
    pvVar6 = Mem_Alloc(0x10);
LAB_0130092c:
    if (pvVar6 == (void *)0x0) {
LAB_01300a4a:
      pvVar6 = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)pvVar6 + 4) = 0;
      *(undefined4 *)((int)pvVar6 + 8) = 0;
      *(undefined4 *)((int)pvVar6 + 0xc) = 0;
    }
    break;
  case 0xd:
    pvVar6 = Mem_Alloc(0xc);
    uStack_c = 9;
    if (pvVar6 == (void *)0x0) goto LAB_01300a4a;
    pvVar6 = (void *)FUN_005258fb();
    break;
  case 0xe:
    pvVar6 = Mem_Alloc(0xc);
    uStack_c = 4;
    if (pvVar6 == (void *)0x0) goto LAB_01300a4a;
    pvVar6 = (void *)FUN_01300450();
  }
  *(void **)(param_1 + 8) = pvVar6;
switchD_013008da_caseD_4:
  *(int *)(param_1 + 4) = param_2;
  ExceptionList = local_14;
  return;
}

